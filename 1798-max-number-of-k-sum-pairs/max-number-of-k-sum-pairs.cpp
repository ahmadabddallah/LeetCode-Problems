class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end());

        int p=0,q=nums.size()-1;

        int sum=0;
        int counter=0;

        while(q>p){
            sum=nums[p]+nums[q];
            if(sum==k){
                counter++;
                q--;
                p++;
            }
            else if(sum>k){
                q--;
            }
            else{
                p++;
            }
        }
        return counter;   
    }
};