#include<iostream>
#include<climits>
using namespace std;
int Kadane(int a[],int n)
{
    int sum=0,mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum<0)sum=0;
        mx=max(mx,sum);
    }
    return mx;
}
int main()
{
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int a[n];
    cout<<"enter the element of array"<<endl;
    for(int i=0;i<n;i++)cin>>a[i];
    int cs=0,ns=0,sum=0,mx=0;
    ns=Kadane(a,n);
    for(int i=0;i<n;i++)sum+=a[i];
    for(int i=0;i<n;i++)a[i]=-a[i];
    cs=Kadane(a,n);
    sum+=cs;
    mx=max(ns,sum);
    cout<<mx;
    return(0);
}