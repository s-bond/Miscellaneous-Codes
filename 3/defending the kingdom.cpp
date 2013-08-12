#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    unsigned long long int t, w, h, x[40000],y[40000], maxx, maxy, i, n;
    cin >> t;
    while ( t -- ){
      cin >> w >> h >> n;
      if ( n ) {
      for ( i=0;i<n;i++) cin >> x[i] >> y[i];
      sort (x,x+n);
      sort (y,y+n);
      maxx = x[0] - 1;
      for ( i=0;i<n-1;i++) maxx = max ( maxx, x[i+1]-x[i]-1);
      maxx = max ( maxx, w - x[n-1] );
      maxy = y[0] - 1;
      for ( i=0;i<n-1;i++) maxy = max ( maxy, y[i+1]-y[i]-1);
      maxy = max ( maxy , h - y[n-1]);
      cout << maxx * maxy << endl;}
      else
      cout << w*h << endl;
      }    
    return 0;         
       }
