## 01. Subset Sums

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/subset-sums2234/1)

### Problem Description

**Task:** Given an array arr of integers, return the sums of all subsets in the list. Return the sums in any order.Examples:Input: arr[] = [2, 3]

#### Examples

##### Example 1

- **Output:**
```text
[0, 5, 6, 7, 11, 12, 13, 18]
```
- **Explanation:** The possible subset sums are 0 (no elements), 5, 6, 7, and their combinations.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(2^n)
- **Expected Auxiliary Space Complexity:** O(2^n)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-17 18:03:40
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
  public:
  void findsubset(vector<int>&arr,int index,int n,int sum,vector<int>&ans){
      if(index==n){
        ans.push_back(sum);
        return;
      }
      
      findsubset(arr,index+1,n,sum+arr[index],ans);
      findsubset(arr,index+1,n,sum,ans);
  }
  
  
    vector<int> subsetSums(vector<int>& arr) {
       
        // code here
       vector<int>ans;
       findsubset(arr,0,arr.size(),0,ans);
       return ans;
    }
};
```

*Generated on: 17/10/2026, 18:04:12*