class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int>mypq;

        for(auto x: nums){
            mypq.push(x);
        }
        int result=-2;
        while(k--){
            //cout<<mypq.top();
            result=mypq.top();
            mypq.pop();
           // cout<<endl;
        }
        return result;
    }
};