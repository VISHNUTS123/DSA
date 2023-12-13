#include<bits/stdc++.h>
using namespace std;
bool isPrime1(int n){
   for (int i=2;i<n;i++){
    if(n%i==0)
      return 0;
    
   }
   return 1;

}
//brute force approach 

   bool Prime2(int n){
   for (int i=2;i<=sqrt(n);i++){
    if(n%i==0)
      return 0;
    
   }
   return 1;

}
// optimal approach

int main(){
    cout<<"Solution by Brute force approach :"<<endl;
    if(isPrime1(7)==1)
        cout<<"Prime number "<<endl;
    
    else
      cout<<"Not a Prime NUmber :"<<endl;

       cout<<"Solution by Brute force approach :"<<endl;
    if(Prime2(36)==1)
        cout<<"Prime number "<<endl;
    
    else
      cout<<"Not a Prime NUmber :"<<endl;
}
