//Mahad Ahmed 20i0426
#include <iostream>
using namespace std;

int countsearch(int *a,int search,int s){
int count=0;
if(s>=0) {
    if(a[s-1]==search){
    count++;
    return count+countsearch(a,search,s-1);
    }
    else{
     return count+countsearch(a,search,s-1);   
    }
}
else{
return count;    
}
}

void FindOccurences(int*a,int i){
int b[i]={0};
for(int j=0;j<i;j++){
b[j]=a[j];
}
a[i]={0};
for(int x=0;x<i;x++){
  a[x]=countkey(b,b[x],i);
} 
}
