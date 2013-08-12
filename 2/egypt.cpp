#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main ()
{
 vector < unsigned int > v;
 unsigned int a;
 int i=0;
 while ( i < 3) {cin >> a; v.push_back(a);i++;}
 while ( v[0] != 0){
        sort ( v.begin(),v.end());
        v[0]    = v[0] *v[0] ;
        v[1]    = v[1] *v[1] ;
        v[2]    = v[2] *v[2] ;
        if ( v[0]+v[1] == v[2])
        cout << "right" << endl;
        else 
        cout << "wrong" <<endl;
        i=0;v.clear();
        while ( i < 3) {cin >> a;v.push_back(a);i++;} 
        }
 return 0; 
}
