#include<iostream>
using namespace std;
int nu(int a,int b){
    int n;
    if (a>b){
        n=a;
    }
    else{
        n=b;
    }
    return n;
}
int main(){
    int p,r,t;
    std::cout<<"Enter a n number :";
    cin>>p;
    std::cout<<"Enter another number :";
    cin>>r;
    t=(p!=r)?nu(p,r):p;
    cout<<"Greatest number is :"<<t<<endl;
    return 0;
}