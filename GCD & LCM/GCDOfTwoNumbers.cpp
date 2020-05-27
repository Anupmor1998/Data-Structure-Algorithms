#include<iostream>
#include<time.h>
using namespace std;
time_t s,e;
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    {
        return gcd(b,a % b);
    }
}
int main()
{
    int a,b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    time(&s);
    cout<<"GCD of "<<a<<" and "<<b<<" is : "<<gcd(a,b)<<endl;
    time(&e);
    double time_taken = double(s-e);
    cout<<"Time taken by gcd algo is:"<<time_taken<<endl;
    return 0;
}
