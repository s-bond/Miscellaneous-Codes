#include <iostream>
#include <string.h>

using namespace std;
char a[1010],b[1010],ch;
int main() {
	int i, j, len;
	while(scanf("%s%s",&a,&b)!=EOF){
		int num[30]={0}, num1[30]={0};
		for(i=0;i<strlen(a);i++) num[a[i]-97]++;
		for(i=0;i<strlen(b);i++) num1[b[i]-97]++;
		for(i=0;i<26;i++){
			if(num[i] >0 && num1[i]>0){
         
				for(j=0;j< min(num[i],num1[i]);j++){
				ch = i+97;
				printf("%c",ch);}
			}
		}
		printf("\n");
	}	
}
