#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the elements of array"<<endl;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)
    for(int j=1;j<n-i;j++)
    {
        if(a[j]<a[j-1])
        {
            int t=a[j];
            a[j]=a[j-1];
            a[j-1]=t;
        }
    }
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    return(0);
}