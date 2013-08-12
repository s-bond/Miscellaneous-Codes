#include <iostream>
using namespace std;
int main () {
         int a, b, t, i;
         char c;       
         //double x;  
         scanf ("%d",&t);
         while ( t-- ){
         scanf ("%d%c%d",&a,&c,&b);
         while ( a >1 || b >1 ){
         //x= double(a)/double(b);
            if ( a < b ) {
              printf("L");
              b -= a;       
              }
            else if ( a  > b ){
             printf("R");
             a -= b;
             }
        i = a;
        a = b;
        b = i;                                     
            }
           printf("\n");
           }
         return 0;
         }
