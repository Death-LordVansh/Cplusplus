#include<iostream>
using namespace std;
int main(){
int a,b=0;
cout<<"Enter a number :";
cin>>a;
int c=a;
while(a>0){
    b=b*10+a%10;
    a=a/10;
}
if(c==b){
    cout<<"it is a palindrome number";
}
else{
    cout<<"It is not a palindrome number";
}

return 0;
}