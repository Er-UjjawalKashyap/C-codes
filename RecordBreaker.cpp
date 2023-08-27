#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int a[n];
    cout<<"enter the elements of array "<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    int mx=INT_MIN;
    int ans=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>mx && a[i]>a[i+1])ans++;
        mx=max(mx,a[i]);
    }
    if(a[n-1]>mx)ans++;
    cout<<"Record Breaker Days= "<<ans;
    return (0);
}