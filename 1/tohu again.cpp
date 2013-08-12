#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{int n;cin>>n;int a[101];char c[101];string s[n+1];
for(int i=0;i<n;i++)
{for(int j=1;j<=99;j++)
cin>>a[j]>>c[j];
int flag=1;
for(int j=9;j<=81;j+=9)
 {for(int q=9;q<=81;q+=9)
    {if(c[j]!=c[q]){s[i]="NO";flag=0;break;}}
    if(flag==0)break;}
if(flag==1)s[i]="YES";
}
for(int i=0;i<n;i++)
cout<<s[i]<<endl;
system("PAUSE");
return 0;
}
