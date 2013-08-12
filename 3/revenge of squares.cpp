#include <stdio.h>
#include <math.h>
main () {
int t=50;
long int a,b,c,n,k,count,r;
while(t--){
scanf("%ld",&n);count=0;
c=sqrt(n);
for(a=1;a<=c;a++){
k=n-a*a;
r=sqrt(k);
if(r*r==k&&a>=r)count++;
}
printf("%ld\n",count);
}
return 0;
}
