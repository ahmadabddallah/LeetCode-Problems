#include <sstream>
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        stringstream st(s);
        string word;
        string result;
        stringstream result_stream;
        while(st>>word){
            reverse(word.begin(),word.end());
            result_stream<<word;
            result+=word;
            result+=' ';
        }
        result.pop_back();
        return result;
    }
};