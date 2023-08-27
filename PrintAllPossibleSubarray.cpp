#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the array size ";
    cin>>n;
    int a[n];
    cout<<"enter the element of array"<< endl;
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<"Subarray of given array "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int k=i+1;k<n+1;k++)
        {
            for(int j=i;j<k;j++)cout<<a[j]<<" ";
            cout<<endl;
        }
    }
    return(0);
}