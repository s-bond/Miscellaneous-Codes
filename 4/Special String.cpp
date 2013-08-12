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
#include <bitset>
#include <set>
/////////////////
#define ULL long long int
#define GInt ({int t;scanf("%d",&t);t;})
#define GL ({long long int t;scanf("%lld",&t);t;})
#define PInt(a) printf("%d\n",(a))
#define PLng(a) printf("%lld\n",(a))
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
inline int GI ( void )
{
int Ret = 0;
char Ch;
while ( isdigit ( Ch = getchar() ) ) Ret = Ret * 10 + ( Ch - '0' );
return Ret;
}
//////////////////
/*
check whether the last two digits are same or diff.
if same add one similiar element , if diff, add the last one
eg. xx -> xxx and xy -> xyy
if diff, 2*same + diff 
eg.
xx -> xxy or xxz ( two options )
and for diff
xy -> xyx ONLY
*/
using namespace std;
ULL same[50], diff[50];
void perform(){
	same[1]=3; same[2]=3;
	diff[1]=0; diff[2]=6;
	FOR(i,3,31){
		same[i] = same[i-1] + diff[i-1];
		diff[i] = (ULL)2*same[i-1] + diff[i-1];
	}
}
int main () {
	int i, j, k, c=0, t;
	perform();
	t = GI();
	while(t--){
		i=GI();
		PLng(same[i]+diff[i]);
	} 
	
	return 0;
}