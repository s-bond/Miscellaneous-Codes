/* @
 * bond, sidhs
*/
#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <bitset>
#include <set>
#include <cmath>
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <cstdio>
/////////////////
#define GI ({int t;scanf("%d",&t);t;})
#define GL ({long long int t;scanf("%lld",&t);t;})
#define PInt(a) printf("%d\n",(a))
#define PLng(a) printf("%lld\n",(a))
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define pb(a) push_back((a))
#define Clear(a) memset((a),0,sizeof(a))
#define SV(v) sort((v).begin(),(v).end())
#define SA(a,n) sort((a),(a)+(n))
using namespace std;
typedef long long int LL;
typedef unsigned long long int ULL;
typedef vector<int> vi;
typedef vector<char> vc;
typedef map<int,int> mii;
typedef map<string,int> msi;
/////////////////
#define st s.back()
class node{public: char info;node *left,*right; node(){left=NULL;right=NULL;info=0;}};
char ch[10001];
int ans;
void pre(node *t, int c){
	if(t!=NULL){
		//cout<<t->info;
		ans = max(ans,c);
		pre(t->left,c+1);
		pre(t->right,c+1);
		}
	}
int main () {
	int i, j, k, t;
	t = GI;
	while(t--){
		scanf("%s",&ch);
		vector<node*> s;
		node *dum, *root;
		dum = new node;
		dum->info = ch[0];
		root = dum;
		s.push_back(dum);
		i = 1;
		while(ch[i]!='\0'){
			node *temp__,*temp;
			temp__ = new node;
			temp__->info = ch[i];
			if(ch[i]=='n'){				
				if(st->left==NULL){
					st->left = temp__;
					temp=temp__;
					s.pb(temp);
						}
				else{
					st->right = temp__;
					s.pop_back();
					temp=temp__;
					s.pb(temp);
					}
				}
			else{
				if(st->left==NULL)
					st->left = temp__;
				else{
					st->right=temp__;
					s.pop_back();
					}				
				}			
			i ++;
			}
		ans = 0;
		pre(root,0);
		PInt(ans);
		}	
	return 0;
}