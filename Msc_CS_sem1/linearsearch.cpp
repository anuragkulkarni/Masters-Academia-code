#include<algorithm>
#include<iostream>
#include<vector>
// linear search
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    int target=30;
    int N = sizeof(arr) / sizeof(arr[0]);
    bool found = false ;
    for (int i = 0; i < 5; i++)
        if (arr[i] == target){
            found = true;
            cout<<"found "<<arr[i]<<endl;
        }
    if(found==true){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
return 0;

}