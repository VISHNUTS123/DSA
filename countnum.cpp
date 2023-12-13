#include<bits/stdc++.h>
using namespace std;

int countDigits1(int n){
   int j=0;
   while(n!=0){
    // the loop will terminate when n becomes zero
    n = n/10;
    j++;// O(n) O(1)
   }
   
   cout<< j<<" is the answer using approach 1"<<endl;

}

int countDigits2(int n){
   int i=0;
   string s =to_string(n);// used to convert integer to string
   i = s.length();//used to count the string length
   
   cout<< i<<" is the answer using approach 2"<<endl;
   // O(1) O(1)
}
int countDigits3(int n){
   int i=floor(log10(n)+1); 
      cout<< i<<" is the answer using approach 3"<<endl;
      // O(1) O(1)

}

int main(){
cout <<"ENTER  A VALID NUMBER"<<endl;
int n=0;
cin>>n;
countDigits1(n);
countDigits2(n);
countDigits3(n);

return 0;
}
