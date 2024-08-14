class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        
        //we will doing two frq array (one inside one)
        
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(auto x:arr){
            mp1[x]++;
        }
        for(auto x:mp1){
            mp2[x.second]++;
        }
        
        for(auto x:mp2){
            if(x.second>1){
                return false;
            }
        }
        return true;
    }
};