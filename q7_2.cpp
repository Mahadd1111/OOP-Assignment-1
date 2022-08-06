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


bool CheckDifferentArrays(int **a,int **b,int **c,int nr,int nc){
int **s1=new int*[nr];
int **s2=new int*[nr];
int **s3=new int*[nr];
int **s4=new int*[nr];
int **s5=new int*[nr];
int **s6=new int*[nr];
for(int i=0;i<nr;i++){
        for(int j=0;j<nc;j++){
        s1[i]=new int[nc];
        s2[i]=new int[nc];
        s3[i]=new int[nc];
        s4[i]=new int[nc];
        s5[i]=new int[nc];
        s6[i]=new int[nc];
        }
}
//subtracting 1 and 2 and checking with 3
bool flag1=false;
bool flag2=false;
bool flag3=false;
bool flag4=false;
bool flag5=false;
bool flag6=false;
for(int i=0;i<nr;i++){
        for(int j=0;j<nc;j++){
        s1[i][j]=*(*(a+j)+i) - *(*(b+j)+i);
        }
}
flag1=equalcheckarrays(s1,c,nr,nc);

//subtracting 2 and 3 and checking with 1
for(int i=0;i<nr;i++){
        for(int j=0;j<nc;j++){
        s2[i][j]=*(*(b+j)+i) - *(*(c+j)+i);
        }
}
flag2=equalcheckarrays(s2,a,nr,nc);

//subtracting 1 and 3 and checking with 2
for(int i=0;i<nr;i++){
        for(int j=0;j<nc;j++){
        s3[i][j]=*(*(a+j)+i) - *(*(c+j)+i);
        }
}
flag3=equalcheckarrays(s3,b,nr,nc);

//subtracting 2 and 1 and checking with 3
for(int i=0;i<nr;i++){
        for(int j=0;j<nc;j++){
        s4[i][j]=*(*(b+j)+i) - *(*(a+j)+i);
        }
}
flag4=equalcheckarrays(s4,c,nr,nc);

//subtracting 3 and 2 and checking with 1
for(int i=0;i<nr;i++){
        for(int j=0;j<nc;j++){
        s5[i][j]=*(*(c+j)+i) - *(*(b+j)+i);
        }
}
flag5=equalcheckarrays(s5,a,nr,nc);
//subtracting 3 and 1 and checking with 2
for(int i=0;i<nr;i++){
        for(int j=0;j<nc;j++){
        s6[i][j]=*(*(c+j)+i) - *(*(a+j)+i);
        }
}
flag6=equalcheckarrays(s6,b,nr,nc);


if(flag1==true or flag2==true or flag3==true or flag4==true or flag5==true or flag6==true){
return true;
}
else{
return false;
}
}

