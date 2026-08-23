class Solution {
public:
    
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> f;
        int sum=0;
        int count=0;
        f[0]=1;
        for (int i =0;i<nums.size();i++){
            sum+=nums[i];
            int que=sum-k;
            if(f.find(que)!=f.end()){
                count+=f[que];
            }
            f[sum]++;
        }
        return count;
    }



        
    
};