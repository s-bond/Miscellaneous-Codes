#include <iostream>
using namespace std;
int main () {
         long long int t,a[50000],b[50000],min,d,x,y,i,j;
         cin >> t;
         while ( t -- ){
                   cin >> x;for ( i=0;i<x;i++ )cin >> a[i];
                   cin >> y;for ( i=0;i<y;i++ )cin >> b[i];
                   min = 20000000;
                   for ( i=0;i<x;i++ ){
                       for ( j=0;j<y;j++ )
                        {
                        d = b[j] - a[i];
                        if ( d < 0 ) d*= (-1);
                        if ( d < min ) min = d;                   
                        if ( min == 0) break;                  
                        }
                        if ( min == 0 ) break;}
                   cout << min << endl;
                   }
         return 0;
         }
