/*
start from 2*2 block and proceed building further

*/
#include <iostream>
using namespace std;
int main () {
  int n,i,j,count=0;
  char color[100005],prev,first,second;
  scanf("%d",&n);
  scanf("%s",&color);
  for ( i=0;i<2*n;i+=2){
      first  = color[i];
      second = color[i+1];
    if ( i== 0){
           if ( 'A'!=first && 'A'!=second) {printf("A");prev='A';}  
      else if ( 'B'!=first && 'B'!=second) {printf("B");prev='B';}   
      else if ( 'C'!=first && 'C'!=second) {printf("C");prev='C';}   
      else if ( 'D'!=first && 'D'!=second) {printf("D");prev='D';}
      
           if ( 'A'!=second && 'A'!=prev && 'A'!=first) {printf("A");prev='A';}  
      else if ( 'B'!=second && 'B'!=prev && 'B'!=first) {printf("B");prev='B';}   
      else if ( 'C'!=second && 'C'!=prev && 'C'!=first) {printf("C");prev='C';}   
      else if ( 'D'!=second && 'D'!=prev && 'D'!=first) {printf("D");prev='D';}               
     }
     else {
           if ( 'A'!=first && 'A'!=second && 'A' != prev ) {printf("A");prev='A';}  
      else if ( 'B'!=first && 'B'!=second && 'B' != prev ) {printf("B");prev='B';}   
      else if ( 'C'!=first && 'C'!=second && 'C' != prev ) {printf("C");prev='C';}   
      else if ( 'D'!=first && 'D'!=second && 'D' != prev ) {printf("D");prev='D';}
      
           if ( 'A'!=second && 'A'!=prev && 'A'!=first) {printf("A");prev='A';}  
      else if ( 'B'!=second && 'B'!=prev && 'B'!=first) {printf("B");prev='B';}   
      else if ( 'C'!=second && 'C'!=prev && 'C'!=first) {printf("C");prev='C';}   
      else if ( 'D'!=second && 'D'!=prev && 'D'!=first) {printf("D");prev='D';}               
      }
    }       
  system("pause");
  }
