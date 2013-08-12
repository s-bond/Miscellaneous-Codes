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
#define ULL unsigned long long int
#define GInt ({int t;scanf("%d",&t);t;})
#define GL ({unsigned long long int t;scanf("%llu",&t);t;})
#define PInt(a) printf("%d",(a))
#define PLng(a) printf("%llu\n",(a))
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
/////////////////
using namespace std;
char ch[12][12];
int counter, N;
void sid(int i, int j){
	//cout<<i<<" "<<j<<endl;
	if(i==N-1&&j==N-1)
		counter++;
	else{
	int num = ch[i][j]-'0';
	if(j+num < N && num) sid(i,j+num);
	if(i+num < N && num) sid(i+num,j);		
	}
}
int main () {
	N = GInt;
	FOR(i,0,N)
	scanf("%s",&ch[i]);
	sid(0,0);
	PInt(counter); 	
	return 0;
}