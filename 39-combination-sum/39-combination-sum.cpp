class Solution {
public:
    void findCombination(int index, vector<int> &ds, vector<vector<int>> &ans, int target,vector<int> &arr ){
        if(index == arr.size())
        {
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }
        
        if(target>=arr[index]){
            ds.push_back(arr[index]);
            findCombination(index,ds,ans,target- arr[index],arr);
            ds.pop_back();
        }
        findCombination(index+1,ds,ans,target,arr);
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int > ds;
        findCombination(0,ds,ans,target,candidates);
        return ans;
    }
};