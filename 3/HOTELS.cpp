//top-bottom upproach :)
#include <stdio.h>
#define max 1000000
int a[max];
main () {
	int n, i=0, j=0, par_sum=0, p_max, p_sum=0,f=1;	
	   scanf("%d%d",&n,&p_max);
	   while(i<n) {
           scanf("%d",&a[i]);
           if ( f ){     	  	   
	       par_sum += a[i];
			while ( par_sum > p_max ){
			  par_sum -= a[j];
			  j++;
			  }
			if (p_sum < par_sum  ) { p_sum=par_sum; }
            if (p_sum == p_max ) f=0;}
			//cout << par_sum <<" "<<par_count<<endl;		
			i++;
		}		    
	printf("%d\n",p_sum);	
	return 0;
	}
