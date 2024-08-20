class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int p=0,q=p+1;
        for(;p<nums.size();p++){
            if(nums[p]==0 and p<nums.size()-1){
                q=p+1;
                for(;q<nums.size();q++){
                    if(nums[q]!=0){
                        swap(nums[p],nums[q]);
                        break;
                    }
                }
            }
        }
    }
};