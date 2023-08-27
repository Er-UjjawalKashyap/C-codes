#include<iostream>
#include<climits>
using namespace std;
int main ()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++)cin>>a[i];
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        mx=max(mx,a[i]);
        cout<<mx<<" ";
    }
    return (0);
}