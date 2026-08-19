class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
          int count = 0;
        int currentSum = 0;
        
        // Map to store frequency of prefix sums
        std::unordered_map<int, int> sumFreq;
        
        // Base case: a prefix sum of 0 has occurred once
        sumFreq[0] = 1;
        
        for (int num : nums) {
            currentSum += num;
            
            // Check if (currentSum - k) exists in the map
            if (sumFreq.find(currentSum - k) != sumFreq.end()) {
                count += sumFreq[currentSum - k];
            }
            
            // Record the current prefix sum
            sumFreq[currentSum]++;
        }
        
        return count;
    }

        
    
};