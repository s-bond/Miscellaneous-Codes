#include <cstdlib>
#include <iostream>
using namespace std;int main(){int t;cin>>t;char c[t+1];int z[t];for(int i=0,a[t],b[t];i<t;i++){cin>>a[i]>>c[i]>>b[i];if(c[i]=='+')z[i]=a[i]+b[i];else if (c[i]=='-')z[i]=a[i]-b[i];else if (c[i]='*')z[i]=a[i]*b[i];}for(int i=0;i<t;i++)cout<<z[i]<<endl;return 0;}
