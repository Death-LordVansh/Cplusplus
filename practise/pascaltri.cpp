#include<iostream>
using namespace std;
int pow(int p ,int k){
    int t=1;
    for(int i=1;i<=k;i++){
        t=t*p;
    }
    return t;

}
int main(){
int a,b,c;
printf("Enter a number :");
scanf("%d",&a);
for(int i=1;i<=a;i++){
    printf("%d\n",pow(a,i));
}
return 0;
}