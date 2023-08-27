#include<algorithm>
#include<iostream>
#include<vector>
// sum of array
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    int sum=0;
    for (int i=0;i<5;i++){
        cout<<arr[i]<<endl;
        sum+=arr[i];
    }
    cout<<"sum="<<sum<<endl;//calculating the sum  of above given array
    return 0;

}