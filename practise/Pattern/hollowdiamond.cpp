#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"ENter ";cin>>a;
    for(int i=0;i<a;i++){
      for(int j=0;j<=a-i;j++)cout<<" ";
      cout<<"*";
     if(i!=0){
         for(int j=0;j<2*i-1;j++)cout<<" ";
         cout<<"*";
        }
      cout<<endl;
    }
    for(int i=a;i>=0;i--){
      for(int j=0;j<=a-i;j++)cout<<" ";
      cout<<"*";
     if(i!=0){
         for(int j=0;j<2*i-1;j++)cout<<" ";
         cout<<"*";
        }
      cout<<endl;
    }
    return 0;
}