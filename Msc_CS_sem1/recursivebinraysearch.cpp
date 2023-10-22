#include <iostream>
#include<stdlib.h>
using namespace std;

int binarySearching(int arr[],int l,int r,int val)
{

if (l>r){
    return false;
}
int mid=(l+r)/2;

if(val == arr[mid]){
    return true;

}else if(val < arr[mid] ){
    binarySearching(arr,l,mid-1,val);
}
else{
    binarySearching(arr,mid+1,r,val);
}
}

int main(){
int arr[]={10,20,30,40,50};
bool found=binarySearching(arr,0,3,20);
cout<<found;
return 0;

}
