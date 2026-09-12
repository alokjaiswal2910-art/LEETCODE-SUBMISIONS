class Solution {
public:
    int calPoints(vector<string>& op) {

        stack<int>st;
        
        for (int i=0;i<op.size();i++){
            if (op[i]=="C"){
                if(!st.empty()){
                    st.pop();
                }
                continue;
            }
            if (op[i]=="D"){
                if(!st.empty()){
                    int temp =st.top();
                    temp=temp*2;
                    st.push(temp);;
                }
                continue;
            }
            if (op[i]=="+"){
                if(st.size()>=2){
                    int temp1= st.top();
                    st.pop();
                    int temp2=st.top();
                    st.push(temp1);
                    st.push(temp1+temp2);
                }
                continue;
            }
            else{
                st.push(stoi(op[i]));;

            }

        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();

        }
        
        return sum;
    }
};