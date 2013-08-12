//perfect guess !!!! :) :)
#include <iostream>
#include <algorithm>
using namespace std;
int main () {
	int t, a[20][3], i, j, n, k, d, par_sum;
	cin >> t;
	while ( t-- ) {
		cin >>n;
		for ( i=0;i<n;i++)
			for ( j=0;j<3;j++) 
			  cin >> a[i][j];
	  if ( n == 1 ) par_sum = *min_element(a[0],a[0]+3);	  
      else	if ( n == 2 ){
		  par_sum = *min_element(a[0],a[0]+3);
		  par_sum += (*min_element(a[1], a[1]+3));
		  }
		  else {
		int sum[20][3] ={0};
		sum[0][0]=a[0][0];
		sum[0][1]=a[0][1];
		sum[0][2]=a[0][2];
		// calculate step by step from second position
		for(i=1;i<n; i++ ){ 
      sum[i][0] = min(sum[i-1][1],sum[i-1][2]) + a[i][0] ; 
      sum[i][1] = min(sum[i-1][0],sum[i-1][2]) + a[i][1] ; 
      sum[i][2] = min(sum[i-1][0],sum[i-1][1]) + a[i][2] ;       
            } 
      par_sum = min(min( sum[n-1][0], sum[n-1][1]) , sum[n-1][2]) ; 
			}
		cout << par_sum << endl;
		}	
	return 0;
	}
