//SolvING IT BY USING MONTONIC STACK
//BY:AAF
//15-12-2024



int find_index(const std::vector<int>& vec, int value) {
    auto it = std::find(vec.begin(), vec.end(), value);
    if (it != vec.end()) {
        return std::distance(vec.begin(), it); // Return index if found
    }
    return -1; // Return -1 if not found
}

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        //initialize a stack
        stack<int>stk;

        //initialize a vector to store the elements 
        vector<int>ans(nums2.size(),0);

        for(int i=nums2.size()-1;i>=0;i--){
            
            //make sure the top pf the stack has the highest value 
            while(!stk.empty() and stk.top()<=nums2[i]){
                stk.pop();
            }

            //if stack is empty then this elements has no Greater element
            if(stk.empty()){
                ans[i]=-1;
            }
            //assign the greater elemetns of this elements
            else{
                ans[i]=stk.top();
            }
            //push the element into the stack to check it on the next iteration 
            stk.push(nums2[i]);
        }

        vector<int>result(nums1.size(),0);
        for(int i=0;i<nums1.size();i++){

            result[i]=ans[find_index(nums2,nums1[i])];

        }
        return result;


        
    }
};