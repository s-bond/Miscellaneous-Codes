#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{ 
    int i=0,x=0;
    int s[10];
    while(i++<10)
    {
     int m;
     scanf("%d",&m);
     x=x+m;
     s[i]=x;   
    }
    i=0;x=0;
    while(i++<10)
    {
     if(s[i]==100)
        {x=100;break;} 
       else if (s[i]>100)
          {
          if(100-x>=s[i]-100)
          {x=s[i];break;}}
            else if(s[i]<100)
                x=s[i];
                else if(x<100 && s[i]>100)// (* CASE )COMPARE B/W 99 AND 102
                  {x=s[i];break;}
    }
       cout<<x<<endl;
return 0;
}
