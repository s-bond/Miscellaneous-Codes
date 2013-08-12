#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int main () {
         
         int t,x,y,b,p=0,z=0,sum=0;
         vector <int> a,c,r;
         cin >> t; 
          while ( t -- ) {
                    
                    cin >> p >> b >> x >> y ;
                    
                    while ( x ) { 
                              a.push_back ( x % b );
                              x /= b;
                              }
                   
                    while ( y ) { 
                              c.push_back ( y % b );
                              y /= b;
                              }
                    
                    if ( a.size() > c.size()){
                                  for ( int i=0;i < a.size(); i ++ ){
                                  if ( z < c.size()) {
                                            r.push_back ( (a[i] + c[i]) % b );
                                            z ++;
                                            }
                                  else if ( z < a.size()) {
                                            r.push_back ( a[i] );
                                            z ++;
                                            }
                                  }
                                  }
                                  
                    else if ( c.size() >= a.size() ){        
                                  for ( int i=0;i < c.size(); i ++ ){
                                  if ( z < a.size()){
                                            r.push_back ( (a[i] + c[i]) % b );
                                            z ++;
                                            }
                                  else if ( z < c.size()){
                                            r.push_back ( c[i] );
                                            z ++ ;        
                                            }
                                  }
                                  }
                    for ( int i=0;i < r.size(); i ++ ) {
                              sum = sum + (pow ( b,i) * r[i]);
                              }
                    cout << p << " "<< sum << endl;                            
                    sum = z = 0;
                    r.clear ();a.clear();c.clear();
         }


system ("pause");
return 0;
}
