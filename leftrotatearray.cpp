#include<bits/stdc++.h>
using namespace std;
// bruteforce approach
// time complexity O(N)   Space Complexity O(N)
//We can take another dummy array of the same length and then shift all elements in the array toward the left and then at the last element store the index of 0th index of the array and print it.
void rotate(int arr[] ,int n){
    int temp[n] ;
    for(int i = 0; i<n; i++){
      temp[i-1]= arr[i];
    }
    temp[n-1] = arr[0];
for(int i =0;i<n;i++){
    cout<<temp[i]<<"\t";

}
 cout<<endl;
    }
//optimal approach
// we have to furst shift the array towards the left , we store the value of first index in a temp variable and will placethe temp value in the last after the array is shifted back
// time complexity O(N) Space complexity O(1)
void leftrotate(int arr[],int n){
    int temp = arr[0];
    for(int i = 0;i<n;i++){
        arr[i]=arr[i+1];

    }
    arr[n-1] = temp;
    for(int i =0 ; i<n ;i++){
        cout<<arr[i]<<"\t";
    }

}
int main(){
    int n = 5;
    int arr [] = {1,2,3,4,5};
    rotate(arr,n);
    cout<<"\n";
    int x = 10 ;
    int arr1[]={1,2,3,4,5,6,7,8,9,10};
    leftrotate(arr1, x);
}





//solution for conding ninjas problem on left rotate
// vector<int> rotateArray(vector<int>& arr, int n) {
//     vector<int> rotated;
//     int temp = arr[0];
//     int i =0 ;
//     for(i=1;i<n;i++){
//        rotated.push_back(arr[i]);
//     }

//     rotated.push_back(temp);

//     return rotated;

// }
