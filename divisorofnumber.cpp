#include<bits/stdc++.h>
using namespace std;

// program to find the divisors of a number
void divisor1(int n){
    for(int i =1; i<=n ;i++){
        if(n%i == 0)
        cout<<i<< "\t";
    }
    cout<<endl;
}// this the bruteforce approach

void divisor2(int n){
    for (int i =1; i<= sqrt(n);i++){
        if (n%i ==0){
           cout<<i<<"\t";
           if(i != n/i){
            cout<<n/i<<"\t";
           
           }
        }
    }
}//this is the optimal approach , but the didvisors will not be displayed in an order
// uses the concept if 4 divides 36 , the quotient 9 also divides 36 , also the sqrt of 36 is 6 which acts as the middle term for the divisors
int main(){
    cout<<"The output of the program using BRUTE FORCE approach "<<endl;
   divisor1(36);
   cout<<"The output of the program using OPTIMAL approach "<<endl;
   divisor2(36);
}
