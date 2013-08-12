#include <iostream>
using namespace std;
int n,ans;
unsigned long long answer ( unsigned long long n ) {
         if ( n==1) return 5;
         else return (3*n+1) + answer( n-1);
         }
int main () {
         
         cin >> n;
         while ( n ) {
         ans = answer ( n ) ;
         cout << ans << endl;
         cin >> n;
         }
         return 0;
         }
