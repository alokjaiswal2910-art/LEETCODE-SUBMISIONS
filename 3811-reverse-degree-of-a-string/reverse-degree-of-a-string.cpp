class Solution {
public:
    int reverseDegree(string s) {
        int degree=0;

        
        for (int i =0;i<s.size();i++){
            int a= s[i];
            int val = 26-(a-97);
            degree+=(i+1)*val;


        }
        return degree;
        
    }
};