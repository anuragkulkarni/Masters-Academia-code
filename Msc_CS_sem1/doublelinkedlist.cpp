# include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node *next;
    Node *prev;
    
};

int main()
{
Node *first = new Node();
first->val=1;
first->next=NULL;
first->prev=NULL;
//cout<<first->val<<endl;

Node *second = new Node();
second->val=3;
second->next=first;
second->prev=NULL;
first->prev=second;
//cout<<second->val<<endl;

Node *temp = second;
while(temp!=NULL){
    cout<<" "<< temp ->val << endl;
    temp = temp->next;
}
return 0;
}