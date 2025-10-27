#include <bits/stdc++.h>
using namespace std;

void fun(){
  int n,h;
  int e[101];
  cin>>n>>h;
  int sum=0;
  for (int i=0;i<n;i++){
    cin>>e[i];
    sum+=e[i];
  }
  if (sum==h){
    cout<<"NO"<<endl;
    return;
  }
  cout<<"YES"<<endl;
  for (int i=0;i<n;i++){
    if (h==e[i]){
      swap(e[i],e[i+1]);
    }
    cout<<e[i]<<' ';
    h-=e[i];
  }
  cout<<endl;
  return;
}

int main(){
  int tc; 
  cin>>tc;
  while (tc--)
    fun();
  return 0;
}