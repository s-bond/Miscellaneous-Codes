#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int palindrome(char *s1)
{

   int l=strlen(s1);
   for(unsigned int p=0;p<l;p++)
   {
        if(s1[p]!=s1[l-p-1])
           return 0;
   }
   return 1;
}

int next_prime(int from)
{
     bool flag=1;

   for(int i=from+1;;i++)
   {
        for(int j=i-1;j>1;j--)
      {
           if(i%j==0)
         {
              flag=0;
            break;
         }
      }
      if(flag==1)
           return i;

      flag=1;
   }
}

int main()
{   int t;
    cin>>t;
    while ( t -- > 0) {
     int no,times;
     no = 2;
   cin>>times;times--;
   char str[10];
   int p=no;
   while(times)
   {
     itoa(p,str,10);

   if(palindrome(str)==1)
   {
      times--;
   }
   p=next_prime(p);
   }
   int m,x=1;
   m=p;
   while(m!=0){
              if(m%10 != 0) x= x * (m%10); 
              m/=10;
              }
   int pp=2;x--;
   while(x) {
            itoa (pp , str , 10);
            x--;
            pp=next_prime(pp);
            }
   cout<<p<<" "<<pp<<endl;
     }
   return 0;
}
