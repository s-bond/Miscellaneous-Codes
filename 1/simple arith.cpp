#include <stdio.h>
main()
{
int t;
scanf("%d",&t);
while(t--){
          char c;long long int x,y;
          scanf("%lld%s%lld",&x,&c,&y);
          while(1){
          if(c=='+')x+=y;
          else if(c=='*')x*=y;
          else if(c=='/')x/=y;
          else if(c=='-')x-=y;
          scanf("%s",&c);
          if(c!='=')
          scanf("%lld",&y);
          else break;               
          }
          printf("%lld\n",x);
          }
}
