#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a,b;
    char c='y', n;
    cout<<"Enter a number :";
    cin>>a;
    while(c=='y'){
    cout<<"Enter another number :";
    cin>>b;
    cout<<"Enter operation :";
    cin>>n;
    switch (n)
    {
    case '+':
        a=a+b;
        cout<<"Sum of numbers is:"<<a<<endl;;
        break;
    case '-':
        if(a>b){
            a=a-b;
        }
        else{
            a=b-a;
        }
        cout<<"Difference of numbers is:"<<a<<endl;;
        break;
    case '*':
        a*=b;
        cout<<"Multiplication of numbers is:"<<a<<endl;
        break;
    case '/':
        a=a/b;
        cout<<"Division of numbers is:"<<a<<endl;
        break;
    default:
        cout<<"Wrong input";
        break;
    }
    cout<<"Do you want to continue :";
    cin>>c;

    }
return 0;
}