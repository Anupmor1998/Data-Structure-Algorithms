/*
Find first and last positions of an element in a sorted array
Given a sorted array with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in the given array.
Examples:
Input : arr[] = {1, 3, 5, 5, 5, 5 ,67, 123, 125}    
        x = 5
Output : First Occurrence = 2
         Last Occurrence = 5
Input : arr[] = {1, 3, 5, 5, 5, 5 ,7, 123 ,125 }    
        x = 7
Output : First Occurrence = 6
         Last Occurrence = 6
*/
#include<iostream>
using namespace std;
//This function is for finding first occurence and requires 5 arguments: array, size of array, element to be searched, lower and higher index of array
int first_occur(int arr[],int n,int x,int l,int h)
{
    //Run untill lower is less than or equal to higher index
    if(l<=h)
    {
        int m=int((h+l)/2);
        //If the searched element is equals to mid of array and if the value is at index 0 or the value at index mid -1 is less than searched element
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
    //if elements is not found
    return -1;
}
//This function is for finding last occurence and requires 5 arguments: array, size of array, element to be searched, lower and higher index of array
int last_occur(int arr[],int n,int x,int l,int h)
{
    if(l<=h)
    {
        int m=int((h+l)/2);
        //If the searched element is equals to mid of array and if the value is at index n-1 or the value at index mid + 1 is greater than searched element
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
    //if the element is not found
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