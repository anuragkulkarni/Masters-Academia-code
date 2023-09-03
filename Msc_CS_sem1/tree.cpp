# include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node *left;
    Node *right;
    
};

int main()
{
Node *twenty=new Node();
twenty->val=20;
twenty->left=NULL;
twenty->right=NULL;

Node *ten=new Node();
ten->val=10;
twenty->left=ten;

Node *thirty=new Node();
thirty->val=30;
twenty->right=thirty;

return 0;
}