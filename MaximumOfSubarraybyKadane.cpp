#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int a[n],mx=INT_MIN;
    cout<<"enter the array element "<<endl;
    for(int i=0;i<n;i++)cin>>a[i];
    int arr[n],sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum<0)arr[i]=sum=0;
        else arr[i]=sum;
        mx=max(mx,arr[i]);
    }
    cout<<"Maximum sum of subarray = "<<mx;
    return(0);
}