class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<int,int> mz;
        int mzs= magazine.size(), rns= ransomNote.size();
        
        for(int i=0; i<mzs; i++)
        {
            mz[magazine[i]]++;
        }
        for(int i=0; i<rns; i++)
        {
            if(mz[ransomNote[i]]>0)
                mz[ransomNote[i]]--;
            else
                return false;
        }
        return true;
    }
};