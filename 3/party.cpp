#include <iostream>
using namespace std;
int main () {
         
         int t,n;
         cin >> t;
         while ( t -- ){
                   cin >> n;
                   if ( n==0 || n==1 || n==2 )
                   cout <<"0"<<endl;
                   else
                   cout << n - 2<<endl;
                   }
         return 0;
         }
         /* 3 -> 1
          * 4 -> 2
          * 5 -> 3
          * then by intitution 
         */
         
