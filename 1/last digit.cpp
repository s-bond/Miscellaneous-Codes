#include <iostream>
int main ()
{int t;scanf("%d",&t);while( t-- > 0){int n; long long int p;scanf("%d%lld",&n,&p);if(n==0 && p!=0)printf("0\n");else  if(p==0||n==1)printf("1\n");else{n=n%10;if(n==2||n==3||n==7||n==8){p=p%4;if(p==0) {if(n==2||n==8)printf("6\n");else  printf("1\n");}else if(p==1)  printf("%d\n",n);else if(p==2) {if(n==2||n==8)  printf("4\n");else  printf("9\n");}else if(p==3){if(n==2)  printf("8\n");else if(n==3)  printf("7\n");else if(n==7)  printf("3\n");else printf("2\n");}}else if(n==4||n==9){p=p%2;if(p==1) printf("%d\n",n);else{if(n==4) printf("6\n");else printf("1\n");}}else if(n==5||n==6) printf("%d\n",n);else if(n==0||n==1) printf("%d\n",n);}}}
