//Mahad Ahmed 20i0426
#include <iostream>
using namespace std;

bool equalcheckarrays(int **a,int**b,int r,int c){
for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        if(*(*(a+j)+i)!=*(*(b+j)+i)){
        return false;
        }
        }
}
return true;
}

bool CheckEqualSumArrays(int **a,int **b,int **c,int nr,int nc){
int **s1=new int*[nr];
int **s2=new int*[nr];
int **s3=new int*[nr];
for(int i=0;i<nr;i++){
        for(int j=0;j<nc;j++){
        s1[i]=new int[nc];
        s2[i]=new int[nc];
        s3[i]=new int[nc];
        }
}
//adding 1 and 2 and checking with 3
bool flag1=false;
bool flag2=false;
bool flag3=false;
for(int i=0;i<nr;i++){
        for(int j=0;j<nc;j++){
        s1[i][j]=*(*(a+j)+i) + *(*(b+j)+i);
        }
}
flag1=equalcheckarrays(s1,c,nr,nc);

//adding 2 and 3 and checking with 1
for(int i=0;i<nr;i++){
        for(int j=0;j<nc;j++){
        s2[i][j]=*(*(c+j)+i) + *(*(b+j)+i);
        }
}
flag2=equalcheckarrays(s2,a,nr,nc);

//adding 1 and 3 and checking with 2
for(int i=0;i<nr;i++){
        for(int j=0;j<nc;j++){
        s3[i][j]=*(*(c+j)+i) + *(*(a+j)+i);
        }
}
flag3=equalcheckarrays(s3,b,nr,nc);

if(flag1==true or flag2==true or flag3==true){
return true;
}
else{
return false;
}
}


