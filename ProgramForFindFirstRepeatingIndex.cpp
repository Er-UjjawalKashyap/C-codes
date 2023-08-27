#include <iostream>
#include <climits>
using namespace std ;
int main ()
{
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int a[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++)cin>>a[i];
    int mx=INT_MIN,mn=INT_MAX;
    for(int i=0;i<n;i++)mx=max(mx,a[i]);
    int aix[mx];
    for(int i=0;i<mx;i++)aix[i]=-1;
    for(int i=0;i<n;i++)
    {
        if(aix[a[i]]==-1) aix[a[i]]=i;
        else mn=min(mn,aix[a[i]]);
    }
    if(mn==INT_MAX)cout<<"Not any Element is repeating";
    else cout<<"The first repeating index = "<< mn+1;
    return(0);
}