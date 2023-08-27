#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of array "<<endl;
    for (int i=0;i<n;i++)cin>>a[i];
    int cp;
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        cp=a[i];
        while(a[j]>cp && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=cp;
    }
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    return (0);
}