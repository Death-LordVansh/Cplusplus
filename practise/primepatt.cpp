#include<iostream>
using namespace std;
int main()
{
    std::cout<<"Enter a  number: ";
    int n,k,i=0;
    scanf("%d",&n);
    for(int p=0;p<=9;p++){
        for(int t=0;t<=p;t++){
        for (int i; i <=n ;i++)
           {
           for(int j=2;j<=i-1;j++){
            if(i%j!=0){
            k=1;
            break;
          }
          else{
            k=0;
          }
       }}
        if(k==1){
         cout<<i;
       }
    }
    }
return 0;
}