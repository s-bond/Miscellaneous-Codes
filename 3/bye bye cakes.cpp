#include <iostream>
#include <algorithm>
using namespace std;
int main () {
  int a[4], b[4], c[4], max, i, j;
  for ( i=0;i<4;i++)
  scanf("%d",&a[i]);
  for ( i=0;i<4;i++)
  scanf("%d",&b[i]);

  
  while ( a[0] != -1 ){
  for ( i=0;i<4;i++)
    if ( b[i] > a[i] && a[i]) c[i] = 1;
	else if ( b[i] && a[i]%b[i]!=0) c[i] = (a[i] / b[i]) + 1;
	else if ( b[i] && a[i]%b[i]==0) c[i] = a[i]/b[i];
	else c[i]=0;
  max = *max_element(c,c+4);
  
  for ( i=0;i<4;i++){
  if(b[i]) printf("%d",(b[i]*max - a[i]));
  else printf("0");
  if ( i!=3) printf(" ");}
  
  printf("\n");
  
  for ( i=0;i<4;i++)
  scanf("%d",&a[i]);
  
  for ( i=0;i<4;i++)
  scanf("%d",&b[i]);
  }
  return 0;
  }
