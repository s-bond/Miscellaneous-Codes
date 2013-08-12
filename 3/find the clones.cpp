#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main () {
         int n, m, b[20001]={0}, i, j, count;
         string s[20001];
         scanf("%d%d",&n,&m);
         while ( n != 0 ){
			map < string , int> smap;
                   for ( i=0;i < n; i++ ){
                       cin >> s[i];
                       smap[s[i]] ++;
                               }
                   sort ( s, s + n);
                   
                   for ( i=0;i < n; i+=smap[s[i]] ){
                       if ( smap[s[i]] == 1 ) b[0]++;
                       else
                       b[smap[s[i]]-1] ++;
                               }
                   for ( i=0;i < n; i++ )
                   {printf("%d\n",b[i]);b[i]=0;}               
                   scanf("%d%d",&n,&m);
                   }         
         }
