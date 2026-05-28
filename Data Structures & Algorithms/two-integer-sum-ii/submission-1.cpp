class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        // int l = 0, r = numbers.size()-1;

        // while(l < r){
        //     int sum = numbers[l] + numbers[r];
        //     if(sum == target) return {l+1, r+1};
        //     else if(sum < target) l++;
        //     else r--;
        // }

        // return {};

        unordered_map<int, int> mp;

        for(int i = 0; i < numbers.size(); i++){
            int diff = target - numbers[i];

            if(mp.count(diff)) return{mp[diff],i+1};
            mp[numbers[i]] = i+1;
        }

        return {};
        
    }
};
