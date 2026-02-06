#include<iostream>
using namespace std;
int main(){
int a,b,c,d;
cout<<"Enter a number :";
cin>>a;
cout<<"Enter b number :";
cin>>b;
cout<<"Enter c number :";
cin>>c;
d=(a>=b)?((a>=c)?a:c):((b>=c)?b:c);
cout<<"Greatest number is :"<<d;
return 0;
}