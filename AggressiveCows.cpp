#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
bool IsPossibleAns(vector<int>arr,int m,int ta,int l)
{
    cout<<"call IsPossible for "<<ta<<endl;
    int position=0;
    m--;//because one cow is place possition zero
    for(int i=1;i<l;i++)
    {
        if(arr[i]-arr[position]>=ta){
            position=i;
            m--;
            if(m==0) {cout<<"TRUE"<<endl;return true;}
        }
    }
    cout<<"false"<<endl;
    return false;
}
int SearchAnswer(vector<int> arr,int m)
{
    sort(arr.begin(),arr.end());
    for(int i:arr)cout << i<<" ";
    cout<<endl;
    int l=arr.size();
    int e=arr.back(),s=1;
    int mid=s+(e-s)/2,ans=-1;
    while(s<=e)
    {
        if(IsPossibleAns(arr,m,mid,l))
        {
            ans=mid;
            s=mid+1;
        }
        else e=mid-1;
        mid=s+(e-s)/2;
    }
    return ans;
}
int main ()
{
    vector<int> p;
    int n,t;
    cout<<"enter the number of Stalls(where cows are placed) ";
    cin>>n;
    cout<<"enter the stalls position"<<endl;
    for(int i=0;i<n;i++){cin>>t;p.push_back(t);}
    cout<<"enter the number of cows ";
    cin>>t;
    t=SearchAnswer(p,t);
    cout<<"maximum distance between every cows "<<t<<endl;
    return(0);
}