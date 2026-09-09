class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      vector<int> res(nums.size());

      int left = 0;
      int right = nums.size() - 1;

      int i = nums.size() - 1;

      while (left <= right) {
        if (abs(nums[left]) > abs(nums[right])) {
          res[i] = nums[left] * nums[left];
          left++;
          i--;
        }
        else {
          res[i] = nums[right] * nums[right];
          right--;
          i--;
        }
      }

      return res;
    }
};