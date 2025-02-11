class Solution {
    public:
        vector<vector<string>> partition(string s)
        {
           vector<string>path;
           vector<vector<string>>result;
           bak(s,0,path,result);
           return result;
            
        }
        private:
        void bak(string s,int ss,vector<string>path,vector<vector<string>>&res)
        {
            if(ss==s.size())
            {
                res.push_back(path);
                return;
            }
        
        for(int e=ss+1;e<=s.size();e++)
        {
            if(ispl(s,ss,e-1))
            {
                path.push_back(s.substr(ss,e-ss));
                bak(s,e,path,res);
                path.pop_back();
            }
    
        }
        }
        bool ispl(string s,int l,int r)
        {
            while(l<r)
            {
                if(s[l++]!=s[r--]) return false;
            }
            return true;
        }
        
    };