#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main ()
{
int t,count = 0 ,a,i,n ;
vector <int> fid;
map<int ,int > smap;
cin >> t;
    while ( t -- ){
          cin >> i >> n;
          fid.push_back (i);
          for ( int j=0; j<n; j ++ ){
          cin >> a;
          if ( smap[a] == 0 ){
               smap[a] ++;
               count ++;
               } 
          }
          }
    for ( int j=0; j< (int) fid.size(); j ++)
    {
    if ( smap[fid[j]] != 0) count --;    
    }
    
    cout << count ;
    system("pause");
    return 0;
          }
