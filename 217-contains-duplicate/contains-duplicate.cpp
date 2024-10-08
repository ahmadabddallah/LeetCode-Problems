class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int,int> mp;

        for(auto x: nums){
            mp[x]++;
            if(mp[x]==2){
                return true;
            }
        }
        return false;
    }
};