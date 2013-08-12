#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
int main()
{  long long int t;cin>>t;
   long long int i=0,n;string s[t];
    while(i<t)
    {cout<<endl;cin>>n;unsigned long long int a[n],sum=0;
    for(int j=0;j<n;j++)
    {cin>>a[j];sum=(sum+a[j])%n;}
    if(sum%n==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;  
    i++;}
    //for(int i=0;i<t;i++)
    //cout<<s[i]<<endl;
    //system("pause");
    return 0;
}

