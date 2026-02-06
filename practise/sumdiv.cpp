#include<iostream>
using namespace std;
int main(){
int a,sum=0;
cout<<"Enter a number :";
cin>>a;
for(int i=0;i<=a;i++){
    if(i%3==0){
        sum+=i;
    }
}
cout<<sum;
return 0;
}