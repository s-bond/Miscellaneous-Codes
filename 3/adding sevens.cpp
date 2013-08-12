// 9 = 107 !!??

#include <iostream>
#include <string>
//#include <fstream>
using namespace std;
int main () {
  //ifstream sfin;
  //sfin.open("seven.txt");
  char c[65],res[][4]={"063","010","093","079","106","103","119","011","127","107"};
  string s1,s2;
  int a, b, d, sum, i, j, p[11];
  scanf("%s",&c);
  //sfin >> c;
  while( c[0]!='B'){
   i = a = b = 0;
   s1.clear();s2.clear();
     while ( c[i] != '+' ){
      s1 += c[i];
      s1 += c[i+1];
      s1 += c[i+2];
      if ( c[i] == '0' && c[i+1] == '6' && c[i+2] == '3' ) d = 0;
      else if ( c[i] == '0' && c[i+1] == '1' && c[i+2] == '0' ) d =1 ;
      else if ( c[i] == '0' && c[i+1] == '9' && c[i+2] == '3' ) d = 2;
      else if ( c[i] == '0' && c[i+1] == '7' && c[i+2] == '9' ) d = 3;
      else if ( c[i] == '1' && c[i+1] == '0' && c[i+2] == '6' ) d = 4;
      else if ( c[i] == '1' && c[i+1] == '0' && c[i+2] == '3' ) d = 5;
      else if ( c[i] == '1' && c[i+1] == '1' && c[i+2] == '9' ) d = 6;
      else if ( c[i] == '0' && c[i+1] == '1' && c[i+2] == '1' ) d = 7;
      else if ( c[i] == '1' && c[i+1] == '2' && c[i+2] == '7' ) d = 8;
      else if ( c[i] == '1' && c[i+1] == '0' && c[i+2] == '7' ) d = 9;
      a = a*10 + d;
      i+=3;
     }
     i ++;
     while ( c[i] != '=' ){
      s2 += c[i];
      s2 += c[i+1];
      s2 += c[i+2];
      if ( c[i] == '0' && c[i+1] == '6' && c[i+2] == '3' ) d = 0;
      else if ( c[i] == '0' && c[i+1] == '1' && c[i+2] == '0' ) d =1 ;
      else if ( c[i] == '0' && c[i+1] == '9' && c[i+2] == '3' ) d = 2;
      else if ( c[i] == '0' && c[i+1] == '7' && c[i+2] == '9' ) d = 3;
      else if ( c[i] == '1' && c[i+1] == '0' && c[i+2] == '6' ) d = 4;
      else if ( c[i] == '1' && c[i+1] == '0' && c[i+2] == '3' ) d = 5;
      else if ( c[i] == '1' && c[i+1] == '1' && c[i+2] == '9' ) d = 6;
      else if ( c[i] == '0' && c[i+1] == '1' && c[i+2] == '1' ) d = 7;
      else if ( c[i] == '1' && c[i+1] == '2' && c[i+2] == '7' ) d = 8;
      else if ( c[i] == '1' && c[i+1] == '0' && c[i+2] == '7' ) d = 9;
      b = b*10 + d;
      i+=3; 
     }
   sum = a + b;
   i   = 0;
   do { p[i++]=sum%10;sum/=10;}while(sum);
   cout << s1<<"+"<<s2<<"=";
   for ( j=i-1;j>=0;j--) printf("%s",res[p[j]]);
   printf("\n");
   scanf("%s",&c);
   //system("pause");
  // sfin >> c;
   }     
   return 0;    
  }
