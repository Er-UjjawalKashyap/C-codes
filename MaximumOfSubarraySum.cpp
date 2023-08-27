#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int a[n];
    cout<<"enter the element of array"<<endl;
    for(int i=0;i<n;i++)cin>>a[i];
    int sum=0,nn=0,ps=0,t=INT_MIN,arr[n],p;
    for(int i=0;i<n;i++)
    {
        arr[i]=sum+=a[i];
        for(int j=0;j<i;j++){
        ps=arr[i]-arr[j];
        t=max(t,ps);
    }
    }
    cout<<"Maximum sum of subarray = "<<t;
    return(0);
}