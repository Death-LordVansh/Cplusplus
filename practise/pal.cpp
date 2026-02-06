#include<iostream>
using namespace std;
int main(){
  int n,fact=1,sum=0;
  cout<<"Enter a number :";
  cin>>n;
  int p=n;
 while(n>0){
    int a=n%10;

    sum=sum*10+a;
    n=n/10;
  
 }
 if(p==sum){
    cout<<"It is an palindrome number\n";
 }
 else{
    cout<<"It is not an palindrome number\n";
 }
   return 0;
}
