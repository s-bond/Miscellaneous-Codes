//derive the formula from the general expression
// a-(k-2)d , .. a ... a+(k-2)d for k is odd
// eg. k = 3 , a-d + a + a + d = n a.k.a. sum
// for an even k,
// a + (a+d) + (a+(k-1)d) = n a.k.a. sum
#include <iostream>
#include <math.h>
using namespace std;
int main () {
         int t, n, k, a, div;
         bool flag;
         float res, par_res, d;
         scanf("%d",&t);
         while ( t-- ) {
           scanf("%d%d",&n,&k);
           flag = true;
           if ( n == k == 1 ) flag = true;
           else if ( n == k ) flag = false;
           else if ( n < k )  flag = false;
           else {
           if ( k == 2 && n == 1 ) flag = false;
           
           else if ( k == 2 ) flag = true;
           
           else if ( k>2 && k%2 == 0 ){
             div  = (k*(k-1))/2;
             a    = 1;
             flag = false;
             while ( n > k*a ) {
                d = float (n - k*a)/float( div );
                if ( floor(d) == d ){flag=true;break;}          
                a ++;
              }
             }
           else if ( k%2 ){
           res     = float (n)/ float (k);
           par_res = n/k;           
           if ( par_res != res ) flag = false;
             }
            }
            
            if ( flag ) printf("Padam tharumaru machi!\n");
            else printf("Padam sotha machi!\n");
            
            }
         return 0;
         }
