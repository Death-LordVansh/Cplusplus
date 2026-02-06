#include<iostream>
using namespace std;
int fact(int a,int fct){
    if(a>=2){
        fct=fct*a;
        --a;
        fact(a,fct);
    }
    else
     return fct;
    
}
int main(){
    int p;
    std::cout<<"Enter a number :";
    cin>>p;
    std::cout<<"Factorial of "<<p<<" is :"<<fact(p,1)<<endl;
    return 0;
}