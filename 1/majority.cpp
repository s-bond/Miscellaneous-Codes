#include <iostream>
#include <cstdlib>
#include <map>
using namespace std;

int main ()
{
    int t;
    scanf("%d",&t);
    while(t-- > 0)
    {
    map <int, int > smap;
    int tt,n,sid=0;
    scanf("%d",&tt); 
    n=tt;    
    while(tt-->0)
    {
    int a;
    scanf("%d",&a);
    smap[a]++;  
    if(smap[a]>(n/2))
    sid=a;
    }
    if(sid!=0)
    cout<<"YES "<<sid<<endl;
    else
    cout<<"NO"<<endl;          
    }
    return 0;
}
