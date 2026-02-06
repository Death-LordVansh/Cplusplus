#include<iostream>
using namespace std;
int trib(int a,int b,int c,int n){
 if(n>0){
    int d=a+b+c;
    cout<<d<<" ";
    trib(b,c,d,n-1);
 }
}
int main(){
int a=0,b=0,c=1,d,n;
cout<<"Enter a number :";
cin>>n;
if (n>=0){
        cout << "1 1 ";
        trib(0,1,1, n);
    }
else{
        cout<<"Invalid input\n";
    }
    return 0;
}
