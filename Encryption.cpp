#include<iostream>
using namespace std;
int main()
{
    char t[100];
    cout<<"enter the message (0 is end of message )"<<endl;
    cin>>t;
  //  for(int i=0;i<100;i++)
    //{
      //  char r; 
        //cin>>r;
        //if(r==0)break;
        //t[i]=r;
    //}
    int k;
    cout<<"enter the key value"<<endl;
    cin>>k;
    for(int i=0;i<100;i++)t[i]=(t[i]+k); 
    for(int i=0;i<100;i++)cout<<t[i];
    int p;
    cout <<"at the reciver end "<< endl<<"enter thee correct key " ;
    cin>>p;
    for(int i=0;i<100;i++)t[i]=(t[i]-p);
    for(int i=0;i<100;i++)cout<<t[i];
    if(k==p)cout << "yu got correct message "; 
    return (0);
}