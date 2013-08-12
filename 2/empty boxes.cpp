#include <iostream>

using namespace std;
int main ()
{
int t,n,k,f,w;
cin >> t;
    while ( t-- ){
          cin >> n >> k >> w >> f;      // solutin courtsy - Nayan
          w   =  (f-n)/(k-1);          // formula --> n + (k-1)w = f
          cout << n + (w*k) << endl ;  // ans = n + k.w
          }    
    
   return 0; 
}
