#include<iostream>
using namespace std;
bool IsPrime( int n)
{
    for(int i=2;i<n/2+1;i++)
    if(n%i==0) return(false);
    return (true);
}
int main ()
{
    int n,c=0;
    cout<<"Enter the number "<< endl;
    cin>>n;
    cout<< "Prime numbers= ";
    for(int i=1;i<=n;i++)
    if(IsPrime(i)){cout<<i<<" ";++c;}
    cout<<endl<<"Total prime number ="<<c;
    return 0;
}