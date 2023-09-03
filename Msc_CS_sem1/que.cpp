#include<iostream>
using namespace std;

int number[5];
int rear = -1, front=0,elements=0;
bool empty(){
    if(elements==0)
        return true;
    else
        return false;
}

bool full(){
    if(elements==5)
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
   //front+=1;
   front+=1%5;  //circular que
   elements--;
   cout<<"removed "<<val<<endl;
   }
}
void enque(int val)
{
   if(full()){
      cout<<"que is full"<<endl;
   }else{
    //rear+=1;
   rear+=1%5;   //circular que
   number[rear]=val;
   elements++;
   cout<<"inserted:"<<val<<endl;
   }
}

int main(){
 enque(65);
 enque(78);
 enque(89);
 deque();
 deque();
 deque();
 enque(5);
 enque(6);
 deque();
 deque();
 enque(3);

}