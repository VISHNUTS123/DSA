#include<bits/stdc++.h>
using namespace std;
//union of two sorted array and the result should also be sorted
//union refers to that of union of two sets
// approach 1 using map , u know that map can contain the ferequncy of distinct elements
// we use map bcoz we want the answer to be sorted at the end, while using u will get the answer but is not sorted 
//time complexity O((m+n)log(m+n))
//Space complexity O(m+n) O(1)
vector<int> Union1(int arr1[], int arr2[], int n , int m){
    map<int ,int> count;
    vector<int> answer;
    for(int i = 0 ; i<n;i++)
    count[arr1[i]]++;
    for(int i = 0; i<m ;i++)
    count[arr2[i]]++;
    for(auto &it : count)
      answer.push_back(it.first);
    return answer;

} 

//approach two in we are using set
//time complexity O((m+n)log(m+n))
//Space complexity O(m+n) O(1)
vector<int> Union2(int arr1[], int arr2[],int n , int m)
{
    set <int> s;
    vector<int> answer2;
    for(int i =0 ; i<n ;i++)
      s.insert(arr1[i]);
    for(int i = 0 ; i<m ; i++)
      s.insert(arr2[i]);
    for(auto &it : s)
      answer2.push_back(it);

    return answer2;
}
//approach 3
//using two pointers for the arrr1 and arr2 and comparing the values we push the value to the vector
vector<int> Union3(int arr1[], int arr2[], int n, int m){
    int i =0 , j =0;
    vector<int> answer3;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            if(answer3.size()==0|| answer3.back() != arr1[i]){
                answer3.push_back(arr1[i]);
                i++;
            }
            else{
                if(answer3.size()==0 || answer3.back()!= arr2[j]){
                    answer3.push_back(arr2[j]);
                    j++;
                }
            }
        }
    }
    //if any element is left in arr1
    while(i<n){
        if(answer3.back()!=arr1[i])
          answer3.push_back(arr1[i]);
          i++;

    }
// if any element is left in arr2
    while(j<m){
        if(answer3.back()!=arr2[j])
          answer3.push_back(arr2[j]);
          j++;
          
    }

    return answer3;
}



int main(){
    int arr1[] ={1,2,3,4};
    int arr2[] ={3,5,6,7,8,9};
    int arr3[]={10,11,12};
    int arr4[] ={15,16,17};
    int  arr5[] ={9,10,14,15};
    int arr6[] ={7,8,9,10,15};
    cout<<"The result by approach 1 "<<endl;
     vector<int>ans1 =Union1(arr1,arr2,sizeof(arr1)/sizeof(arr1[0]),sizeof(arr2)/sizeof(arr2[0]));
      for(auto &it : ans1)
        cout<<it<<"\t";
          cout<<"\n";
    cout<<"The result by approach 2"<<endl;
     vector<int>ans2 =Union1(arr3,arr4,sizeof(arr3)/sizeof(arr3[0]),sizeof(arr4)/sizeof(arr4[0]));
        for(auto &it :ans2)
         cout<<it<<"\t";
          cout<<"\n";
        
    cout<<"The result by approach 3 "<<endl;
     vector<int>ans3 =Union1(arr5,arr6,sizeof(arr5)/sizeof(arr5[0]),sizeof(arr6)/sizeof(arr6[0]));
      for(auto &it : ans3)
       cout<<it<<"\t";
          cout<<"\n";
         


 

}