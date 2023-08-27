#include<iostream>
using namespace std;
void BubbSort(int a[],int n)
{
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
}
bool IsPairSum(int a[],int n,int k)
{
    int i=0,j=n-1;
    while(i<j){
        if(a[i]+a[j]==k)
        {
            cout<<"index of element "<<i<<" and "<<j <<endl;
            return true;
        }
        else if(a[i]+a[j]>k) j--;
        else i++;
    }
    return false;
}
int main()
{
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int a[n];
    cout<<"enter the elements of array "<<endl;
    for(int i=0;i<n;i++)cin>>a[i];
    BubbSort(a,n);
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<"enter the sum "<<endl;
    int k;
    cin>>k;
    cout<<IsPairSum(a,n,k);
    return(0);
}