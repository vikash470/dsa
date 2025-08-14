
#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the number:";
    cin>>n;
  for(i=n;i>=1;i--){
  for(i=n;i<100;i=i+3){
    cout<<i<<" ";
  }
    return 0;
}