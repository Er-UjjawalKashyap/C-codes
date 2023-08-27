  #include<iostream>
  using namespace std;
   bool isSubSequence(string A, string B) 
    {
        int i=0,k=sizeof(A),t=sizeof(B);
        cout<<k<<" "<<t<<endl;
       for(int j=0;j<=t;j++)
       { 
        if(A[i]==B[j])
        {
            i++;
            if(i==k-1) 
            return(true);
        }
       }
       return(false);
        // code here
    }
int main ()
{
    string a,b;
    cout<<"enter first string"<<endl;
    cin>>a;
    cout<<"enter second string"<<endl;
    cin>>b;
    cout<<isSubSequence(a,b);
    return(0);
}