#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main () {
         char s[500000];
         int count = 0;
         bool flag = true;
         while (cin.getline ( s,500000)){
         for ( int i=0;i<strlen(s);i++ ){
                   
                   if (( s[i] >= 'A' && s[i] <= 'Z') || ( s[i] >='a' && s[i] <='z' ) ){
                             //cout << "real " << endl;
                             if ( flag )
                             {count ++;
                             flag = false;}
                             }
                   else if ( ( s[i] < 'A' || s[i] > 'z' ) || ( s[i] >='[' && s[i] <= '`' ) ){
                             //cout << "extra " << endl;
                             if ( !flag ){ flag = true;}
                             }
                   }
         cout << count << endl;
         count =0;
         flag = true;
         
         }
         }
