#include<iostream>
using namespace std;
int main(){
int a,j=1;
cout<<"Enter a number :";
cin>>a;
for (int i = 1; i <=a; i++)
{
    for (j;j <=i; j++)
    {
        cout<<j<<" ";
    }
    cout<<"\n";
    
}

return 0;
}