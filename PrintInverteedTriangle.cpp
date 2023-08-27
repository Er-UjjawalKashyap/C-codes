#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of line"<<endl;
    cin>>n;
    for(int j=n;j>=1;j--)
    {
        for(int i=1;i<=j;i++)
        cout<<i;
        cout<<endl;
    }
}