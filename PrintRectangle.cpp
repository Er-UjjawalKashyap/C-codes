#include<iostream>
using namespace std;
int main()
{
    int p=1;
    do{
        int a,b;
        cout <<"Enter the height and breadth of Ractangle"<<endl;
        cin >> a >> b;
        while(a>0){
        for(int i=0;i<b;i++) cout<<"*";
        cout<<endl;
        a--;
        }
        cout<<"for print again press 1";
        cin>> p;
    }while(p==1);
    return (0);
}