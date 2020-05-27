/*
Given an array A[] and a number x, check for pair in A[] with sum as x
Write a program that, given an array A[] of n numbers and another number x, determines whether or not there exist two elements in S whose sum is exactly x.
Examples:
Input: arr[] = {0, -1, 2, -3, 1}
        sum = -2
Output: -3 ,1
Explanation: If we calculate the sum,
1 + (-3) = -2
Input: arr[] = {1, -2, 1, 0, 5}
       sum = 0
Output: -1
Explanation: No valid pair exists
*/
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
