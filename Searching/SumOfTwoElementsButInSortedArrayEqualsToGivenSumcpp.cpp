#include<iostream>
using namespace std;
int chech_sum(int arr[],int n,int x,int start,int end)
{
    if(start < end)
    {
        if((arr[start] + arr[end]) == x)
        {
            cout<<"The two nos. that sum equals to "<<x<<" are "<<arr[start]<<", "<<arr[end]<<endl;
            return 1;
        }
        if((arr[start] + arr[end]) > x)
        {
            return chech_sum(arr,n,x,start,end-1);
        }
        else
        {
            return chech_sum(arr,n,x,start+1,end);
        }
    }
    return -1;
}
int main()
{
    int n,x;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element whose sum you have to find:";
    cin>>x;
    int y = chech_sum(arr,n,x,0,n-1);
    if(y == 1)
    {
        cout<<"The Sum is found"<<endl;
    }
    else
    {
        cout<<"The Sum is not found"<<endl;
    }
}
