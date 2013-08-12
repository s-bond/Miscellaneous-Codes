#include <iostream>
unsigned long long r, d;
using namespace std;
unsigned long long choose(unsigned long long int n, unsigned long long int k) {
    if (k > n) {
        return 0;
    }
    r = 1;
    for ( d = 1; d <= k; ++d) {
        r *= n --;
        r /= d;
    }
    return r;
}
int main () {
         unsigned long long int total=0, n;
         int t, bit, i;
         scanf("%d",&t);
         while ( t --){
         total = n = 0;bit=0;
         cin >> n;
         while ( n ) {bit++;n>>=1;}
         if ( bit == 2 ) printf("1\n");
         else{
         for ( i=2;i<bit;i++ ){
           if ( i % 2 == 0){
             total += choose(i-1,(i/2)-1);
             }                            
           }
           //printf("%llu\n",total);  
           cout << total << endl;
                    }
         }
         return 0;
}
