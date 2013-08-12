/* @
 * Siddharth Maloo
*/
#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <string.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <cstring>
#include <time.h>
#include <fstream>
/////////////////
#define ULL unsigned long long int
#define GI ({int t;scanf("%d",&t);t;})
#define GL ({unsigned long long int t;scanf("%llu",&t);t;})
#define PInt(a) printf("%d\n",(a))
#define PLng(a) printf("%llu\n",(a))
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
/////////////////
using namespace std;
ULL k, num;
vector<char>::reverse_iterator it;
int bit(ULL x){
	int cn = 0;
	while ( x!=1 ){
		x >>= 1;
		cn++;
	}
	return cn;
}
int bits(ULL x){
	int cn = 0;
	while ( x ){
		x >>= 1;
		cn++;
	}
	return cn;
}
int main () {
	int i, j, c, t;
	 t = GI;
	 while (t--){
 		k = GL;
 		c = bit(k);
 		if(  pow(2,c+1)-k == 1 )
 			c++;
 		num = k - pow(2,c) + 1;
 		vector<char> v, vv;
 		j = c - bits(num);
 		FOR(i,0,j)vv.push_back('5');
 		while ( num ){
		 	if( num&1 )
		 		v.push_back('6');
	 		else
	 			v.push_back('5');
 			num >>= 1;
		 }
	 	for (i=0;i<vv.size();i++)
	 	cout<<vv[i];
	 	for ( it=v.rbegin() ; it < v.rend(); ++it )
        cout <<*it;
        printf("\n");
 		
 	}
	
	return 0;
}