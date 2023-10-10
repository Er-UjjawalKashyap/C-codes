#include<iostream>
using namespace std;
// find the element which is gretest in array  
int PeakOfArray(int a[],int n)
{
    int start =0,end=n-1,mid=start+(end-start)/2;
    while(start<end)
    {
        if(a[mid]<a[mid+1]) start=mid+1;
        else end=mid;
        mid=start+(end-start)/2;
    }
    return mid;
}
int SumOfSubArray(int a[],int i,int j)
{
    int sum=0;
    while(i<=j)
    {
        sum+=a[i];
        i++;
    }
    return sum;
}
// find sum of left and right sub array
int PivotOfarray(int a[],int n)
{
    int Index=PeakOfArray(a,n);
    int suml=SumOfSubArray(a,0,Index-1);
    int sumr=SumOfSubArray(a,Index+1,n-1);
    if(suml==sumr) return Index;
    return -1;
}
int main()
{
    int a[100],n;
    cout<<"enter the size of array ";
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    n=PivotOfarray(a,n);
    if(n!=-1)cout<<"Pivot element of array is "<<a[n]<<endl;
    else cout<<"Pivot element of array is not exist"<<endl;
    return 0;
}