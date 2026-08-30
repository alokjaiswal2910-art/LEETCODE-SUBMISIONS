class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
          int left = 0;
        int right = numbers.size() - 1;
        
        while (left < right) {
            int currentSum = numbers[left] + numbers[right];
            
            if (currentSum == target) {
                // Found the pair
                return {left+1, right+1}; 
            } 
            else if (currentSum < target) {
                // Sum is too small, move the left pointer to increase the sum
                left++;
            } 
            else {
                // Sum is too large, move the right pointer to decrease the sum
                right--;
            }
        }
        
        return {};
        
    }
};