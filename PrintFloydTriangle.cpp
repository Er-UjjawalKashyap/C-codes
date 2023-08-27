#include<iostream>
using namespace std;
int main ()
{
    int p=1;
    do{
    int n;
    cout<< "enter the size of triangle"<< endl;
    cin>>n;
    int c=1;
    for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){cout<<c<<" ";c++;}
    cout<<endl;
    }
    cout<<"for print again press 1";
    cin>>p;
    }
    while(p==1);
    return (0);
}