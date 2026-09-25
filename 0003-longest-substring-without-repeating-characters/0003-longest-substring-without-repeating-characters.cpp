class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int start=0,end=0;
        bool freq[256]={0};
        int ans=0;
        while(end<s.size())
        { 
        while(freq[s[end]]){
            freq[s[start]]=0;
            start++;
        }

         freq[s[end]]=1;
          end++;

          ans=max(ans,end-start);
          }
        
        return ans;
         
    }
    
   
};