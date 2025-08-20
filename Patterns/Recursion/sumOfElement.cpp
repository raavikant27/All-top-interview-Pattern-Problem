class Solution {
public:
    int arraySum(vector<int>& nums) {
        // Start from index 0
        return sum(nums, 0);
    }

private:
    int sum(vector<int>& nums, int i) {


        int n=nums.size();
        // Base case: out of bounds
        if (i >= n) {
            return 0;
        }
        // Add current element and recurse
        return nums[i] + sum(nums, i + 1);
    }

};