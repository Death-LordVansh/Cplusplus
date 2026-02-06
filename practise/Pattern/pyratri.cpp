#include<iostream>
using namespace std;
int main(){
   int a;
   cout<<"Enter a number :";cin>>a;
   for(int i=1;i<=a;i++){
   for(int j=0;j<a-i+1;j++)cout<<" ";
   
   for(int j=1;j<=i;j++){
       cout<<j<<" ";
   }
   for(int j=i-1;j>=1;j--){
    cout<<j<<" ";
   }
  cout<<endl;
   }
    return 0;
}