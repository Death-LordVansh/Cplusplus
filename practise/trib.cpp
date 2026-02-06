#include<iostream>
using namespace std;
int main(){
int a=0,b=0,c=1,d,n;
cout<<"Enter a number :";
cin>>n;
for(int i=0;i<=n;i++){
    d=c+a+b;
    a=b;
    b=c;
    c=d;
    cout<<d<<" ";
}
return 0;
}