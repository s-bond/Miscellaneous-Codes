#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{   int n;cin>>n;
    while(n!=0)
    {int a[n+1],b[n+1];int f=0;
    for(int i=1;i<=n;i++)
    {cin>>a[i];
    b[a[i]]=i;}
    for(int i=1;i<=n;i++)
    if(b[i]!=a[i])
    {cout<<"not ambiguous"<<endl;f=1;break;}
    if(f==0)
    cout<<"ambiguous"<<endl;
    cin>>n;
    }
    system("pause");
    return 0;
}
