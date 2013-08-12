#include <stdio.h>
main()
{   int t,n,s,d,x;
    scanf("%d",&t);
    while(t-->0)
    {
    scanf("%d%d%d",&n,&s,&d);
    x=s;
    for(int i=0;i<n-1;i++)
    {
     s+=d;
     x+=s;       
    }
    printf("%d\n",x);
    }}
