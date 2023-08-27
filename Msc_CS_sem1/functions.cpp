
#include<iostream>

// function calling in cPP
using namespace std;
//function declaration 
int sumof2numbers(int n1,int n2){
    int sum = 0;
    sum =n1+n2;
    return sum ;
}
double areaofcircle(double r){
   double area = 3.14*r*r;

   return area;
}

int linearsearch(int n){
    int arr[5]={10,20,30,40,50};
    bool found = false ;
    for (int i = 0; i < 5; i++)
        if (arr[i] == n){
            found = true;
        }
    if(found==true){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){

    int sum=sumof2numbers(3,6);  // functions calling for sum
    double areaof_circle = areaofcircle(2); // calling area of circle
    int linear_search=linearsearch(20);
    cout<<sum<<endl;
    cout<<areaof_circle<<endl;
    cout<<linear_search<<endl;
    return 0;

}