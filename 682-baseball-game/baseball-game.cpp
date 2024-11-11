#include<string>
class Solution {
public:
    int calPoints(vector<string>& operations) {
    
    vector<int>result;

    int n;
    n=operations.size();
     int flag=0;
    for(int i=0;i<n;i++){

    if(operations[i]!="+" and operations[i]!="C" and operations[i]!="D" )
    {
        result.push_back(stoi(operations[i]));
        cout<<result[result.size()-1]<<endl;
        flag=stoi(operations[i]);
    }
    
   else if(operations[i]=="C"){
        result.pop_back();
    }
    else if(operations[i]=="D"){
        result.push_back(result[result.size()-1]*2);
    }

    else if(operations[i]=="+"){

        result.push_back(result[result.size()-1]+result[result.size()-2]); 
        
    }
    }

    int sum=0;

    for(auto &x:result){
        sum+=x;
    }
    return sum;   
    }
};