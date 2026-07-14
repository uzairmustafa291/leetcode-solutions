#include<iostream>
#include<stack>
using namespace std;

int main(){
stack <int> s;
s.push(1);
s.push(4);
cout<<s.top()<<endl;
int s1=s.top();
cout<<s1<<endl;
if(s.empty()){
    cout<<"stcck is empty"<<endl;
}
else {
    cout<<"stack is not empty"<<endl;
}
return 0;
}

/* 
important notes to be noted,
no index wise getting elements 
only play with top element 
use only push pop and top whenever needed
that is enough for stack.
*/