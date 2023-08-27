#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout << "enter the element of array"<<endl;
    for (int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
    {
        int t;
        if(a[i]>a[j])
        {
            t=a[j];
            a[j]=a[i];
            a[i]=t;
        }
    }
    for (int i=0;i<n;i++)cout<<a[i]<<" ";
}
