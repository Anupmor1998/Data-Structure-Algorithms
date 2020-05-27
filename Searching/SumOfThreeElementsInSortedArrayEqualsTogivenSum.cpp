/*
Given an array and a value, find if there is a triplet in array whose sum is equal to the given value. If there is such a triplet present in array, then print the triplet and return true. Else return false.
Example:

Input: array = {12, 3, 4, 1, 6, 9}, sum = 24;
Output: 12, 3, 9
Explanation: There is a triplet (12, 3 and 9) present
in the array whose sum is 24. 

Input: array = {1, 2, 3, 4, 5}, sum = 9
Output: 5, 3, 1
Explanation: There is a triplet (5, 3 and 1) present 
in the array whose sum is 9. */

#include<iostream>
using namespace std;
int chech_sum(int arr[],int n,int x)
{
    for(int i=0;i<n-2;i++)
    {
        int l=i+1,h=n-1;
        while(l<h)
        {
            if(arr[i]+arr[l]+arr[h] == x)
            {
                cout<<"The three nos. that sum equals to "<<x<<" are "<<arr[i]<<", "<<arr[l]<<" and "<<arr[h]<<endl;
                    return 1;
            }
            if(arr[i]+arr[l]+arr[h] > x)
            h=h-1;
            else
            l=l+1;
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
    cout<<"Enter the "<<n<<" elements of array:"<<endl;
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
