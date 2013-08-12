#include <iostream>
#include <fstream>
using namespace std;
int main () {
	ofstream sfout;
	sfout.open("sid.txt");
	bool flag[550];
	int i, j, count, num, p;
	for ( num=2;num<=500;num++ ){
		p = num;
		count = 0;
		for (i=2;i<=num;i++)flag[i]=true;
		while ( p!=2){
			if ( flag[p] ){
			for ( i=2;i<=p/2;i++){
				if ( p%i == 0 ) flag[i]=false;
			}}
		    p --;
		}		
	for ( i=2;i<=num;i++ )
		if ( flag[i] ) count++;
	
	sfout << count << ", ";
	}
	sfout.close();
	return 0;
}
