#include<iostream>
using namespace std;
void Print(int *arr,int s,int e)
{
    for(int i=s;i<=e;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
bool BinarySearch(int *arr,int s,int e,int k)
{
    Print(arr,s,e);
    if(s>e)return false;
    int m=s+(e-s)/2;
    cout<<"array mid value "<<arr[m]<<endl;
    if(arr[m]==k)return 1;
    else 
    {
        if(arr[m]>k)BinarySearch(arr,s,m-1,k);
        else BinarySearch(arr,m+1,e,k);
    }
}
int main ()
{
    int arr[100],n,k;
    cout<<"enter the size of array ";
    cin>>n;
    cout<<"enter the array element( sorted increasing order )"<<endl;
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<"enter value for search ";
    cin>>k;
    string s=(BinarySearch(arr,0,n-1,k))?"Present ":"absent ";
    cout<<"given value is "<<s<<endl;
    return 0;
}