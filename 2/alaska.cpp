#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () 
{
    vector < int > v;
    int t,a,flag=0;
    
    cin >> t;
    while ( t != 0 ){
          
          for ( int i=0; i<t; i++ ){
              cin >> a;
              v.push_back ( a );
              }
              sort (v.begin(),v.end());
          for ( int i=0; i<t-1; i++ ){
              if ( v[i+1] - v[i] > 200 || 1422 - v[t-1] > 100 ) {flag=1;break;}
              }
              if(flag == 0) cout << "POSSIBLE" << endl;
              else cout << "IMPOSSIBLE"<<endl;
              flag = 0;
              v.clear();
              cin >> t;    
      }
      system ("pause");    
      return 0;
}
