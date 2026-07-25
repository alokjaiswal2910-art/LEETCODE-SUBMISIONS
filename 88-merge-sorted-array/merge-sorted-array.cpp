class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0, k = 0;
        vector<int> num(m + n);
        if(m==0){
            while(j<n){
                 num[k]= nums2[j];
                 k++;
                 j++;
            }
            while(i<m){
                 num[k]= nums1[i];
                 k++;
                 i++;
            }
           
        }
        while (i<m && j <n){
            if (nums1[i]<nums2[j]){
                num[k]=nums1[i];
                k++;
                i++;
            }
            else{
                num[k]=nums2[j];
                k++;
                j++;

            }
        }
        while (i<m){
            num[k]=nums1[i];
            k++;
            i++;
        }
        while(j<n){
            num[k]=nums2[j];
            k++;
            j++;

        }
        k=0;
        i=0;
        while(i<m+n){
            nums1[i]=num[k];
            i++;
            k++;

        }

    }
};
