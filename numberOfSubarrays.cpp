class Solution {
public:
    int func(vector<int>& nums, int k){
        int start=0,odd=0;
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2) odd++;
            while(odd>k){
                if(nums[start]%2) odd--;
                start++;
            }
            res+=(i-start+1);
        }
        return res;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return func(nums,k)-func(nums,k-1);
        
    }
};
