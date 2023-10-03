#include<iostream>
using namespace std;
//Rearrange the array
void AlternateSwap(int arr[],int size)
{
    for(int i=0;i<size;i+=2) if(i+1<size) swap(arr[i],arr[i+1]);
}
// scanning the array
void InsertArray(int arr[],int n)
{
    for(int i=0;i<n;i++)cin>>arr[i];
}
//print array
void PrintArray(int arr[],int n)
{
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int n,arr[100];
    cout<<"enter the size of array ";
    cin>>n;
    InsertArray(arr,n);
    AlternateSwap(arr,n);
    PrintArray(arr,n);
    return(0);
}