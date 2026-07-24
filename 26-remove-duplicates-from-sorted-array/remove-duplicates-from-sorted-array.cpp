#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        // Edge case: An empty array has 0 unique elements
        if (nums.empty()) {
            return 0;
        }
        
        // 'left' tracks the position where the next unique element should be written
        int left = 1;
        
        // 'right' scans through the array starting from the second element
        for (int right = 1; right < nums.size(); ++right) {
            // If the current element is different from the previous one, it's unique
            if (nums[right] != nums[right - 1]) {
                nums[left] = nums[right];
                left++; // Move the left pointer forward
            }
        }
        
        // 'left' represents the total number of unique elements (k)
        return left;
    }
};
