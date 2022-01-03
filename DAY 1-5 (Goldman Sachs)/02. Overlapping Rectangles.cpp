class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int> &a, int n, long long k) {
        int ans = 0, left=0, right=0;
        long long pro = 1;
        
        while(right < n){
            pro *= a[right];
            
            while(pro >= k){
                pro /= a[left];
                left++;
            }
            
            ans += right - left + 1;
            right++;
        }
        
        return ans;
    }
};

// Sliding Window
// TC: O(N)
// SC: O(1)