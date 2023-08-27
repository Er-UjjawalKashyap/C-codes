#include<iostream>
#include<climits>
using namespace std;
int FindMax( int a[],int n)
{
    int m=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(m<a[i])m=a[i];
    }
    return (m);
}
int main ()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of array";
    for(int i=0;i<n;i++){cin>>a[i];cout<<endl;}
    cout<<"The Maximum eelement = "<<FindMax(a,n);
    return(0);
}