#include <iostream>
using namespace std;
int main () {
         
         unsigned long long n;
         bool flag = true;
         
         cin >> n;         
         if ( n == 0 || n == 1)
         cout << "TAK";
         else {
         while ( n != 1 )
         {
         if ( n % 2 == 1 ) {flag = false; break;}
         n /= 2;                    
         } 
         if ( flag )
               cout << "TAK";
         else
               cout << "NIE";         
               }
         return 0;
         }
