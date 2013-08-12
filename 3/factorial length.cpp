/*
  Name: factorial length
  Copyright: maloo
  Author: forumula copied from net
  Date: 09-12-11 17:29
  Description: useless
*/


#include <iostream>
#include <math.h>
#define PI 3.1415926535897932384626433832795
using namespace std;
int main () {
         int t;
        long long n,sum;
        cin >> t;
       while ( t -- ) {
         sum = 0;
         cin >> n;
         if ( n == 0 || n == 1 ) cout << "1"<<endl;
         else
         {
         sum = floor((log(2*PI*n)/2 + n*(log(n) - 1) + 1/(12*n))/log(10)) + 1 ;
         cout << sum << endl;
        }
        }
        system ("pause");
         return 0;
         }
