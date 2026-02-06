#include<iostream>
using namespace std;
int main(){
    int p;
    std::cout<<"Enter your age :";
    cin>>p;
    if (p>=18){
    std::cout<<"Age "<<p<<" is qualified"<<endl;
    }
    else{
                std::cout<<"Age "<<p<<" is not qualified"<<endl;

    }
    return 0;
}