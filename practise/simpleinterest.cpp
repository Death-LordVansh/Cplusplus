#include<iostream>
using namespace std;
int main(){
    float p,r,t;
    std::cout<<"Enter principal amount :";
    cin>>p;
    std::cout<<"Enter rate amount :";
    cin>>r;
    std::cout<<"Enter time amount :";
    cin>>t;
    std::cout<<"Interest is :"<<p*r*t<<endl;
    return 0;
}