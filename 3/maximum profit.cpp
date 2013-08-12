#include <iostream>
main()
{
unsigned long long int i,j,n,m,sum,t,max,x,a[101][101],b[101][101],c[101][101];
scanf("%llu",&t);
while( t-- ){

          scanf("%llu%llu",&n,&m);
          
          for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				scanf("%llu",&a[i][j]);
		  
          for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				scanf("%llu",&b[i][j]);
		  
          for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				scanf("%llu",&c[i][j]);
		  
          sum=0;
		  
          for(i=0;i<n;i++)
          {
          max=0;
            for(j=0;j<m;j++)
            {           
			    if ( b[i][j] > a[i][j] )
					b[i][j] = a[i][j];
				
				x = b[i][j]*c[i][j];
				
                if(  x > max ) 
					max = x ;
            }
sum += max; 
          }
          printf("%llu\n",sum);
                      }

return 0;
}

