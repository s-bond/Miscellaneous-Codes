#include <stdio.h>
using namespace std;
main()
{   int n,k,l,o=0;long long m;
     scanf("%d",&n);
     scanf("%d%lld",&k,&m);  
     long long stu[n+1],mov[k+1],count[100001];                      
     for(int i=1;i<=n;i++)        
     scanf("%lld",&stu[i]);
     for(int i=1;i<=k;i++)
     scanf("%lld",&mov[i]);
     
     for(int i=1;i<=n;i++)
     {int flag=0,j=2;
     count[1]=stu[i];
     while(j<=m)
     {
     count[j]=mov[count[j-1]];
      for(l=1;l<j;l++)              //finding at which point of minute
        if(count[j]==count[l])
      {if(l!=1)
      {o=j;}
      j=j-l;flag=1;break;}//the loop exists(if any)              
     if(flag==1)break;
     j++;
     }
     if(flag==0){j--;printf("%lld ",count[j]);}
     else if(m%j==0 && flag==1){if(l!=1){printf("%lld ",count[o-1]);}else if(l==1){if(count[1]==count[l])printf("%lld ",count[l+j-1]);}else printf("%lld ",count[l]);}
     else
     printf("%lld ",count[o+(m%j)]);
     }
}

