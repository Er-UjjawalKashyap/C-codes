#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of array"<< endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++)cin>>a[i];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=a[j];
            cout<<sum<<" ";
        }
    }
    return(0);
}