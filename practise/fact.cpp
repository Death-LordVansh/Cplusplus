#include<iostream>
using namespace std;
int fact(int a){
    int n=1;
    for(int i=1;i<=a;i++){
        n=n*i;
    }
    return n;
}
int main(){
    int p;
    std::cout<<"Enter a number :";
    cin>>p;
    std::cout<<"Factorial of "<<p<<" is :"<<fact(p)<<endl;
    return 0;
}