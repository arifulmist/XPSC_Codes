class Solution {
    public:
    vector<vector<int>>ans;
           vector<int>ds;
    void solve(int s,vector<int>&a)
    {
        ans.push_back(ds);
        for(int i=s;i<a.size();i++)
        {
            if(i!=s && a[i]==a[i-1]) continue;
             ds.push_back(a[i]);
             solve(i+1,a);
             ds.pop_back();
        }
    
    }
        vector<vector<int>> subsetsWithDup(vector<int>& a)
        {
          sort(a.begin(),a.end());
           solve(0,a) ;
           
           return ans;
    
           }
        
    };