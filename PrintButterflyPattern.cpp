#include<iostream>
using namespace std;
int main()
{
    int p=1;
    do{
    int n;
    cout << "Enter the numbers of line";
    cin>> n;
    for(int r=1;r<=n;r++)
    {
        for(int i=1;i<=r;i++)cout<<"*";
        for(int i=1;i<=((2*n)-(2*r));i++)cout<<" ";
        for(int i=1;i<=r;i++)cout<<"*";
        cout<<endl;
    }
    for(int r=n;r>=1;r--)
    {
        for(int i=1;i<=r;i++)cout<<"*";
        for(int i=1;i<=((2*n)-(2*r));i++)cout<<" ";
        for(int i=1;i<=r;i++)cout<<"*";
        cout<<endl;
    }
    cout<<"For print again press 1";
    cin>>p;
    }
    while(p==1);
    return(0);
}