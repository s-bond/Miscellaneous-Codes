#include <cstdlib>
#include <iostream>
using namespace std;
int main ()
{
int t; cin>>t;
while ( t -- > 0){
        unsigned long long int n,s=0;int k;
        cin>>n >> k;
        unsigned long long int a[k];
        for(int i=0;i<k;i++) a[i]=0;
        int kk=0;
        for(unsigned long long int i=1;i<=n;i++){
                              s+=i;
                              if(s <= n)
                              {
                              a[kk]+=i;
                              kk++;
                              if(kk == k)
                              kk=0;
                              }
                              else{
                                   s-=i;
                                   a[kk]+=(n-s);
                                   break;
                              }}
        for(int i=0;i<k;i++)
                     cout<<a[i]<<" ";
                  
                  cout<<endl;
                  }
    system("pause");
    
}
