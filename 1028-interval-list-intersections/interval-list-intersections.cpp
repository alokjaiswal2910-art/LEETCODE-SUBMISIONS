// class Solution {
// public:
//     vector<vector<int>> intervalIntersection(vector<vector<int>>& firstlist, vector<vector<int>>& secondlist) {
//         vector<vector<int>> res;
//         if(firstlist.empty() || secondlist.empty()){
//             return res;
//         }
//         int start=firstlist[0][0];
//         int end=firstlist[0][0];
//         int i =0;
//         int n=min(firstlist.size(),secondlist.size());
        
        

        
        
//         while(i<n){
//             int sstart=secondlist[i][0];
//             int send=secondlist[i][1];
//             if(end>=sstart){
//                 int a= max(start,sstart);
//                 int b=min(end,send);
//                 res.push_back({a,b});
//                 continue;
//             }
//             start=firstlist[i+1][0];
//             end=firstlist[i+1][1]; 
//             i++;

            
//         }
//         return res;

        
//     }
// };

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> res;
        int i = 0, j = 0;

        while (i < firstList.size() && j < secondList.size()) {
            int start = max(firstList[i][0], secondList[j][0]);
            int end   = min(firstList[i][1], secondList[j][1]);

            if (start <= end) {
                res.push_back({start, end});
            }

            // Move the pointer of the interval that ends first
            if (firstList[i][1] < secondList[j][1]) {
                i++;
            } else {
                j++;
            }
        }
        return res;
    }
};
