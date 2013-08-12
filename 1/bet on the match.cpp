#include <cstdlib>
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{   int i,j=0;cin>>i;
    map<string ,int>smap;
    map<string ,int>::reverse_iterator rit;
    string winner,a,b;
    int ag=0,bg=0,k=0;
    while(j<i)
    {while(k<4)
    {cin>>a;cin>>b;cin>>ag;cin>>bg;
    if(ag>bg)
    {++smap[a];smap[b]=0;}
    else
    {++smap[b];smap[a]=0;}
    k++;              
    }j++;}
     rit = smap.rend(); rit--;
    cout << endl<<rit->first;
    system("PAUSE");
    return 0;
}
