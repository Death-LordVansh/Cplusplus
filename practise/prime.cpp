#include<iostream>
using namespace std;
int isPrime(int num,int divisor)
{
    if(divisor<num)
    {
        if(num%divisor==0)
        return 0;
        else
        isPrime(num,++divisor);
    }
    else
    return 1;
}
int main()
{
    std::cout<<"Enter a  natural number to check if it is prime: ";
    int n;
    scanf("%d",&n);
    if(n==1)
    cout<<"Neither prime nor composite";
    else if(n==2)
    cout<<"This is a prime number";
    else if(n<=0)
    cout<<"Invalid Input";
    else
    {
        if(isPrime(n,2)==0)
        cout<<"This is composite number\n";
        else 
        cout<<"This is a prime number\n"; 
    }
    return 0;
}