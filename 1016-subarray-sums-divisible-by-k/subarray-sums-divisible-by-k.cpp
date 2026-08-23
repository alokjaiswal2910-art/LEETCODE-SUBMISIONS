class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        int sum=0;
        unordered_map <int,int> f;
        f[0]=1;
        for (int i=0;i<n;i++){
            sum+=nums[i];
            int que=sum%k;
            if(que<0){
                que=que+k;
            }
            if(f.find(que)!=f.end()){
                count+=f[que];

            }
            f[que]++;
        }
        return count;



        
    }
};