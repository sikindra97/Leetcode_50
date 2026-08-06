class Solution {
public:
vector<string>ans;
 void solve(int open,int close,string s,int n){
  if(open==n && close==n){
    ans.push_back(s);
    return;
  }
  if(open<n){
    s.push_back('(');
    solve(open+1,close,s,n);
    s.pop_back();
     }
     if(close<open){
     s.push_back(')');
    solve(open,close+1,s,n);
    s.pop_back();
     }
 }
    vector<string> generateParenthesis(int n) {
  
        solve(0,0,"",n);
        return ans;


    }
};