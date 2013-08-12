#include <iostream>
#include <algorithm>
using namespace std;
int a[100001],b[100001];
int main () {
	int n, k, i, j, num, count=0, count1=0,ans;
	scanf("%d%d",&n,&k);
	i = 0;
	
	while(i<n) {scanf("%d%d",&a[i],&b[i]);i++;}
	sort ( a,a+n);
	sort ( b,b+n);
	i=0;
	while(i<k) {	
	   scanf("%d",&num);
		
	   if ( num > b[n-1] ) count = 0;
	   else if ( num <= b[0] ) count = n;
	   else{
	   for ( j=n-1;j>=0;j-- )
	   {
	   if ( num <= b[j] ) count ++;
	   else
	   break;
	   }}
	   if ( !count ){
	   for ( j=n-1;j>=0;j-- )
	   {
	   if ( num < a[j] ) count1 ++;
	   else 
	   break;
	   }}
	   
	   ans = count - count1;
	   printf("%d\n",ans);
	   count = count1 = 0;
	   i++;
	   }	
	return 0;
  }

