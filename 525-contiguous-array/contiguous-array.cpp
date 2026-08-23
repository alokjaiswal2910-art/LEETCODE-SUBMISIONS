class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> f;
        int count=0;
        int zero=0;
        int one=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zero++;
            }
            else{one++;}
            int diff= zero-one;
            if(diff==0){
                count=max(count,i+1);
                continue;
            }
            if(f.find(diff)==f.end()){
                f[diff]=i;
                
            }
            else{
                count=max(count,i-f[diff]);
            }



        }
        return count;



        
    }
};