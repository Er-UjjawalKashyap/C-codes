	#include<iostream>
    using namespace std;
    int maxRepeating(int *arr, int n, int k) {
	    const int N=1000000;
	    int a[N];
	    for(int i=0;i<N;i++)a[i]=k;
	    for(int i=0;i<n;i++)
	    {
	        a[arr[i]]=a[arr[i]]-1;
	        if(a[arr[i]]==0) return arr[i];
	    }
	    return -1;
	    // code here
	}
    int main()
    {
        int n;
        cout<<"enter the size of array ";
        cin>>n;
        int a[n],k,t;
        cout<<"enter the element of array "<<endl;
        for(int i=0;i<n;i++)cin>>a[i];
        cout<<"enter the number of repition "<<endl;
        cin>>k;
        t=maxRepeating(a,n,k);
        cout<<"the element is"<<t;
        return(0);
    }