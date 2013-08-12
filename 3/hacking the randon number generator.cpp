#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
int n,k,count = 0,v[500000],s=0,i=0,j=0;

 scanf("%d%d",&n,&k);
     for (i=0;i<n;i++ ) {scanf("%d",&v[i]);}  
        sort (v,v+n);
        
        for ( i=0;i<n-1;i++ ){
		    
            if ( v[0] + k > v[n-1] ) break;
			
            for ( j=s+1;j<n;j++) {
                if ( v[i] + k == v[j] ){
                     s=j;
                     count ++;
                     break;
                     }
                
            else if ( v[i] + k < v[j]){
                          s=j-1;
                          break;
                          }
                    
            else if ( s >= n) break;
               }}
			   
            printf("%d\r",count);
    
    return 0;    
}


