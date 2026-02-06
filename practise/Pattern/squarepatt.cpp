#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number ";int a;
    cin>>a;
   for(int i=1;i<=a;i++){
    for(int j=1;j<=a;j++){
        cout<<(char)(j+64)<<" ";
    }cout<<'\n';
   }return 0;
}