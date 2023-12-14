#include<bits/stdc++.h>
using namespace std ;
void naive(int n){
    if (n==0){
        cout<<"0"<<endl;

    }
    else if(n==1){
        cout<<"0"<<"\t"<<"1"<<"\t";

    }else{
        int fib[n+1];
        fib[0]=0;
        fib[1]=1;
        for(int i =2; i<=n;i++){
            fib[i]=fib[i-1]+fib[i-2];
        }
        cout<<"The fibonacci series up to "<<n <<" th term :"<<endl;
        for(int i =0;i<=n;i++){
            cout<<fib[i]<<"\t";
        }
    }
}

void spaceoptimised(int n){
    if (n==0){
        cout<<"0"<<endl;

    }
    else if(n==1){
        cout<<"0"<<"\t"<<"1"<<"\t";

    }else{
       int secondlast=0 , last=1;
       cout<<"The fibonacci series up to "<<n<<" th term :"<<endl;
       cout<<secondlast<<"\t"<<last<<"\t";
       int cur=0;
       for(int i=2;i<=n;i++){
        cur =last+secondlast;
        secondlast= last;
        last = cur;
        cout<<cur<<"\t";
       }
    }
}//space optimised iterator method

int fibonacci(int N){
   
   // Base Condition.
   if(N <= 1)
   {
       return N;
   }

   // Problem broken down into 2 functional calls
   // and their results combined and returned.
   int last = fibonacci(N-1);
   int slast = fibonacci(N-2);
   
   return last + slast;

}// will only return the final answer

int main()
{
  naive(10);
  cout<<"\n";
  spaceoptimised(10);
  cout<<"\n";
  cout<<fibonacci(10)<<endl;
}
