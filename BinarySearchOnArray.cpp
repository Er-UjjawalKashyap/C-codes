#include <iostream>
using namespace std;
// binary search algorithm
int BinarySearch(int arr[],int size,int k)
{
    int i=0;
    int j=size-1,mid=j/2;
    while(j>=i)
    {
        if(arr[mid]==k) return mid;
        if(arr[mid]>k)
        {
            j=mid-1;
        }
        else i=mid+1;
        mid=(i+j)/2;
    }
    return -1;
}
// print an array
void PrintArray(int arr[],int size)
{
    for(int i=0;i<size;i++)cout<<arr[i]<<" ";
    cout<<endl;
}
int main ()
{
    int arr[100], n,k;
    cout<<"enter the size of array ";
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    PrintArray(arr,n);
    cout<<"enter the value for search ";
    cin>>k;
    cout<<"the index of value "<<BinarySearch(arr,n,k);
    return 0;
}