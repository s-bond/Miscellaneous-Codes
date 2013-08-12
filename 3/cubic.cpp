#include <iostream>
int main () {
         int t;
         long long int b, c, d, result;
         scanf ( "%d",&t);
         while ( t -- ) {
               // sum of roots -b/a
               //prod of roots taken two at a time c/a
               //result = (-b/a )^2 - 2(c/a)
               scanf ("%lld%lld%lld",&b,&c,&d);
               result = b*b - 2*c;     
       printf("%lld\n",result);
           } 
           return 0;
         }
