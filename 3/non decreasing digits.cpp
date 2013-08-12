#include <stdio.h>
int main()
{
     int  n, p, t, i, j;
     long long int a[10],sum;
     scanf("%d",&p);
         while( p-- ){
         scanf("%d%d",&t,&n);
         if ( n == 1 ) sum = 10;
         else{
         for (i=0;i<10;i++) a[i]=i+1;
         for(i=1;i<n;i++)
         {
               sum = 0;
               for(j=0;j<10;j++){
               a[j] += sum;
               sum = a[j];
           }
         }   
             }
             printf("%d %lld\n",t,sum);
                          }
             return 0;
}
