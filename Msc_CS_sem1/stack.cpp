#include<iostream>
using namespace std;

int a[5]={};
int top =-1;

bool empty(){
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
}

bool full(){
    if(top == 4){
        return true;
    }
    else{
        return false;
    }
}

int gettop(){
    return a[top];
}

void push(int val){
    if(full()){
        cout<<"stack is full";
    }
    else{
        top +=1;
        a[top]=val;
    }
}

void pop(){
    if(empty()){
        cout<<"stack is empty";
    }
    else{
        int val = a[top];
        top-=1;
        cout<<val<<endl;
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    while(!empty()){
        pop();
    }
    return 0;
}