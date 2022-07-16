class Solution {
private:
    void fun(int ind, vector<int> &arr, vector<int> &ds,vector<vector<int>> &ans){
        if(ind==arr.size()){
            ans.push_back(ds);
            return;
        }
        
        ds.push_back(arr[ind]);
        fun(ind+1,arr,ds,ans);
        ds.pop_back();
        fun(ind+1,arr,ds,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>> ans;
        vector<int> ds;
        fun(0,nums,ds,ans);
        return ans;
    }
};