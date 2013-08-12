#include <iostream>
using namespace std;
class law {
          public:
                    int info;
                    int cancel;
          };
 int main () {
          int t,n,k,i,a,b[100010];
          law s[100010];
          char c[10];
          
          scanf("%d",&t);
          
          while ( t -- ){
                    
                    scanf ("%d",&n);
                    i = 1;
                    while ( i <= n ){
                              
                              scanf("%s",&c);
                              if ( c[0] == 'd' ){
                                 s[i].info   = i;
                                 s[i].cancel = 0;
                                                }
                              
                              else if ( c[0] == 'c' ){
                                        
                                        scanf("%d",&k);
                                        s[i].cancel = k;
                                        s[i].info   = i;
                                        }
                              i ++ ;
                              
                              }
                   i = n;
                   
                   while ( i > 0 ){
                             
                             a = s[i].cancel;
                             k = 0;
                             while ( a != 0 ){
                                       
                                       s[a].cancel = 0;
                                       if ( k++ % 2 == 0 )
                                          s[a].info = 0;
                                       
                                       a = s[a].cancel;
                                       }
                             i -- ;
                             }
                    
                    i = 1;k=0;
                    while ( i <= n ){
                              
                              if ( s[i].info != 0 )
                              b[ k ++ ] = i;
                              i ++;
                              }
                    printf ( "%d\n",k );
                    i = 0;
                    while ( i < k)
                    printf ( "%d ",b[i ++ ] );
                    printf ( "\n" );
                     
                    }
          
          system ("pause");
          return 0;
          }
