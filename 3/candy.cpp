#include <iostream>
#include <math.h>
using namespace std;
int main () {
         unsigned long long int t,n,a,count,cut,num,b;
         scanf("%llu",&t);
         while ( t-- ) {
            scanf("%llu",&n);
            if ( n == 1 ) printf("1 0\n"); 
            else{
            a = n;
            count = 0;
            while ( a!=1 ) {a >>= 1;count++;}
            num = pow(2,count);
            if ( num == n ) printf("%llu 0\n",num);
            else {
            num = pow(2,count+1);
             b = num;
             a = num/2;
             cut=0;
             while ( a < n ) { 
             if ( a + b/2 <= n ) {cut++;a+=(b/2);b>>=1;} 
             else { cut++; b>>=1; }
             }
             printf("%llu %llu\n",num,cut);
             }
           }}
         return 0;
         }
