#include <iostream>
using namespace std;int main(){int i=0,j=0,s=1;char c[21],a;while(i<10){cin>>c;while(c[j]!='\0'){a=c[j];if(a=='T'||a=='D'||a=='L'||a=='F')s*=2;j++;}cout<<s<<endl;s=1;j=0;i++;}return 0;}
