#include <cstdlib>
#include <iostream>
using namespace std;
void merge (int *, int , int , int );
void merges (int a[],int first , int last)
{
 int mid;
 if(first < last-1 )
{ mid =(first + last )/2;
 merges (a, first , mid );
 merges (a, mid, last);
 merge  (a, first, mid, last);
}    
}
void merge (int a[], int first , int mid, int last)
{
  int i,j,k;
  i=first;
  j=mid;
  k=0;
  int *save;
  save = new int[last-first];
  while (i<mid && j<last){
  if(a[i]<a[j])
  save[k++]=a[i++];
  else
  save[k++]=a[j++];      
  }
  
  while(i<mid)
   save[k++]=a[i++];           
   
  while (j<last)
   save[k++]=a[j++];  
   
for (i=0;i<(last-first);i++)
a[first+i]=save[i];

delete (save);
}
void mergesort(int a[],int n)
{merges (a,0,n);}
int main()
{   int t;cin>>t;int i=0;int z[t];
    while(i<t)
    {int n;cin>>n;int a[n],b[n];
    for(int j=0;j<n;j++)
    cin>>a[j];  
    for(int j=0;j<n;j++)
    cin>>b[j];  
    mergesort(a,n);mergesort(b,n);z[i]=0;
    for(int j=0;j<n;j++)
    z[i]=z[i]+a[j]*b[j];    
    i++;
    }
    for(int i=0;i<t;i++)
    cout<<z[i]<<endl;
    system("PAUSE");
    return 0;
}
