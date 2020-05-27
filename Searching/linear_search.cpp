//This program is for Linear Search
#include<iostream>
using namespace std;
//This is the function for linear search in which required arguments are the array, the variable you want to search and size of array
int linear_search(int arr[],int x, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return(i);
        }
    }
    return -1;
}
int main()
{
    int i,x,n;
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
    int y=linear_search(arr,x,n);
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