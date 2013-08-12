#include <stdio.h>
main()
{
    int n;char c[2],sp;
    scanf("%d",&n);n++;long int a[n],t=1;
    while(t < n) {scanf("%ld",&a[t]);t++;}
    scanf("%ld",&t);
    while(t-- > 0){
             long int xx,yy;
             scanf("%c",&c);
             if(c[0]=='U'){
                           int i;long int x;
                           scanf("%d%ld",&i,&x);
                           a[i]=x;
                           }
             else if(c[0]=='Q'){
                  long int x,y;
                  scanf("%ld%ld",&x,&y);
                  xx=a[x];
                  yy=a[x+1];
                  for(int i=x+1;i<=y;i++)
                     if(xx < a[i])
                         xx=a[i];
                  if(xx == yy) yy=a[x];
                  for(int j=x;j<=y;j++)
                     if(yy < a[j] && a[j]!=xx) 
                          yy=a[j];
                  printf("%ld\n",xx+yy);
                                }
                  }
    }
