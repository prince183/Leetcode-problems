class Solution {
public:
    int findParent(char c , unordered_map<char,char> & parent)
    {
        if(parent[c] != c) parent[c] = findParent(parent[c], parent);
        return parent[c];
    }
    
    bool equationsPossible(vector<string>& equations) {
        unordered_map<char, char> parent;
        
        for(auto itr : equations)
        {
            parent[itr[0]] = itr[0];
            parent[itr[3]] = itr[3];
        }
        
        for(auto itr : equations)
        {
            char x = findParent(itr[0], parent);
            char y = findParent(itr[3], parent);
            
            if(itr[1]=='=') parent[y] = x;
        }
        for(auto itr : equations)
        {
            char x = findParent(itr[0], parent);
            char y = findParent(itr[3], parent);
            
            if(itr[1]=='!' && x==y) return false; 
        }
        return true;
    }
};