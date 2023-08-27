#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the element of array"<<endl;
    for(int i=0;i<n;i++)cin>>a[i];
    int pd=a[1]-a[0],csa=2,ans=2;
    for(int i=2;i<n;i++)
    {
        if(pd==a[i]-a[i-1])
        {
            csa++;
            ans=max(csa,ans);
        }
        else
        {
            pd=a[i]-a[i-1];
            csa=2;
        }
    }
    cout<<"Size of Longest Arithematic Subarray "<< ans;
    return(0);
}