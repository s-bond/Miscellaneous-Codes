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
int global_counter, counter;
vector<int> a;
void perform () {
	int I = 0, i, pointer;
	counter = 2;
	a.push_back(1);
	while ( pointer = a[I] ){
		for ( i=0; i<pointer; i++ )
			{a.push_back(counter);
			global_counter++;}
			counter++;
			I++;
	if( global_counter >= 1000000 ) break;
	}
}
int main () {
	int t, n, i=1;	
	t = GI;
		perform();
	while ( i<=t ){
		n = GI;
		printf("Case #%d: %d\n",i,a[n-1]);
		i++;
	}	
	//system("pause");
	return 0;
}
