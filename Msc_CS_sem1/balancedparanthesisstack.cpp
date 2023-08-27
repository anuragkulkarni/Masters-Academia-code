#include<iostream>
#include<stack>
using namespace std;

int main(){
    //stack<int> mystack;
    stack<char> mystack; 

    string a="()()";


    // balance paranthesis
    for(int i=0;i<4;i++){
        if(a[i] =='('){
            mystack.push(a[i]);
        }
        else if(a[i]==')'){
            mystack.pop();
        }
    }
    if(mystack.empty()==true){
        cout<<"the paranthesis is balanced"<<endl;

    }
    else{
        cout<<"not balanced"<<endl;
    }
    return 0;
}