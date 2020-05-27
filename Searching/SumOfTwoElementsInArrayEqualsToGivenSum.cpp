#include<iostream>
using namespace std;
int chech_sum(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((arr[i] + arr[j]) == x)
            {
                cout<<"The two nos. that sum equals to "<<x<<" are "<<arr[i]<<", "<<arr[j]<<endl;
                return 1;
            }
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
    int y = chech_sum(arr,n,x);
    if(y == 1)
    {
        cout<<"The Sum is found"<<endl;
    }
    else
    {
        cout<<"The Sum is not found"<<endl;
    }
}
