#include<bits/stdc++.h>
using namespace std;

/*
 1)First, call the recursive function with the given array and the range of n(size of the array).
2)Inside that recursive function, repeatedly swap 2 adjacent elements if arr[j] > arr[j+1].
Here, the maximum element of the unsorted array reaches the end of the unsorted array after each recursive call.
3)Each time after step 2, call the recursion again decreasing the range by 1.
4)The recursion will continue until the range(i.e. the size) of the array is reduced to 1.
Base Case: if(n == 1) return;


*/

void bubble(int arr[], int n){
    if (n==1)
    return ;
   for(int j =0 ;j<n-1 ; j++){
    if (arr[j]>arr[j+1]){
        int temp = arr[j+1];
        arr[j+1]= arr[j];
        arr[j]= temp;
        
    }
   }

   bubble(arr, n-1);

}
 int main(){
    int arr[] = { 2,3,4,5,0,5,8,18,16,20};
    int n = sizeof(arr)/sizeof(arr[1]);
    cout<<"The elements before the sorting is :"<<"\n";
    for(int i =0; i<n;i++){
        cout<<arr[i]<<"\t";
        
    }
    cout<<"\n";
    bubble(arr,n);
    cout<<"The elements after the sorting is :"<<"\n";
    for(int i =0; i<n;i++){
        cout<<arr[i]<<"\t";
    }
 }
