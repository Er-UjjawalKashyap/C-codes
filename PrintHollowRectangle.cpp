#include<iostream>
using namespace std;
int main ()
{
    int p=1;
    do
    {
        int height,breadth;
        cout <<"Enter the Height and Breadth of Rectangle"<<endl;
        cin>>height  >> breadth;
        for(int i=1;i<=height;i++)
        {
            for(int j=1;j<=breadth;j++)
            {
                if(i==1||i==height||j==1||j==breadth)cout<<"*";
                else cout<<" ";
            }
        cout<<endl;
        }
        cout<<"for print aagain press 1"<<endl;
        cin>>p;
    } while (p==1);
    
}