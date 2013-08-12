#include <iostream>
#define Max 1000002
using namespace std;
int a[Max], tree[2*Max];
int read(int idx){
 int sum = 0;
	while (idx > 0){
		sum += tree[idx];
		idx -= (idx & -idx);
	}
	return sum;
}
void update(int idx){
	while (idx <= 2*Max){
        
		tree[idx] += 1;
		//if ( idx==0 ) {tree[idx] += 1;return ;}
		idx += (idx & -idx);
	}
}
int main(){
	int t, n, i,pp;
	long long c=0;
	i=0;
	while(scanf("%d",a+i)!=EOF){a[i]+=1000000;i++;}
	n = i;
		for(i=n-1;i>=0;i--){
			pp=(read(a[i]-1));			
			update(a[i]);
			a[i]=pp;
			}	
		for(i=0;i<n;i++) cout << a[i]<<" ";
return 0;
}

