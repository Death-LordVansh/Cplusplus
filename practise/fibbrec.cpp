#include<iostream>
using namespace std;
void fib(int a,int b,int n){
    if(n>0) {
        int c=a+b;
        cout<<c<<" ";
        fib(b,c,n-1);
    }
}
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    if (n>=0){
        cout << "1 1 ";
        fib(1,1, n);
    }
    else{
        cout<<"Invalid input\n";
    }
    return 0;
}