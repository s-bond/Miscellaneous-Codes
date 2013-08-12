#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main() {
   int t, num,par_sum=0; 
   unsigned long long int sum = 0;
   map<int, int> smap;
   scanf("%d", &t);
   for ( int i=0; i<t; i++ ) {
      scanf("%d",&num);
      par_sum = 0;
      map<int, int>::iterator its = smap.lower_bound( num );
      if ( its != smap.end()   )
      par_sum = max(par_sum, its -> second+1);
      if ( its != smap.begin() )
      par_sum = max(par_sum, (--its)->second+1);
      smap[num] = par_sum;
      sum = sum + par_sum;
      printf("%llu\n", sum);
   }
   
   return 0;
}
