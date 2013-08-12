#include<iostream>
using namespace std;
#include<string>
int main()
      int in;
      cin>>in;
      while(in--)
      {
      char tea[18][4];
      int win[18]={0},f1=0,f2=0,j,k=0,i,g1,g2;
      for(i=1;i<=16;i++)
      {char t1[4],t2[4];
f1=0;
                     f2=0;
                     cin>>t1>>t2;
                     cin>>g1>>g2;           
                     for(j=1;j<=k;j++)
                     { if(!(strcmp(tea[j],t1)))
                       f1=j;
                       if((!strcmp(tea[j],t2)))
                       f2=j;
                       if(f1!=0 && f2!=0)
                       break;
                     }
if(f1!=0)
{
if(g1>g2)
win[f1]++;
}
if(f1==0)
{
strcpy(tea[++k],t1);
if(g1>g2)
win[k]=1;
}
if(f2!=0) 
{
if(g2>g1)
win[f2]++;
}
if(f2==0)
{
strcpy(tea[++k],t2); if(g2>g1)
win[k]=1;
}
}
for(i=1;i<=16;i++)
if(win[i]==4) {
cout<<"\n"<<tea[i]<<"\n";
break;
}

}
return 0;
}
