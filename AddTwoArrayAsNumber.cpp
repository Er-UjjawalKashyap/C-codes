#include <iostream>
#include<vector>
using namespace std;

vector <int> findArraySum(vector<int>a, int n, vector<int>b, int m) {
	int c=0;
	vector<int> ans;
    cout<< n <<" they "<<m<<endl;
	n--;
	m--;
	while(n>=0 && m>=0)
	{
        cout<< n <<" they "<<m<<endl;
		int sum = a[n]+b[m]+c;
        cout<< a[n] <<" element "<<b[m]<< " "<<sum<<endl;
	    ans.insert(ans.begin(),sum%10);
		c=sum/10;
		n--;
		m--;
	}
	while(n>=0)
	{
		int s=a[n]+c;
		ans.insert(ans.begin(),s%10);
		c=s/10;
		n--;
	}
	while(m>=0)
	{
		int s=b[m]+c;
		ans.insert(ans.begin(),s%10);
		c=s/10;
		m--;
	}
	if(c>0)ans.insert(ans.begin(),c);
	return ans;
	// Write your code here.
}
int main ()
{
    vector<int> n,m;
    int t=0,s1,s2;
    cout<<"enter 1st number(as a array -1 for end of num)"<<endl;
    while(t!=-1){cin>>t;n.push_back(t);}
    n.pop_back();
    t=0;
    cout<<"enter 2st number(as a array -1 for end of num)"<<endl;
    while(t!=-1){cin>>t;m.push_back(t);}
    m.pop_back();
    s1=n.size();
    s2=m.size();
    for(int i:n)cout<<i<<" ";
    cout<<endl;
    for(int i:m)cout<<i<<" ";
    cout<<endl;
    n=findArraySum(n,s1,m,s2);
    for(int i:n)cout<<i;
    cout<<endl;
    return 0;
}