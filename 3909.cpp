class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int mx = INT_MIN;
        int idx = 0;
        long long sum_ac=0,sum_dc=0;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            mx = max(mx,(int)nums[i]);
            if(nums[i] == mx)idx = i;
        }
        for(int i = 0 ; i <= idx ; i++){
            sum_ac += (long long)nums[i];
        }
        for(int j = idx ; j < n ; j++){
            sum_dc += (long long)nums[j];
        }
        if(sum_ac > sum_dc)return 0;
        else if(sum_dc > sum_ac)return 1;
        return -1;
    }
};
