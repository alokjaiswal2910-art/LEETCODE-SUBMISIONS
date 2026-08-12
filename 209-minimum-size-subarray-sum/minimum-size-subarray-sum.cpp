class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {


        int minlen= INT_MAX;
        int curr=0;
        int left =0;
        for(int right=0; right<nums.size();right++){
            curr=curr+nums[right];
            while(curr>= target){
                minlen = min(minlen,right-left+1);
                curr=curr-nums[left];
                left++;

            }
            

        }
        return  minlen == INT_MAX ? 0 : minlen;











       
}};
