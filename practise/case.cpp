#include<iostream>
using namespace std;
int main(){
char a;
cout<<"Enter a character:";
cin>>a;
int b=(int)a;
if (b>=65 && b<=90)
{
    cout<<"Upper case";
}
else if (b>=97 && b<=122){
    cout<<"Lower case";
}
else
{
   cout<<"Special character";
}

return 0;
}