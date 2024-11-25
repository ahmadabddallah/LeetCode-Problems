class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for(auto x:mp){
            cout<<x.first<<" "<<x.second<<endl;
        }

        vector<int>arr;

        for(auto x :mp){
            if(x.second>=2){
                arr.push_back(x.first);
                arr.push_back(x.first);
            }
            else{
                arr.push_back(x.first);
            }
        }
        cout<<"\n array is \n";
       sort(arr.begin(),arr.end());
       // reverse(arr.begin(),arr.end());
         for(auto x :arr){
            cout<<x<<" ";
        }

        for(int i=0;i<arr.size();i++){
            nums[i]=arr[i];
        }
        return arr.size();
    }
};