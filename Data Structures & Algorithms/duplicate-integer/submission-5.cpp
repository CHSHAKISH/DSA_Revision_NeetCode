class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        // for(int i = 0; i < nums.size(); i++){
        //     for(int j = i+1; j < nums.size(); j++){
        //         if(nums[i] == nums[j]) return true;
        //     }
        // }

        // return false;

        // sort(nums.begin(), nums.end());

        // for(int i = 1; i < nums.size(); i++){
        //     if(nums[i] == nums[i-1]) return true;
        // }

        // return false;

        // unordered_set<int> st;

        // for(int num : nums){
        //     if(st.count(num)) return true;
        //     st.insert(num);
        // }

        // return false;

        return unordered_set<int>(nums.begin(), nums.end()).size() < nums.size();
    }
};