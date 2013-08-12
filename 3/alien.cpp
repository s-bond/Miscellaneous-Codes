//top-bottom upproach :)
#include <iostream>
#define max 100005
int a[max];

using namespace std;
int main () {
	int t, n, i, j, par_sum, par_count, p_max, p_sum, count, s;
	scanf("%d",&t);
	
	while  ( t-- ) {
	   par_sum = 0;
	   scanf("%d%d",&n,&p_max);
       par_sum = par_count = count = p_sum = j = 0;	 	   
	   for ( i=0;i<n;i++ ) {
	       scanf("%d",&a[i]);	     	  	   
	       par_sum += a[i];
		   par_count ++;
			while ( par_sum > p_max ){
			  par_sum -= a[j];
			  par_count --;
			  j++;
			  }
			if ( count < par_count  ) { count=par_count;p_sum=par_sum; }
			else if ( count == par_count ) { p_sum=p_sum<par_sum?p_sum:par_sum; }
			//cout << par_sum <<" "<<par_count<<endl;
		
		}
		    
	printf("%d %d\n",p_sum,count);
	}
	return 0;
	}
