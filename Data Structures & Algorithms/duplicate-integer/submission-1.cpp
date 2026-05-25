class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        if(nums.size() < 1) return false;

        for(int i = 0; i < nums.size()-1; i++){
            int count = 1;
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] == nums[j]) count++;
            }
            if(count > 1){
                return true;
                break;
            }
        }
        return false;
        
    }
};