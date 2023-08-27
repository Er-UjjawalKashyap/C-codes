#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int a[n];
    cout<<"enter the element of array"<<endl;
    for(int i=0;i<n;i++)cin>>a[i];
    const int m=10e3;
    bool arr[m];
    for(int i=0;i<m;i++) arr[i]=false;
    for(int i=0;i<n;i++)if(a[i]> -1)arr[a[i]]=true; 
    int p=0;
    while(p<m)
    {
        if(arr[p]==false)break;
        ++p;
    }
    cout<<"Missing smallest integer = "<<p;
    return(0);
}