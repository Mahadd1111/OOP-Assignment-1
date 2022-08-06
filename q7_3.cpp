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

bool CheckEqualArrays(int **a,int**b,int**c,int nr,int nc){
//checking 1 and 2
bool flag1=equalcheckarrays(a,b,nr,nc);

//checking 1 and 3
bool flag2=equalcheckarrays(a,c,nr,nc);

//checking 2 and 3
bool flag3=equalcheckarrays(b,c,nr,nc);

if(flag1==true or flag2==true or flag3==true){
return true;
}
else{
return false;
}
}
