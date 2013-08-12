#include <iostream>
using namespace std;
int main () {
         
         int imp[100001], n, cost, income, t, i, j=1;
         unsigned long long sum, par_sum;
         bool present;
         scanf ("%d",&t );
         while ( j <= t ) {
             scanf ("%d%d%d",&n,&cost,&income);
             for ( i=0;i<n;i++) scanf("%d",&imp[i] );
             
             present = false;
             par_sum = 0 ;
             sum = income * n;
             for ( i = 0;i < n-1; i++ ) {
                if ( !present ) {sum += cost;present=true;}
                par_sum = (imp[i+1] - imp[i] - 1)*income;
                if ( par_sum < 2*cost && present) {sum += par_sum;}
                else if ( par_sum > 2*cost ) {sum+=cost;present=false;}               
              }
             if (!present) {sum+=(cost*2);}
             else  if ( present ) sum+=cost;
           printf("Case #%d: %llu\n",sum);
           }
         return 0;
         }
