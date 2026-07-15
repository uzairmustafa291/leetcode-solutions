#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        stack<int>st;
        for (int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                st.pop();
            }
            else if(operations[i]=="+"){
                int val1=st.top();
                st.pop();
                int val2=st.top();
                st.pop();
                st.push(val2);
                st.push(val1);
                st.push(val1+val2);
            }
            else if (operations[i]=="D"){
                int val=st.top();
                //st.push(val);
                st.push(val*2);
            }
            else{
                st.push(stoi(operations[i]));
            }
        }
        int sum1=0;
        while(!st.empty()){
            sum1+=st.top();
            st.pop();
        }

        return sum1;
    }
};

int main(){
    Solution s;
    vector<string>operations={"5","2","C","D","+"};
    cout<<s.calPoints(operations)<<endl; // 30
    vector<string>operations1={"5","-2","4","C","D","9","+","+"};
    cout<<s.calPoints(operations1)<<endl; // 27
}