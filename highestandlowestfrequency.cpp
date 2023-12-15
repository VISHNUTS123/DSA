#include<bits/stdc++.h>
using namespace std;
//this is a program to find the highest and lowest frequency element
//brute force approach
/*
1)Make a visited array of type boolean
2)Use the first loop to point to an element of array
3)Intialize the variable count to 1
4)Make that index true in the visited array
5)Run the second loop , if we find the lement then mark the visited index true and increase the count 
6)If the visited index is already true then skip the other steps
*/
// time complexity O(N*N) Space complexity O(N)
void countFreq(int arr[],int n){
  vector<bool> visited (n,false);
    int maxFreq =0,minFreq=n, max =0, min=0;

    for(int i=0 ;i<n;i++){
        if (visited[i]==true)
        continue;//skip the element if already processed
        int count =1;
        for(int j =i+1;j<n;j++){
            if(arr[i]==arr[j]){
                visited[j]=true;
                count++;
            }
        }


        if(count>maxFreq){
            max=arr[i];
            maxFreq=count;
        }

         if(count<minFreq){
            min=arr[i];
            minFreq=count;
        }
    }
     cout << "The highest frequency element is: " << max << "\n";
    cout << "The lowest frequency element is: " << min << "\n";
  
}

//optimised approach using  map
/*
1)Take unordered_map<int,int>/HashMap of <int,int>
2)Use a for lopp to iterate the array 
3)If the element is not present in the map then insert it with frequency 1, otherwise increase the exixting frequency by 1
4)After visiting the whole array , we will find the element with the highest frquency and the element with the lowest frequqncy by iteratingf the map
*/

void Frequency(int arr[],int n){
   unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
        map[arr[i]]++;

    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;
    // Traverse through map to find the elements.
    for (auto it : map) {
        int count = it.second;
        int element = it.first;

        if (count > maxFreq) {
            maxEle = element;
            maxFreq = count;
        }
        if (count < minFreq) {
            minEle = element;
            minFreq = count;
        }
    }

    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
}

 int main(){
    int arr[]={10,6,5,5,5,10,10,7,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The frequency by approach 1 :"<<endl;
    countFreq(arr,n);
    cout<<"\n";
    cout<<"The frequency by approach 2 :"<<endl;
    int arr1[n]={10,6,5,5,5,10,10,7,5,8};
    Frequency(arr1,n);

 }