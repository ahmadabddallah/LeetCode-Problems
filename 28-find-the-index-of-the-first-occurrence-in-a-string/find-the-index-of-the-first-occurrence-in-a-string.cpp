class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int len_haystack =haystack.size();

        int len_needle =needle.size();


        if(len_needle>len_haystack){
            return -1;
        }

        int j=0;
        int counter=0;
        bool flag=0;
        int first_occur=-1;
        for(int i=0;i<len_haystack;){
            
            if(haystack[i]==needle[j]){
                if(first_occur==-1)
                first_occur=i;
                i++;
                j++;

                if(j==len_needle){
                    flag=1;
                    break;
                }
            }
            else{
                i=counter++;
                j=0;
                first_occur=-1;
            }
        }
       if(flag==1)
       return first_occur;
       else
       return -1;
    }   
};