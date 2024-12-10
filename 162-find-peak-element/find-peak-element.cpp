class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        priority_queue<pair<int,int>>mypq;
        int index=0;
        for(auto x:nums){
            mypq.push({x,index++});
        }

        return mypq.top().second;
    }
};