#include<iostream>
using namespace std;

int number[5];
int rear = -1, front=0,elements=0;
bool empty(){
    if((rear+1)==front)
        return true;
    else
        return false;
}

bool full(){
    if(rear==4)
        return true;
    
    else
        return false;
    
}

void deque(){
   if(empty()){
      cout<<"que is empty"<<endl;
   }
   else{
   int val=number[front];
   front+=1;
   cout<<"removed "<<val<<endl;
   }
}
void enque(int val)
{
   if(full()){
      cout<<"que is full"<<endl;
   }else{
   rear+=1;
   number[rear]=val;
   cout<<"inserted:"<<val<<endl;
   }
}

int main(){
 enque(65);
 enque(78);
 enque(89);
 deque();
 deque();
}