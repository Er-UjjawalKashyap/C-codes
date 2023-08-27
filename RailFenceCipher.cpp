#include<iostream>
#include<string>
using namespace std;

int main() 
{
    int k,l=0;
    string pt;
    cout<<"enter the message"<<endl;
    getline(cin,pt);
    cout<<"enter the Key ";
    cin>>k;
    l=pt.length();
    char ct[k][l];
    cout<<pt<<" "<<k<<" "<<l<<endl;
    for(int i=0;i<k;i++)
    for(int j=0;j<l;j++)ct[i][j]='\0';
    int j=0,n=-1;
    for(int i=0;i<l;i++){
        ct[j][i]=pt[i];
        if(j==0||j==k-1)n=-n;
        j+=n;
    }
    char sendtext[l];
    int p=0;
    for(int i=0;i<k;i++)
    for(int j=0;j<l;j++)if(ct[i][j]!='\0'){sendtext[p++]=ct[i][j];cout<<ct[i][j];}
    cout<<endl;
    for(int i=0;i<l;i++)cout<<sendtext[i++];
    cout<<endl;
    //At ricever end only cipher text is available and key
    int g=l;
    int KR,b=0;
    cout<<"Enter the Key ";
    cin>>KR;
    int x=g/KR;
    char darr[KR][x];
    for(int i=0,b=0;i<KR;i++)
    for(int j=0;j<x;j++)darr[i][j]=sendtext[b++];

    for(int i=0,b=0;i<x;i++)
    for(int j=0;j<KR;j++)sendtext[b++]=darr[i][j];
    for(int i=0;i<g;i++)cout<<sendtext[i++];
    return (0);
}