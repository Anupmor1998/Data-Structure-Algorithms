/*
Square root of an integer
Given an integer x, find it’s square root. If x is not a perfect square, then return floor(√x).
Examples :
Input: x = 4
Output: 2
Explanation:  The square root of 4 is 2.
Input: x = 11
Output: 3
Explanation:  The square root of 11 lies in between
3 and 4 so floor of the square root is 3.
*/
#include<iostream>
using namespace std;
//This funtion will take 4 arguments: lower range and higher range of element to searched, searched element and its precition point
float square_root(int l,int h,int x,int p)
{
    //if the value of x = 0 0r 1 then return value itself
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
            return square_root(l,m-1,x,p);
        }
        if((m*m)<x)
        {
            return square_root(m+1,h,x,p);
        }
    }
    //below code is for calculating precision of square root
    //here ans = l-1 is used because in above function when the while loop terminates the valuse of l is incremented by 1 
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
    cout<<"The square root of "<<x<<" is: "<<square_root(1,x,x,p)<<endl;
    return 0;
}
