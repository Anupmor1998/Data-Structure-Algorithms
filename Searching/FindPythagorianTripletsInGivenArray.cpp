/*
Pythagorean Triplet in an array
Given an array of integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2.
Example:
Input: arr[] = {1, 3, 4, 5, 6}
Output: True
There is a Pythagorean triplet (3, 4, 5).
Input: arr[] = {4, 5, 6, 10, 12}
Output: False
There is no Pythagorean triplet.
*/
#include<iostream>
using namespace std;
int find_triplets(int arr[],int n)
{
    for(int j=0;j<n;j++)
    {
        arr[j]=arr[j]*arr[j];
    }
    for(int i=n-1;i>=2;i--)
    {
        int l=0,h=i-1;
        while(l<h)
        {
            if(arr[l] + arr[h] == arr[i])
            {
                cout<<"The Pythagorian Triplets are "<<arr[l]<<", "<<arr[h]<<" and "<<arr[i]<<endl;
                return 1;
            }
            if(arr[l] + arr[h] > arr[i])
            h=h-1;
            if(arr[l] + arr[h] < arr[i])
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
    cout<<"Enter the "<<n<<" elements of array in Sorted Order:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int y = find_triplets(arr,n);
    if(y == 1)
    {
        cout<<"The Triplets are found"<<endl;
    }
    else
    {
        cout<<"The Triplets are not found"<<endl;
    }
}
