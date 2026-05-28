class Solution {
public:
    bool isPalindrome(string s) {

        string str = "";

        for(char ch : s){
            if(isalnum(ch)) str += tolower(ch);
        }

        string revStr = str;

        reverse(revStr.begin(), revStr.end());

        return str == revStr;
        
    }
};
