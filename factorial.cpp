#include<bits/stdc++.h>
using namespace std;
 int factorial (int n ){
    if (n==0){
        return 1;

    }

    return n*factorial(n-1);// returns until n becomes zero
 }// function to find factorial using recursive function

 int main(){
    int n =5;
    int m = factorial(n);
    cout<<"factorial "<< m;
 }