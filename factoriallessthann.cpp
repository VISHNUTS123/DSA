#include<bits/stdc++.h>
using namespace std;
// coding ninjas problem factorial numbers not greater than n
vector<long long> factorial(long long n){
    vector<long long> result;// should initialise a vector inside the function so that it can return the vector
    long long i=1 , fact =1;
    if(n==1)
     result.push_back(1);// will push or add the element to the vector
     else{
        while(fact<=n){
            fact= fact*i;
            i++;
        
        if(fact<=n)
         result.push_back(fact);
        }
     }
   
    return result;//returning the vector 
}

int main(){
    vector<long long> v =factorial(10);
    for(int i=0 ; i<v.size();i++)
    cout<<v[i]<<"\t";// printing all the elements of the vector
}