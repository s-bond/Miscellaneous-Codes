#include <iostream>
#include <algorithm>
using namespace std;
int main () {
	int t, a[101][101],b[101] ,i, j, n, m, k, d, par_sum;
	scanf("%d%d",&n,&m);
	
		for ( i=0;i<n;i++)
			for ( j=0;j<m;j++) 
			  cin >> a[i][j];
			  
	  if ( n == 1 ) par_sum = *min_element(a[0],a[0]+m);
	  
		  else {
		int sum[100][100] ={0};
		for(j=0;j<m;j++) sum[0][j] = a[0][j];
		
		//sum[0][0]=a[0][0];
		//sum[0][1]=a[0][1];
		//sum[0][2]=a[0][2];
		
		for(i=1;i<n;i++){
			sum[i][0] = min(sum[i-1][0],sum[i-1][1]) + a[i][0];
			for(j=1;j<m;j++){
				if  ( j+1 < m )
				sum[i][j] = min(min(sum[i-1][j-1],sum[i-1][j]),sum[i-1][j+1]) + a[i][j];
				else
				sum[i][j] = min(sum[i-1][j-1],sum[i-1][j]) + a[i][j];
			}
		}
		for ( j=0;j<m;j++ )
		b[j] = sum[n-1][j];
		
		par_sum = *min_element(b,b+m);
		/*
		for(i=1;i<n; i++ ){ 
      sum[i][0] = min(sum[i-1][1],sum[i-1][2]) + a[i][0] ; 
      sum[i][1] = min(sum[i-1][0],sum[i-1][2]) + a[i][1] ; 
      sum[i][2] = min(sum[i-1][0],sum[i-1][1]) + a[i][2] ;       
            } 
      par_sum = min(min( sum[n-1][0], sum[n-1][1]) , sum[n-1][2]) ; 
			*/}
		printf("%d\n",par_sum);
		//system("pause");
		
	return 0;
	}
