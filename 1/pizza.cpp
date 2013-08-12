#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;
int main()
{    int n;cin>>n;char s[4];int q=0,h=0,tq=0;
char half[4]="1/2",quarter[4]="1/4",tquarter[4]="3/4";
    for(int i=0;i<n;i++)
    {cin>>s;
    if(!strcmp(s,half))h++;
    else if(!strcmp(s,quarter))q++;
    else if(!strcmp(s,tquarter))tq++;
    }
    n=0;
    if(tq==q){n+=q;tq=q=0;}
    else if(tq>q){tq-=q;n+=q;q=0;}
    else if(tq<q){q-=tq;n+=tq;tq=0;}
    if(tq!=0){n+=tq;tq=0;}
    if(h%2==0){n+=(h/2);h=0;}
    else if (h%2!=0){n+=(h/2);h=1;}
    
    if(h==1)
    {
    while(h!=0 || q!=0)
    {if(q>=2)
    {q-=2;h=0;n+=1;}
     else if (q<2)
     {n+=1;q=h=0;}          
    }
    }
    if(h==0)
    {
     if(q%4==0){n+=(q/4);q=0;}
     else
     n+=((q/4)+1);
    }
    n++;
    cout<<n<<endl;
    return 0;
}
