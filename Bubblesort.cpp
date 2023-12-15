// program for bubble sort
#include<bits/stdc++.h>
using namespace std;
/*
1)First we will select the range of the unsorted array. For that we will run a loop  that will signify the last index of the selected range .The loop will run backward from index n-1 to 0
2)Within the loop , we will run another loop (j) range 0 to i , to psuh the maximum element to the last index of the selected range , by repeatedlly swapping adjacent elements 
if arr[j]>arr[j+1]
3)after each iteration the last part of the array will be sorted 
4)After n-1 iuteration the array will be sorted
 
*/

void bubble_sort(int arr[], int n){
   for(int i = n-1; i>=0;i--){
    for(int j =0 ; j<= i-1 ;j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j+1];
            arr[j+1]= arr[j];
            arr[j]= temp;

        }
    }
   }

   cout<<"After using Bubble sort  :"<<"\n";
   for( int i =0 ; i<n ; i++){
    cout<<arr[i]<<"\t";

   }
}

int main(){
   int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubble_sort(arr, n);
    return 0;
}

  
