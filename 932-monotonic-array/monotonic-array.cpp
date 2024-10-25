class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
        //check if increasing or decreasing 

        int r=nums[nums.size()-1];
        int l=nums[0];

        int flag=0;
        if(nums.size()<=2){
            flag=1;
            
        }
        else if(l>=r){   //thats mean it's decreasing
            flag=1;
            for(int i=1;i<nums.size();i++){
                if(nums[i]>nums[i-1]){
                    flag=0;
                    break;
                }
            }
        }
        else if(l<r){   //it's increasing
            flag=1;
            for(int i=1;i<nums.size();i++){
                if(nums[i]<nums[i-1]){
                    flag=0;
                    break;
                }
            }
        }
        return flag;
    }
};