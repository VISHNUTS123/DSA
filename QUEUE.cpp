#include<bits/stdc++.h>
using namespace std;
void printqueue(queue<int> q1){
    queue<int>q2 = q1;
    while(!q2.empty()){
        cout<<q2.front()<<"\n";
        q2.pop();
    }
}
int main()
{
   queue <int> q;
   for(int i =1; i<=5;i++){
    q.push(i);
   }

   cout<<"The elements of the queque are : "<<endl;
   printqueue(q);

   cout<<"Size of the queque : "<<q.size()<<endl;
   cout<<"The front element of teh queque : "<<q.front()<<endl;
   cout<<"The last element of the queque : "<<q.back()<<endl;
   cout<<"Pop the front element : "<<endl;
   q.pop();
  printqueue(q);
  
 return 0;
   
}