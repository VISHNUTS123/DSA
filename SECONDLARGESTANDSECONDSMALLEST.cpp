#include<bits/stdc++.h>
using namespace std;
//Bruteforce approach using sorting itself but fails if there exist duplicate elements
void bruteforce(int arr[], int n){
    if(n==0 || n ==1)
      cout<<"No second largest or second smallest element is present "<<endl;
    sort(arr, arr+n);
    int secsmall = arr[1];
    int seclarge= arr[n-2];
    cout<<"The second largest element in the array : "<<seclarge<<"\n";
    cout<<"The second smallest element in the array : "<<secsmall;
}
//Better approach first you will find the highest and smallest element susing two variable then will update the elements to the next level

void Betterapp(int arr[], int n){
    if(n==0 || n==1)
        cout<<-1<<" "<<-1<<endl;  // edge case when only one element is present in array
    int small=INT_MAX,second_small=INT_MAX;
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for(i=0;i<n;i++)
    {
        small=min(small,arr[i]);
        large=max(large,arr[i]);
    }
  for(i=0;i<n;i++)
    {
        if(arr[i]<second_small && arr[i]!=small)
            second_small=arr[i];
        if(arr[i]>second_large && arr[i]!=large)
            second_large=arr[i];
    }

    cout<<"Second smallest is "<<second_small<<endl;
    cout<<"Second largest is "<<second_large<<endl;
}
int main(){
   int arr[]={1,2,4,6,7,5};
   int n=sizeof(arr)/sizeof(arr[0]);
   cout<<"solution by Brute force approach "<<endl;
   bruteforce(arr,n);
   cout<<"\n \n ";
   cout<<"Solution by better approach: "<<endl;
   Betterapp(arr,n);
}
//working on optimal approach 