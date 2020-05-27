#include<iostream>
using namespace std;
int binary_search(int arr[],int l,int h,int x)
{
    if (l<=h)
    {
        int m;
        m=int((h+l)/2);
        if (arr[m]==x)
        {
            return m;
        }
        if(arr[m]>x)
        {
            return binary_search(arr,l,m-1,x);
        }
        if(arr[m]<x)
        {
            return binary_search(arr,m+1,h,x);
        }
    }
    return -1;
}
int main()
{
    int n,i,x;
    cout<<"Enter the size of Array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements of Array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element you want to search:";
    cin>>x;
    int y=binary_search(arr,0,n-1,x);
    if(y==-1)
    {
        cout<<"Your searched element is not found!!!"<<endl;
    }
    else
    {
        cout<<"Your searched element is found at index:"<<y<<endl;
    }
    return 0;

}