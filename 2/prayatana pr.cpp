// idea from graphs depth first search :) :)
// not using stack for the sake of time ...
#include <iostream>
#include <vector>
#define Max 100005
using namespace std;
bool publicity[Max];
vector <int> v[Max];
void dig ( int i ) {
	publicity[i] = true;
	int size = v[i].size();
	for ( int j=0;j<size;j++ ){
	  if ( !publicity[v[i][j]])
	  dig ( v[i][j] ) ;
	  }	
   }
int main () {

     int t, count, num, e, a[100000], b[100000], i, j;
	 scanf("%d",&t);
	 while ( t-- ){
	 count =  0;
		scanf("%d%d",&num,&e);
		for ( j=0;j<e;j++ ){
			scanf("%d%d",&a[j],&b[j]);
			v[a[j]].push_back(b[j]); v[b[j]].push_back(a[j]);}
		for ( j=0;j<num;j++ ){
			if ( !publicity[j]){count++;dig(j);}
		  }
		printf("%d\n",count);
		for(j=0;j<e;j++) {v[a[j]].clear();v[b[j]].clear();}
		for (j=0;j<num;j++) publicity[j]=false;
		
		}
	 }