#include<iostream>
using namespace std;
//Check given answer is possible or not 
bool IsPossibleAnswer(int arr[],int size,int m,int ta)
{
    //cout<<endl<<ta<<"pass value"<<endl;
    int i=0;
    while(i<size)
    {
        int sum=0;
        if(m>0) 
        {
            while(ta>=sum+arr[i] && i<size)  sum =sum+ arr[i++];
            m--;
           // cout<<sum<<endl;
        }
        else return false ;
    }
    return true;
}
//Search minimum answer
int FindMinSolution(int arr[],int size,int m)
{
    int sum=0,ans=-1;
    for(int i=0;i<size;i++) sum=sum+arr[i];
   // cout<<sum<<endl;
    //cout<<"end loop";
    int s=0,mid=s+(sum-s)/2;
    while(s<=sum)
    {
        //cout<<mid<<endl;
        if(IsPossibleAnswer(arr,size,m,mid))
        {
            ans=mid;
           // cout<<ans<<endl;
            sum=mid-1;
        }
        else s=mid+1;
        mid=s+(sum-s)/2;
    }
    
    return ans;
}
int main()
{
    int m,n,arr[100];
    cout<<"enter the size of array ";
    cin>>n;
    cout<<"enter the books number of pages"<<endl;
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<"enter the number of student ";
    cin>>m;
    int ans=FindMinSolution(arr,n,m);
    cout<<"maximum number of page assign to a student is "<<ans;
    return 0;
}