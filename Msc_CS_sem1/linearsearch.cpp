#include<algorithm>
#include<iostream>
#include <chrono>
#include<vector>
// linear search
using namespace std;
using namespace std::chrono;
int main(){
    auto start = high_resolution_clock::now(); //start timer
    int arr[10]={5,10,15,20,25,30,35,40,45,50};
    int target=30;
    int N = sizeof(arr) / sizeof(arr[0]);
    bool found = false ;
    for (int i = 0; i < 10; i++)
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
auto stop = high_resolution_clock::now();//end timer
auto duration = duration_cast<microseconds>(stop - start);//calculate total time
cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
return 0;

}