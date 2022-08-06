//Mahad Ahmed 20i0426
#include<iostream>
using namespace std;

bool checkequalrows(int **a,int r1,int r2,int c){
        for(int j=0;j<c;j++){
        if(*(*(a+j)+r1)!=*(*(a+j)+r2)){
        return false;
        }
        }
return true;
}

int findsamerowsa1(int **a,int nr ,int nc){
//for Array1
bool flag1; 
int count=0;
for(int i=0;i<nr;i++){
flag1=checkequalrows(a,i,i+1,nc);
if(flag1==true){
count++;
}
}
return count;
}

int findsamerowsa2(int **a,int nr ,int nc){
//for Array2
bool flag1; 
int count=0;
for(int i=0;i<nr;i++){
flag1=checkequalrows(a,i,i+1,nc);
if(flag1==true){
count++;
}
}
return count;
}

int findsamerowsa3(int **a,int nr ,int nc){
//for Array3
bool flag1; 
int count=0;
for(int i=0;i<nr;i++){
flag1=checkequalrows(a,i,i+1,nc);
if(flag1==true){
count++;
}
}
return count;
}

int FindSameRows(int **a,int **b, int **c, int nr, int nc){
int n1=findsamerowsa1(a,nr,nc) * 2;
int n2=findsamerowsa2(b,nr,nc) * 2;
int n3=findsamerowsa3(c,nr,nc) * 2;
return n1+n2+n3;
}
