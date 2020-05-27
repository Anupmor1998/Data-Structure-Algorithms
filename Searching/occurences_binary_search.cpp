#include<iostream>
using namespace std;
int first_occur(int arr[],int n,int x,int l,int h)
{
    if(l<=h)
    {
        int m=int((h+l)/2);
        if(x==arr[m] && (m==0 || x > arr[m-1]))
        {
            return m;
        }
        if(x <= arr[m])
        {
            return first_occur(arr,n,x,l,m-1);
        }
        if(x > arr[m])
        {
            return first_occur(arr,n,x,m+1,h);
        }
    }
    return -1;
}

int last_occur(int arr[],int n,int x,int l,int h)
{
    if(l<=h)
    {
        int m=int((h+l)/2);
        if(x==arr[m] && (m==n-1 || x < arr[m+1]))
        {
            return m;
        }
        if(x < arr[m])
        {
            return last_occur(arr,n,x,l,m-1);
        }
        if(x >= arr[m])
        {
            return last_occur(arr,n,x,m+1,h);
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
    int y=first_occur(arr,n,x,0,n-1);
    int z=last_occur(arr,n,x,0,n-1);
    if(y==-1)
    {
        cout<<"Your searched element is not found!!!"<<endl;
    }
    else
    {
        cout<<"The first occurance of your searched element is at index:"<<y<<endl;
    }
    if(z==-1)
    {
        cout<<"Your searched element is not found!!!"<<endl;
    }
    else
    {
        cout<<"The last occurance of your searched element is at index:"<<z<<endl;
    }
    return 0;

}