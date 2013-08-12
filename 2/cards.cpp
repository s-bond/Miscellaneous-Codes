#include <iostream>
using namespace std;
int main () {
	int t;
	unsigned long long ans, num;
	scanf("%d",&t);
	while ( t-- ) {
		cin >> num;
		ans = 3*(num*(num+1)/2)-num;
		ans = ans %1000007;
		cout << ans << endl;
	}
	return 0;
}
