class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()) return false;

        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // return s==t;

        // unordered_map<char, int> mpS, mpT;

        // for(int i = 0; i < s.length(); i++){
        //     mpS[s[i]]++;
        //     mpT[t[i]]++;
        // }

        // return mpS == mpT;

        vector<int> count(256);

        for(int i = 0; i < s.size(); i++){
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for(int cnt : count){
            if(cnt != 0) return false;
        }

        return true;

    }
};
