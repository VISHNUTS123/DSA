#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int> mp;
  for(int i= 1; i<=5;i++){
      mp.insert({i,i*10});
  }
  cout <<"\n Elements present in the map : "<<endl;
  cout<<"\n Key \t Element "<<endl;
  for(auto it = mp.begin() ; it!=mp.end();it++){
    cout<< it->first <<"\t"<<it-> second<<endl;
  }
  int n= 30 ;
  if (mp.find(40)!= mp.end()){
    cout<<n<< " is present in map";

  }

  mp.erase(mp.begin());
  cout<<"elements after deleting the first elemennt : "<<endl;
  cout<<"Key \tElement"<<endl;
  for (auto it = mp.begin();it!=mp.end();it++){
    cout<<it->first<<"\t"<<it->second<<endl;

  }
  cout<<"The size of Map is : "<<mp.size()<<endl;
    return 0;
}