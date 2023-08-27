#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,l=0;
    cout<< "Enter the size of message ";
    cin>>n;
    string s;
    char ct[n],p[n];
    cout<<"Enter the message"<<endl;
    cin>>s;
    cout<<s;
    int k;
    cout<<"Enter the Key";
    cin>>k;
    for(int i=0;i<n;i++)p[i]=s[i];
    cout<<p;
    for(int i=0;i<=k-1;i++)
    for(int j=i;j<n;j+k) {cout<<s[j];ct[l++]=s[j];}
    for(int i=0;i<n;i++)cout<<ct[i];
    return(0);
}