class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>v;
        int arr[3]={};
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                arr[0]++;
            }
            else if(nums[i]==1){
                arr[1]++;
            }
            else{
                arr[2]++;
            }
        }
        int j=0;
        for(int i=0;i<3;i++){
             for(int k=arr[i];k>0;k--){
                    nums[j++]=i;
                }
            } 
    }
    
};