/*
just be cautious, if we are getting x % 3 == 2, then 
we have to add "1" not "2" in the count because we can compensate by increasing the 
contribution of the "3"
*/
#include <iostream>
using namespace std;
int main () {
         int a, b, c, count,diff;
         scanf("%d%d%d",&a,&b,&c);
         while ( a!=0 || b!=0 || c!=0 ){
          count = 0;
          diff = c > a ? c-a : a-c;            
          if ( diff % b ) printf("No accounting tablet\n");
          else {
              if ( diff == b || diff ==2*b || diff == 3*b ) printf("1\n");
              else{
                  count = (diff/b)/3 ;
                  if ( (diff/b)%3 ) count ++;
                  printf("%d\n",count);
               }
            }
         scanf("%d%d%d",&a,&b,&c);
          }
         return 0;
         }
