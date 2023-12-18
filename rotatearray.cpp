#include<bits/stdc++.h>
using namespace std;

/*

most time efficient way for the rotate array by k elements 
vector<int> rotateArray(vector<int> arr, int k) {
    int n = arr.size();
    for (int i = 0; i < k; i++) {
        int temp = arr[0];
        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }

    return arr;
}


*/

//Approach 1 using the temp array
//for rotating elements to right 
//copy the last k elements into the temp array , Shift n-k elements from the begining by k position to the right 
// copy the elements into the main array from the temp array
//Time ccomplexity O(N) Space complexity O(K)
void RotateRight1(int arr[], int n, int k){
    if (n==0)
     return ;
    k = k%n;
    if(k>n)
      return;
    int temp[k];
    for(int i=n-k; i<n ;i++){
        temp[i-n-k] = arr[i];
    }
    for(int i = n-k-1 ;i>=0;i--){
        arr[i+k] = arr[i];
    }

    for(int i =0 ;i<k ;i++){
        arr[i] = temp[i];
    }

    for(int i = 0 ;i<n ;i++)
{
    cout<<arr[i]<<"\t";
}}

//for rortatin the elements to left
//same procedure for the above but the range of the for lo0p changes
void RotateLeft1(int arr [],int n , int k){
    if (n==0)
    return ;
    k = k%n;
    if(k>n)
     return ;
    int temp[k];
    for(int i =0;i<k ;i++)
    {
     temp[i]= arr[i];
    }
    for(int i = 0;i<n-k;i++){
        arr[i] =arr[i+k];
    }
    for(int i = n-k ; i<n ;i++){
        arr[i]=temp[i-n-k];
    }
     for(int i = 0 ;i<n ;i++)
{
    cout<<arr[i]<<"\t";
}
}

//optimal approach REVERSAL ALGORITHM 
//reverse the last k elements of the array
// reverse the first n-k elements of the array
// reverse the whole array
//for rotating elements to right
//Time complexity O(N) Space complexity O(1)
void reversed(int arr[],int start, int end){
    while(start<= end){
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end]=temp;
        start ++ ;
        end--;
    }   
}

void RotateRight2(int arr[],int n, int k){
    reversed(arr, 0,n-k-1);
    //reverse first n-k elements
    reversed(arr,n-k,n-1);
    //reverse the last k elements 
    reversed(arr,0,n-1);
    //reverse the whole array
     for(int i = 0 ;i<n ;i++)
{
    cout<<arr[i]<<"\t";
}
}

void RotateLeft2(int arr[],int n, int k){
    reversed(arr,0,k-1);
    //reverse the first k elements
    reversed(arr,k,n-1);
    //reverse last n-k elements
    reversed(arr, 0,n-1);
    //reverse the whole array
     for(int i = 0 ;i<n ;i++)
{
    cout<<arr[i]<<"\t";
}
}
int main(){
    int k = 2;
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={5,6,7,8,9};
    int arr3[5]={11,1,2,13,14};
    int arr4[5]={16,1,7,18,19};
    cout<<"The array after left shift using approach 1"<<endl;
    RotateLeft1(arr1,5,k);
    cout<<"\n";
    cout<<"The array after left shift using approach 2"<<endl;
    RotateLeft2(arr2,5,k);
    cout<<"\n";
    cout<<"The array after right shift using approach 1"<<endl;
    RotateRight1(arr3,5,k);
    cout<<"\n";
    cout<<"The array after right shift using approach 2"<<endl;
    RotateRight2(arr4,5,k);
}