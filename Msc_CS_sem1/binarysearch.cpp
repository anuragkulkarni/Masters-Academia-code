# include<iostream>
#include <chrono>
#include<vector>
using namespace std;
using namespace std::chrono;
//function for binary search
int binarySearch( int t)
{
    int arr[10]={5,10,15,20,25,30,35,40,45,50};
    int m,len=sizeof(arr)/sizeof(arr[0]);
    int l= 0 , r=len -1;
    while(l<=r)
    {
          m=l+(r-l)/2;
          if(arr[m]==t){
            return m;
          }
            
          if(arr[m]<t)
          {
            l=m+1;
          }
          else{
            r=m-1;
          }     
    }
return 0 ;
}

int main()
{
    auto start = high_resolution_clock::now(); //start timer
    int val=binarySearch(30); // call the binary search
    if (val == 0){
        cout << "Element is not present in array"<<endl;
    }

    else{
        cout << "Element is present at index " << val<<endl;
    }
    auto stop = high_resolution_clock::now();//end timer
    auto duration = duration_cast<microseconds>(stop - start);//calculate total time
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
}
