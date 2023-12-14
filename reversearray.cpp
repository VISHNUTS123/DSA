#include<bits/stdc++.h>
using namespace std;

void reverse1(int arr[], int n){
   reverse(arr,arr+n);
}//using library function

void PrintArray(int arr[],int n){
cout<<"\nThe reversed array is :"<<endl;
for(int i =0; i<n;i++){
    cout<<arr[i]<<"\t";
}// can be used for any function
}

void reverse2(int arr[], int n){
    int p1 =0 , p2 =n;// assigning two pointers so that we can track them easily
    while(p1<p2){
        swap(p1,p2);
        p1++, p2--;
    }
}//space optimised iterative method

int main()
{   int n =5;
    int arr[n] = {10,4,7,3,8};
    reverse1(arr,n);// caling approach 1
    PrintArray(arr,n);
    reverse2(arr,n);// caling approach 2
    PrintArray(arr,n);
    // u can use the naive approach by copying each element to an empty array by using back iteration 
    



}