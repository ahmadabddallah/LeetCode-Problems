#include <sstream>
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream str_stream;
        
        str_stream<<s;
        string t;
        int length=0;
        while(str_stream>>t){

            length=t.size();
        }
       
        return length;
    }
};