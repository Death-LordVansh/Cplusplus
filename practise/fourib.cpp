#include<iostream>
using namespace std;
int main(){
int a=0,b=1,d=1,e=1,c,n;
cout<<"Enter a number ";
cin>>n;
for(int i=0;i<=n;i++){
    c=a+b+d+e;
    a=b;
    b=d;
    d=e;
    e=c;
    cout<<a<<" ";
}
return 0;
}