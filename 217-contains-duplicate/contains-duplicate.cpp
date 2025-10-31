class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // int length=nums.length();

        // int arr =new arr[length];

        // for(int i=0;i<length;i++){
        //     arr[i]=0;
        // }

        // for(int i=0;i<length;i++){
        //     arr[nums[i]]
        // }

        unordered_map <int,int> mp;
        for (int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for (auto x:mp){
            if(x.second>1){
                return 1;
            }
        }
        return 0;
    }
};