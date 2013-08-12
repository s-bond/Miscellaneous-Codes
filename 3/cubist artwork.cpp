#include <stdio.h>
int main () {
         long int w, d, front[1000], side[1000], sum, i, j;
         scanf ("%ld%ld",&w,&d);
         while ( w!=0 && d !=0 ){
         
         sum = 0;
         for ( i=0;i<w;i++){
         scanf ("%ld",&front[i]);sum+=front[i]; }
         for ( i=0;i<d;i++){
         scanf ("%ld",&side[i]);
         for ( j=0;j<w;j++) {
         if ( side[i] == front[j] )
         {side[i]=front[j]=0;break;}
         }
         sum+=side[i];
          }
         printf("%ld\n",sum);              
         scanf ("%ld%ld",&w,&d);
         }
         return 0;
         }
