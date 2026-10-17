class Solution {
public:

  void findsubset(vector<int>&arr,int index,int n,vector<int>&temp,vector<vector<int>>&ans){
  
    if(index==n){
        ans.push_back(temp);
        return;
    }


    findsubset(arr,index+1,n,temp,ans);
    temp.push_back(arr[index]);
     findsubset(arr,index+1,n,temp,ans);
     temp.pop_back();

  }
    vector<vector<int>> subsets(vector<int>& arr) {
        vector<vector<int>>ans;
        vector<int>temp;
        findsubset(arr,0,arr.size(),temp,ans);
        return ans;
        
    }
};