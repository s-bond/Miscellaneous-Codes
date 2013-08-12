#include <stdio.h>
main (){
     int t, n, m, d, h[501],count,i;
     scanf("%d",&t);
     while ( t-- ){
     count = 0;
           scanf("%d%d%d",&n,&m,&d);
           for ( i=0;i<n;i++){scanf("%d",&h[i]);
           if ( h[i] % d == 0 )
           count = count + h[i]/d - 1;
           else
           count = count + h[i]/d;
           }
           if ( count >= m ) printf("YES\n");
           else printf("NO\n");
           
       }
return 0;                
}
