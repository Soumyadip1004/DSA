class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map<int, int> hash;

      for (int i = 0; i < nums.size(); i++) {
        if(!hash.contains(target - nums[i])) {
          hash.insert({nums[i], i});
        }
        else {
          return {
            hash.at(target - nums[i]), 
            i
          };
        }
      }

      return {-1, -1};
    }
};