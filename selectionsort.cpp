#include<bits/stdc++.h>
using namespace std;
 // program for selection sort
 /*
 1)First we will select the range of the unsorted array using a lop (say i)that indicates the starting index of the range 
  the loop will run forward from 0 to n-1 .
2) Now in each iteration , we will select the minium element from the range of the unsorted array using an inner loop 
3)Afteer that , we will swap the minium elemnt with the first element of the selected range 
4)Finally after each iteration , we will find that the array is sorted upto the firat index of the range 
*/ 
 void selection_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min = i;
        for(int j =i+1; j<n;j++){
            if(arr[j]<arr[min]){
                {
                min = j;
            }
            }
        }
      int temp = arr[min];
      arr[min] = arr[i];
      arr[i]= temp;
    }


    cout<<"After selection sort : "<<"\n";
    for(int i =0 ; i<n;i++){
      cout<<arr[i]<<"\t";
    }
 }

 int main(){
    int arr[]= {13,46,24,59,36,59,63};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before selection sort : "<<"\n";
    for (int i =0 ; i<n ;i++){
        cout<<arr[i]<<"\t";
    }

    cout<<"\n";
    selection_sort(arr,n);
 }