#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;
int main ()
{
int t;
cin>>t;
       while (t-- > 0)
       {
       int n , k , x , y;
       cin >>n >> k;
       vector <long int> a;
       for(int i=0;i<n;i++){
               cin>>x;
               a.push_back(x);
                           }
       if(k==1) cout<< "0" <<endl;
       else
       {
       sort(a.begin(),a.end()); 
       k--;
       y = a[k] - a[0];
       for(int i=0;i<n;i++)
               if(i+k < n)
                  if(a[i+k] - a[i] < y)
                              {
                              y = a[i+k] - a[i];
                              }       
       cout<< y <<endl;
       }
       }

       return 0;

}
