#include <iostream>
#define max 1000000
int a[max],b[max+1];
using namespace std;
int main () {
         int n, i, k, ncount, ans, min_index;
         int sum, nsum, psum,min_sum;
         scanf("%d",&n);
         while ( n ) {
         ncount = ans = nsum = min_sum = sum = 0;
         min_index = n-1;
         for ( i=0;i<n;i++){
                            scanf("%d",&a[i]);
                            sum += a[i];
                            if ( a[i] < 0) {ncount++;}
                            if ( sum <= min_sum){min_sum=sum;min_index = i;}
                            }
         
         if ( ncount == n || sum < 0 ) puts("0");
         else if ( ncount == 0) printf("%d\n",n);
         else{
         sum = 0;
           for ( k=0;k<n;k++){
               if( ++min_index == n) min_index = 0;
               sum += a[min_index];
               while ( ans  && b[ans-1] > sum ) ans--;
               b[ans++]=sum;            
           }
         printf("%d\n",ans);
         }         
         scanf("%ld",&n);
         }
         return 0;
         }
