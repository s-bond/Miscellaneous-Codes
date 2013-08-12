#include <iostream>
#define Max 500000
int a[Max];
int main () {
  int n, k, i, j, res;
  scanf ("%d%d",&n,&k);
  while ( n ){
  res = 0;
  for ( i=2;i<=n;i++){
    a[i] = i - 1;
    for ( j = 1 > i-k ? 1:i-k ;j<=i-1;j++){
     a[i] = a[i] + a[j];
     if ( a[i] > 1234567890 )
     {res = a[i];break;}          
    }
    if ( res ) break;                 
   }
   if ( res ) printf("%d\n",res);
   else
   printf("%d\n",a[n]);
   scanf ("%d%d",&n,&k);
   }
   return 0;
 }
