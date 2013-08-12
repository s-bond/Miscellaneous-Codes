#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{   int t;
    scanf("%d",&t);
    while(t-->0)
    {
    double a,b;int c;
    cin>>a>>b;
    if(a>0 && b>0)
    {
    if(b<a)
    c=ceil((a-b)/b);
    else
    c=ceil((b-a)/a);
    printf("%d\n",c);
    }
    else if(a<0 && b<0)
    {
    a*=(-1.0);b*=(-1.0);
    if(b<a)
    c=ceil((a-b)/b);
    else
    c=ceil((b-a)/a);
    printf("%d\n",c);
    }
    else
    {
    if(a<0)
    a*=(-1.0);     
    else if(b<0)
    b*=(-1.0);
    if(a<b)
    c=ceil((a+b)/a);
    else
    c=ceil((a+b)/b);
    printf("%d\n",c);   
    }           
    }
    
    return 0;
}
