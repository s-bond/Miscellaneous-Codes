#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int main ()
{
int n,c=2,f=0;
cin>>n;
while(n!=0)
{
  if(n==1) cout<<"0"<<endl;
  else {
       for(int i=1; ;i++){
               for(int j=1;j<=pow(2,i);j++){
                       if(c==n){
                       cout<<i<<endl;
                       f=1;
                       break;
                       }
                       else
                       c++;
                       }
                       if(f==1) break;
                       }
               
       }
               cin>>n;
               f=0;c=2;
               
}

system("pause");
return 0;
}
