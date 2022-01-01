class Solution{
     public:
     int minSubArrayLen(int trg, vector<int> &nums) {
          int n=nums.size(), ans=INT_MAX, i=0, j=0, sum=0;
          
          while(j < n){
               sum += nums[j++];
               
               while(sum >= trg){
                    ans = min(ans, j-i);
                    sum -= nums[i++];
               }
          }
          
          return (ans==INT_MAX) ? 0 : ans;
     }
};

// Two Pointer Approach
// TC: O(N)
// SC: O(1)