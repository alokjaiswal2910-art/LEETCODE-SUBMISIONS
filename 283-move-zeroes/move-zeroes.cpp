class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left=0;
       
        for(int j =0; j<nums.size();j++){
            if (nums[j]!=0){
                nums[left]=nums[j];
                left++;
            }

            
        }
        while(left<nums.size()){
            nums[left]=0;
            left++;
        }
        
    }
};