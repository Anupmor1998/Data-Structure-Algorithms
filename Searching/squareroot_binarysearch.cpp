#include<iostream>
using namespace std;
float binary_search(int l,int h,int x,int p)
{
    if(x==0||x==1)
    {
        return x;
    }
    if(l<=h)
    {
        int m=int((l+h)/2);
        if((m*m)==x)
        {
            return m;
        }
        if((m*m)>x)
        {
            return binary_search(l,m-1,x,p);
        }
        if((m*m)<x)
        {
            return binary_search(m+1,h,x,p);
        }
    }
    float ans = l-1;
    float increment = 0.1;
    for(int i=0;i<p;i++)
    {
        while(ans*ans <= x)
        {
            ans += increment;
        }

        ans -= increment;
        increment = increment/10;
    }

    return ans;
}
int main()
{
    int x,p;
    cout<<"Enter the element you want square root of:";
    cin>>x;
    cout<<"Enter the precision of element you want square root of:";
    cin>>p;
    cout<<"The square root of "<<x<<" is: "<<binary_search(1,x,x,p)<<endl;
    return 0;
}
