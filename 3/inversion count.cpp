#include <iostream>
#include <string.h>
#define Max 10000005
using namespace std;
int a[200005], tree[Max];
int read(int idx){
 int sum = 0;
	while (idx > 0){
		sum += tree[idx];
		idx -= (idx & -idx);
	}
	return sum;
}
void update(int idx){
	while (idx <= Max){
        
		tree[idx] += 1;
		//if ( idx==0 ) {tree[idx] += 1;return ;}
		idx += (idx & -idx);
	}
}
int main(){
	int t, n, i;
	long long c=0;
	cin >> t;
	while(t--){
		c=0;
		getchar();
		cin >>n;
		for(i=0;i<n;i++) scanf("%d",a+i);
		for(i=n-1;i>=0;i--){
			c+=(read(a[i]-1));
			
			update(a[i]);
			}	
		cout<<c<<endl;
		memset(tree,0,sizeof(tree));
		memset(a,0,sizeof(a));
		}
return 0;
}

