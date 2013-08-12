#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
		vector<int>a;
		map<int,int>smap;
int main(){
	int i, n, t, j, x, nn, z;
	char ch[20];
	scanf("%d",&t);
	while ( t-- ){
		nn=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
		scanf("%s",&ch);
		z = x = 0;
		while(ch[z]!='\0') {x = x*10 + (ch[z]-48);z++;}
        if(x!=1)
        {if(smap[x]!=1)
        {smap[x]=1;a.push_back(x);nn++;}}        
        else if(x==1){a.push_back(x);nn++;}}
		//cout << nn << endl;
        sort(a.begin(),a.end());
		if(nn==2) {
        if(a[0]==1) printf("%d %d\n",a[0],a[1]);
        else if( a[0]==2 && a[1]==3 )
        printf("%d %d\n",a[0],a[1]);
		else
		printf("%d %d\n",a[1],a[0]);
		}
		else{   		
		j = 0;
		while(a[j]==1) {if(j<nn-1)printf("1 ");else printf("1");j++;}
		if(j==nn) {cout<<"\n";}
		else{
		if(nn-j==2){ 
		if( a[j]==2 && a[j+1]==3 )
		printf("%d %d\n",a[j],a[j+1]);
		else
		printf("%d %d\n",a[j+1],a[j]);
		}
		else{
		for(i=nn-1;i>=j;i--)if(i!=j)printf("%d ",a[i]);
		else printf("%d\n",a[i]);}}}
		a.clear();smap.clear();
		
        }
}




