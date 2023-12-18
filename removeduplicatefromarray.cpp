#include<bits/stdc++.h>
using namespace std;
// program to remove the duplicate element s from a sorted array
// brute force approach in this approach we sue the property of set that only uniques elements will be present in the set
//Time coplexity is O(N*logN)+O(N)   Space complexity is O(N)
int remove(int arr[],int n ){
set<int> set1 ;
for(int i =0 ;i<n ;i++){
    set1.insert(arr[i]);//insert() is used to insert element to the set
}
int k = set1.size();
int j =0;
for(int x : set1){
    arr[j++]= x;
}

return k;// returns the size of the set
}

//optimal approach to remove the duplicate elements from a soreted array 
// time coplexity is O(N) Space complexity is O(1)
//TWO PONTER APPROACH WILL UPDATE i TILL THE ELEMENT OF ARR[i]!=ARR[j]
//return i+1 at the end
int removeDuplicate(int arr[],int n ){
     int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) 
      {
        i++;
        arr[i]=arr[j];
      }
    
    
  }
  return i + 1;
}
int main(){
   int arr[] = {2,2,3,3,4,4,4,5,5,5,6,6};
   int n = sizeof(arr)/sizeof(arr[0]);
   int x = remove(arr, n);
   cout<<"The array after removing duplicate element is "<<endl;
   for (int i = 0 ; i<x ;i++){
    cout<<arr[i]<<"\t";
   }
     cout<<"\n";
  int k = removeDuplicate(arr, n);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
}