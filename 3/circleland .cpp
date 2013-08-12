#include <stdio.h>
#define max 100000
int len[max+1],partial_sum[max+1];
main () {
         int t,n,min,sum,cir,i,d;
         scanf ("%d",&t);
         while ( t --) {
                   cir = 0;
                   scanf ("%d",&n);
                   for ( i=0;i<n;i++ ) {
                   scanf ("%d",&len[i]);
                   cir += len[i];
                   partial_sum[i] = cir;
                   }
                   if ( n == 2 ) min = len[0] < len[1] ? len[0] : len[1];
                   else{
                   min = cir - len[0] < cir - len[n-1] ? cir - len[0] : cir - len[n-1];
                        for ( i=1;i<n-1;i++){
                            d = partial_sum[i-1] + cir - len[i];
                            min = min < d ? min : d;
                            d = ((cir - partial_sum[i]) * 2) + partial_sum[i-1];
                            min = min < d ? min : d;
                            }
                         }
                   printf("%d\n",min);
                   }
         }