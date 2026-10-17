class Solution {
public:
  void permutation(vector<int>&nums,int index,int n,vector<vector<int>>&ans){

    if(index==n){
        ans.push_back(nums);
        return;
    }

    vector<bool>used(21,0);

    for(int i=index;i<n;i++){
        if(!used[nums[i]+10]){
            used[nums[i]+10]=1;
            swap(nums[index],nums[i]);
            permutation(nums,index+1,n,ans);
            swap(nums[i],nums[index]);
        }
    }

  }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        permutation(nums,0,nums.size(),ans);
        return ans;
    }
};