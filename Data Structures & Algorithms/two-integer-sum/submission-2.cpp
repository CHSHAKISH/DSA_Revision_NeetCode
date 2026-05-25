class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // for(int i = 0; i < nums.size(); i++){
        //     for(int j = i+1; j < nums.size(); j++){
        //         if(nums[i] + nums[j] == target){
        //             return{i, j};
        //         }
        //     }
        // }
        
        // return {};

        vector<pair<int, int>> v;

        for(int i = 0; i < nums.size(); i++){
            v.push_back({nums[i], i});
        }

        sort(v.begin(), v.end());

        int i = 0, j = nums.size()-1; 

        while(i < j){
            int sum = v[i].first + v[j].first;
            if(sum == target){
                return {min(v[i].second, v[j].second), max(v[i].second, v[j].second)};
            }
            else if(sum < target) i++;
            else j--;
        }

        return {};



        
    }
};
