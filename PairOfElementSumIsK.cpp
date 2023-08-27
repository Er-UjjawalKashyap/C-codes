#include <iostream>
using namespace std;

bool IsPairSum(int a[],int n,int k)
{
    for(int i=0;i<n;i++)
    for(int j=i;j<n;j++)
    {
        if(a[i]+a[j]==k) 
        {
            cout<<"index of element = " <<i<<" and "<<j<<endl;
            return true;
        }
    }
    return false;
}
int main()
{
    int n,k;
    cout<<"enter the size of array ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<"enter sum = ";
    cin>>k;
    cout<<IsPairSum(a,n,k);
    return(0);
}