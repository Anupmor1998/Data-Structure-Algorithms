#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    {
        int d = a % b;
        return gcd(b,d);
    }
}
int main()
{
    int a,b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    int g = gcd(a,b);
    cout<<"LCM of "<<a<<" and "<<b<<" is : "<<(a*b)/g<<endl;
    return 0;
}
