#include<iostream>
using namespace std;
int main(){
int a=0,b=1,c,n;
cout<<"Enter a number ";
cin>>n;
for(int i=0;i<=n;i++){
    c=a+b;
    a=b;
    b=c;
    cout<<a<<" ";
}
return 0;
}