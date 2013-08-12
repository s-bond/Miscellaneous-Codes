#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main ()
{
int t;
cin >> t;
 while ( t-- > 0){
       string s;
       cin >> s;
       int q;
       cin >> q;
       int i,j,count=0,l;
             string c,h;
       while ( q-- > 0){
             
             cin >>c;
             if ( c[0] == 'Q')
                 {
                  cin >> i >> j;
                  i--;j--;
                  while ( s[i] != '\0' && s[j] != '\0'){
                        if ( s[i++] == s[j++]) count++;
                        else break;
                        }
                        cout << count << endl;
                        count = 0;
                  }
                  
             else if ( c[0] == 'R'){
                  
                  cin >> i >> h;
                  i--;
                  s[i] = h[0];
                  }
             
             else if ( c[0] == 'I'){
                  cin >> i >> h;
                  
                  s.insert(i,h);
                                   // ** mistake point -- string has to be shifted !!!
                  }
             }
             
       }  
    system ("pause");
    return 0;
}
