#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter the array size ";
    cin>>n;
    int a[n];
    cout<<"enter the elements of array "<< endl;
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<"Enter the sum ";
    int s;
    cin>>s;
    int t=s,c=0;
    for(int i=0;i<n;i++)
    {
        s=t;
        int j=i;
        while(s>0)
        {
            s-=a[j++];
        }
        if(s==0)
        {
            c++;
            cout<<i+1<<" "<<j<< endl;
        }
    }
    cout<<"Number of subarray = "<<c;
    return(0);
}