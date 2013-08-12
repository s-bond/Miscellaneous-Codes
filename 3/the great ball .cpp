#include <iostream>
#include <algorithm>
using namespace std;
class ball {public:int in, out;};
bool sid (const ball &a, const ball &b){ return a.in < b.in ;}
int main () {
 ball b[101];
 int t, n, sum, i, j, count, k, p, f[101] = {0}, z;
 bool flag;
 scanf("%d",&t);
 while ( t-- ){
   scanf("%d",&n);
   for ( i=0;i<n;i++ ) {scanf("%d%d",&b[i].in,&b[i].out); f[i]=0;}
   sort ( b,b+n,sid);
   sum = 0;
   for ( i=0;i<n;i++ ){
    count = 0;
    for ( j=0;j<n;j++)
    if ( b[j].in <= b[i].out ) count++; else break;
    for (z=0;z<j;z++) f[z]=0;
    for ( k=0;k<j;k++){
    for ( p=0;p<j;p++){
    //cout << b[k].in << "  " << b[p].out << endl;
    if ( b[p].in > b[k].out && f[k]==0){count--;f[k]=1;}}}
    sum = sum > count ? sum : count;
    //cout << endl<<count<<endl;
    }
   printf("%d\n",sum); 
   }        
 return 0;
 }
