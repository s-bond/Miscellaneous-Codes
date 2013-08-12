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
#include <cmath>
#include <cstring>
#include <time.h>
#include <fstream>
#include <bitset>
#include <set>
#include <numeric>
/////////////////
#define ULL unsigned long long int
#define GInt ({int t;scanf("%d",&t);t;})
#define GL ({unsigned long long int t;scanf("%llu",&t);t;})
#define PInt(a) printf("%d\n",(a))
#define PLng(a) printf("%llu\n",(a))
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
/////
using namespace std;
int a[1001], b[1001];
int main () {
	int i, n, sum_1=0, sum_2=0;
	n = GInt;
	FOR(i,0,n){
		a[i] = GInt;
		b[i] = GInt;
	} 
	sum_1 = a[0];sum_2 = b[0];
	FOR(i,1,n){
		int ans_1=sum_1, ans_2=sum_2;
		sum_1 = max(ans_1+a[i]+abs(b[i]-b[i-1]),ans_2+a[i]+abs(b[i]-a[i-1]));
		sum_2 = max(ans_2+b[i]+abs(a[i]-a[i-1]),ans_1+b[i]+abs(a[i]-b[i-1]));
	}	
	PInt(max(sum_1,sum_2));
	return 0;
}