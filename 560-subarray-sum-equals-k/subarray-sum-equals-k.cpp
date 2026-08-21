class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int sum = 0;
        
        // Map to store frequency of prefix sums
        std::unordered_map<int, int> sumFreq;
        
        // Base case: a prefix sum of 0 has occurred once
        sumFreq[0] = 1;
        for (int i=0;i<nums.size();i++){
            sum+=nums[i];
            int que= sum -k;
            if (sumFreq.find(que)!=sumFreq.end()){
                count+=sumFreq[que];
            }
            sumFreq[sum]++;
        }
        
        
           
            
        
        
        return count;
    }

        
    
};