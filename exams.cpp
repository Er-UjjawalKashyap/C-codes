#include<iostream>
#include<string>
using namespace std;
int main()
{

    string message;
    getline(cin,message);

    int key;
    cin>>key;

    int len=message.length();

    char a[key][len];

    for(int i=0;i<key;i++)
    {
        for(int j=0;j<len;j++)
        {
            a[i][j]='\0';
        }
    }

    int row=0;
    int col=0;
    int k=-1;

    for(int i=0;i<len;i++)
    {
        a[row][col++]==message[i];

        if(row==0 || row==key-1)
        {
            k=-k;

        }

        row=row+k;
    }


    for(int i=0;i<key;i++)
    {
        for(int j=0;j<len;j++)
        {
            if(a[i][j]!='\0')
            {
                cout<<a[i][j];
            }
        }

        cout<<" ";
    }
}

