class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
                int n= nums.size();
        int prefix=0;
        int suffix=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        
        for (int i=0;i<n;i++){
            if(i==0){
                int suf=sum-nums[0];
                if( suf ==0){
                    return 0;
                }
                else{
                    continue;
                }
            
                
            }
            prefix+=nums[i-1];
            suffix= sum-prefix-nums[i];
            if(suffix==prefix){
                return i;
            }
        }
        return -1;
        
    }
        
    
};