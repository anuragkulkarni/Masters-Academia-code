#include<iostream>
#include<stdio.h>
using namespace std;

int partition(int arr[],int l,int r){

int i = l-1;
int pivot = arr[r];

for(int j=l;j<=r:j++)
{

    if(arr[j]<pivot){
        i++;
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i] = temp;


    }

    int temp=arr[i+1];
    arr[i+1]=arr[r];
    arr[r]=temp;

    return i+1;
}



}

void quicksort(int arr[],int l,int r){
int pi = partition(arr,l,r);

quicksort(arr,l,pi-1);
quicksort(arr,pi+1,r);

}

int main(){

    int arr[]={10,20,30,40,50,60,70};
    quicksort(arr,0,6);

    for(int i=0;i<=6;i++){
        cout<<arr[i]<<""<<endl;
    }


    return 0;

}
