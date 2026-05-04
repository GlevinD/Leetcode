class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int even = 0, odd = 0;
        for(int x : nums){
            if(x % 2 == 0)even++;
            else odd++;
        }
        for(int i = 0 ;i < n ; i++){
            if(nums[i]%2 == 0){
                even--;
                ans[i] = odd;
            }
            else{
                odd--;
                ans[i] = even;
            }
        }
        return ans;
    }
};
