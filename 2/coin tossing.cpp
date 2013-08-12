#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main () 
{
    string s;
	int t, n, i;
	unsigned long long int sum=0;
	scanf("%d",&t);
	while ( t-- ){
		cin >> s;
		n = s.size();
		sum = pow(2.0,(double)n);
		for ( i=1;i<n;i++ ){
			string s1 = s.substr(0,i);
			string s2 = s.substr(n-i);
			//cout << s1 <<" "<<s2<<endl;
			if ( s1 == s2 ) {
				sum += pow(2.0,(double)i);
			}
		}
		cout << sum << "\n";
	}
	
    //system("pause");
    return 0;
}
