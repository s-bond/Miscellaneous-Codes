#include <iostream>
#include <string>
using namespace std;
int main ()
{int t;cin>>t;while( t-- > 0){string s; long long int n,p;cin>>s>>p;n=s[s.length()-1]-48;if(n==0 && p!=0)cout<<"0\n";else  if(p==0||n==1)cout<<"1\n";else{n=n%10;if(n==2||n==3||n==7||n==8){p=p%4;if(p==0) {if(n==2||n==8)cout<<"6\n";else cout<<"1\n";}else if(p==1)printf("%d\n",n);else if(p==2){if(n==2||n==8) cout<<"4\n";else cout<<"9\n";}else if(p==3){if(n==2)cout<<"8\n";else if(n==3)cout<<"7\n";else if(n==7)cout<<"3\n";else cout<<"2\n";}}else if(n==4||n==9){p=p%2;if(p==1)printf("%d\n",n);else{if(n==4)printf("6\n");else printf("1\n");}}else if(n==5||n==6)printf("%d\n",n);else if(n==0||n==1)printf("%d\n",n);}}}
