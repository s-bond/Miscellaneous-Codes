#include <iostream>
#define Max 100000001
using namespace std;
char one[Max];
void gen(){
	int i, j=1, d;
	while (true){
		if(j>Max) break;
		one[j]=1;
		d=j;
		while(d){j+=(d%10);d/=10;}		
		}

	j = 3;

	while (true){
		if(j>Max) break;
		one[j]=3;
		d=j;
		while(d){j+=(d%10);d/=10;}		
		}
	j = 9;
	while (true){
		if(j>Max) break;
		one[j]=9;
		d=j;
		while(d){j+=(d%10);d/=10;}		
		}
	}
void solve( int num ) {
	int d, par_num = num, ans, check;
	while ( true ){
		if ( one[par_num] != 0 ) {ans=par_num;check=one[par_num];break;}
		else
		{d = par_num;
		while ( d ) { par_num+=(d%10);d/=10;}}}
		printf("%d %d\n",check,par_num);
}
int main () {
	int t, n;
	scanf("%d",&t);
	gen();
    while ( t-- ){
		scanf("%d",&n);
		solve(n);
	}
	//for(int i=0;i<One.size();i++)
	//if(One[i]){cout<<i<<endl;system("pause");}
 }
