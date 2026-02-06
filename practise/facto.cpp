#include<iostream>
using namespace std;
int main(){
  int n,fact=1,sum=0;
  cout<<"Enter a number :";
  cin>>n;
  int p=n;
 while(n>0){
    fact=1;
    int a=n%10;
    for (int i=1;i<=a;i++){
       fact=fact*i;

   }

    sum=sum+fact;
    n=n/10;
  
 }
 if(p==sum){
    cout<<"It is an armstrong number\n";
 }
 else{
    cout<<"It is not an armstrong number\n";
 }
   return 0;
}
