#include <iostream>
#include <map>
using namespace std;
int main () {
         map < int ,int > smap ;
         int n,w,in,sum=0,i,j;
         float result = 0.01;
         cin >> n >> w;
         while ( n ){
                   for (i=0;i<n;i++ ){
                             cin >> in ;
                             for (j=0; ; j++ ){
                                       if ( j*w <= in && in < (j+1)*w ){
                                          smap [ j ] ++;
                                          break;
                                          }
                                       }
                             }
                  
                   sum = 0;
                   for ( i=0; ; i ++  ){
                              sum += smap[ i ];
                              
                              if ( sum == n ){
                                       n = i;
                                       break;
                                       }
                              }
                   in = smap[0];
                   for ( i = 1;i <= n; i ++ ){
                             if ( smap [i] > in)
                             in = smap [i];
                             }
                   
                   // n = total no of intervals ( includes 0 also as first interval)
                  //  in= max frequency 
                  result = 0.01;
                  for ( i = 0;i < n; i ++ ){
                            result=result+float( smap[i] * (n-i) )/float ( in* (n) );
                            }
                  printf ("%0.06f\n",result);
                  smap.clear ();
                  cin >> n >> w;
                   }
         return 0;
         }
