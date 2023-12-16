#include<bits/stdc++.h>
using namespace std;

// brute force approach
int sortarray(vector<int> &arr ){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}

//optimal approach using a comparison variable

void sortoptim(int arr[] , int n){
    
    int max1 = arr[0];
    for(int i =0 ; i<n ; i++){
        if(max1<arr[i])
        {
            max1 = arr[i];
        }
    }
   cout<<"The maximum element in the array is : "<<max1<<endl;
}


int main()
{
    vector<int> arr1 = {2,5,1,3,0};
    cout<<"The Largest element in the array is: "<<sortarray(arr1)<<endl;
    int arr []= {4,5,6,6,8,9,6,6,5,2,2,222,56,59};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortoptim(arr,n);
}