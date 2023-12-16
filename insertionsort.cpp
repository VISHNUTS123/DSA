#include<bits/stdc++.h>
using namespace std;
// insertion sort program
/*
1)Select an element in each iteration from the unsorted array (using a loop)
2)Place it in its corresponding position in the sorted part and shift the remaining elements accordingly (using an inneer loop and swapping)
3)The "inner while loop " basically shifts the elements using swapping
*/
void insertionsort(int arr[], int n){
    for(int i =0;i<n;i++){
        int j =i ;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1]= arr[j];
            arr[j]=temp;
            j--;
        }
    }

    cout<<"After using the insertion sort :"<<"\n";
    for(int i =0 ; i<n ;i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){
    int n = 8 ;
    int arr[n]= { 1,5,3,2,7,4,8,6};
    cout<<"The array before sorting is :"<<"\n";
    for(int i = 0 ; i<n ;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    insertionsort(arr,n);

}