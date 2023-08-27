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
    for(int i;i<n;i++)
    {
        if(arr[i]>0)
        {
            arr[i]=sum+=a[i];
            mx=max(mx,sum);
        }
        else arr[i]=0;
    }
    cout<<"Maximum sum of subarray = "<<mx;
    return(0);
}