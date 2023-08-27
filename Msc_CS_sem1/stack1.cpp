#include<iostream>
#include<stack> // include ready made stack from c++
using namespace std;

int main(){
    //stack<int> mystack;
    stack<char> mystack; 
    //int a[5] ={10,20,30,40,50}; //reverse numbers list
    string a ="india"; // reverse chars
    for(int i=0;i<5;i++){
        mystack.push(a[i]);
    }
    while(!mystack.empty()){
        char val = mystack.top();
        mystack.pop();
        cout<<val<<endl;
    }

    
    return 0;
}