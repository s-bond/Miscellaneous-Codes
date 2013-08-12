#include <iostream>
using namespace std;
int main () {
         unsigned long long int g, t, a, d, sum, x, y,total;
         scanf("%llu%llu%llu%llu",&g,&t,&a,&d);
         while ( g!= -1 ) {
               sum = 1;x=y=0;
              x = ((t * ( t - 1)) / 2) * g;
              total = (g * a) + d;
              if ( total == 1) y = 0;
              else if ( total == 2 ) x++;
              else{
              while (1) {
                  x += sum;
                  sum <<= 1llu;
                  if ( sum >= total) break;
                              }
               y = sum - total;
               }
               printf("%llu*%llu/%llu+%llu=%llu+%llu\n",g,a,t,d,x,y);
               
         scanf("%llu%llu%llu%llu",&g,&t,&a,&d); 
                     }
         return 0;
         }
