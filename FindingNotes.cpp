#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout<<"enter the Amount ";
    cin>>amount;
    int n1=0,n2=0,n3=0,n4=0,n5=0,n8=0,n6=0,n7=0;
        while(amount>=2000) 
        {
            amount -=2000;
            ++n1;
        }
        while(amount>=500)
        {
            amount-=500;
            ++n2;
        }
        while(amount>=200)
        {
            amount-=200;
            ++n3;
        }
        while(amount>=100)
        {
            amount-=100;
            ++n4;
        }
        while(amount>=50)
        {
            amount-=50;
            ++n5;
        }
        while(amount>=20)
        {
            amount-=20;
            ++n6;
        }
        while(amount>=10)
        {
            amount-=10;
            ++n7;
        }
        while(amount>=1)
        {
            amount-=1;
            ++n8;
        }
        if(n1!=0)cout<<"2000 note * "<<n1<<endl;
        if(n2!=0)cout<<"500 note * "<<n2<<endl;
        if(n3!=0)cout<<"200 note * "<<n3<<endl;
        if(n4!=0)cout<<"100 note * "<<n4<<endl;
        if(n5!=0)cout<<"50 note * "<<n5<<endl;
        if(n6!=0)cout<<"20 note * "<<n6<<endl;
        if(n7!=0)cout<<"10 note * "<<n7<<endl;
        if(n8!=0)cout<<"1 coin * "<<n8<<endl;
        return(0);
    
}