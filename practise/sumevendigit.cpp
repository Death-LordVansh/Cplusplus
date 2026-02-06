#include<iostream>
using namespace std;
int main(){
int a,b=0,c;
cout<<"Enter a number:";
cin>>a;
while(a>0){
    c=a%10;
    if (c%2==0)
    {
        b=b+c;
    }
    a=a/10;
    
}
cout<<b;
return 0;
}