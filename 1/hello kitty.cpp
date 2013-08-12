#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;
int main()
{   char a[27];cin>>a;int l=0,n,j;
    while(strcmp(a,"."))
    {cin>>n;
    l=strlen(a);
    for(int j=0;j<l;j++)
    {
    for(int u=0;u<n;u++)        
    {for(int i=j;i<l;i++)
    cout<<a[i];   
    if(j!=0){for(int z=0;z<j;z++)
    cout<<a[z];}}          
    cout<<endl;
    }
    cin>>a;
    }
    system("pause");
    return 0;
}
