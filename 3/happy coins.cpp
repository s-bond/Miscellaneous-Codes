//refer to txt file
#include <iostream>
using namespace std;
int main () {
         int t,l,n,i;
         char c[5];
         cin >> t;
         while ( t--) {
         l=0;
                    scanf ( "%d",&n );
                    for ( i=0;i<n;i++ ){
                       scanf ("%s",&c);
                       if ( c[0] == 'l' ) l++;               
                                      }  
                       if ( l % 2 == 0)
                       printf ("hhb\n");
                       else if ( l % 2 != 0 )
                       printf ("lxh\n");
                      }
         return 0;
         }
