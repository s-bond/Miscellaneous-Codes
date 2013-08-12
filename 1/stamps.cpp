#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main ()
{
int tt,t=0;
scanf("%d",&tt);int r[tt];
while(t < tt){
          r[t]=0;
          int n, fn,ff;
          scanf("%d%d",&n,&fn);
          vector <int> f;
          int x=0,count=0;
          while(x++ < fn) {scanf("%d",&ff);f.push_back(ff);}
          sort(f.begin(),f.end());
          x=0;
          for(int i=fn-1;i>=0;i--){
                  x+=f[i];count++;
                    if(x>=n){
                             printf("Scenario #%d:\n",t+1);
                             printf("%d\n\n",count);
                             break;
                            }}
                            if(x<n)
                            printf("Scenario #%d:\nimpossible\n\n",t+1); 
                    t++;}
         return 0; 
         }
