#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,34,54,5,6,78,7,5,6,75,-6,-464,-6,-46,-4,-4};
    int a=INT8_MAX,b=INT8_MIN,c,d;
    for(int i=0;i<17;i++){
           if(arr[i]<a){
            a=arr[i];c=i;
           }
           if(arr[i]>b){
            b=arr[i];d=i;
           }
    }
    cout<<a<<" "<<c<<" "<<b<<" "<<d;
    return 0;
}