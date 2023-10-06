#include<iostream>
#include<vector>
using namespace std;

int compress(vector<char>& chars) {
        int index=0,i=0,n=chars.size();
        while(i<n)
        {
            int j=i+1;
            while(j<n && chars[i]==chars[j])j++;
            chars[index++]=chars[i];
            int t=j-i;
            string s=to_string(t);
            if(t>1)
            {
                for(int k=0;s[k]!='\0';k++)chars[index++]=s[k];
            }
            i=j;     
        }
        return index;
    }
    
    int main ()
    {
        char t='1';
        vector<char>per;
        cout<<"enter the string (for stop press 0 )"<<endl;
        while(t!='0')
        {
            cin>>t;
            per.push_back(t);
        }
        cout<<"size of orignal string = "<<per.size()<<endl;
        int m=compress(per);
        int l=per.size();
        cout<<"size of compress string = "<<m<<endl;
        for(int i=0;i<l;i++)cout<<per[i]<<" ";
        cout<<endl;
        return 0;
    }