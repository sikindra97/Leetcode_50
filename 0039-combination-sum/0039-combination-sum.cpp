class Solution {
public:
vector<vector<int>>ans;
vector<int>temp;
void solve(int index,int sum,int n,vector<int>& candidates, int target){
    if(sum == target){
    ans.push_back(temp);
    return;
}

if(sum > target){
    return;
}

if(index == n){
    return;
}
    //take 
    int val=sum+candidates[index];
    temp.push_back(candidates[index]);
    solve(index,val,n,candidates,target);
 
    temp.pop_back();
     solve(index+1,sum,n,candidates,target);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(0,0,candidates.size(),candidates,target);
        return ans;

    }
};