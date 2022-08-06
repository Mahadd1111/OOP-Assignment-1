//Mahad Ahmed 20i0426
#include <iostream>
#include <string>
using namespace std;


int countrows(int **a,int r,int c){
if(c<0){
return 0;    
}
else{
    if(a[r][c]>a[c][r] and r<c){
    return 1+countrows(a,r,c-1);
    }
    else{
    return 0+ countrows(a,r,c-1);   
    }    
}
}

int Count_Inversion(int **a,int r, int c){
int sum=0;
if(r<=0){
return 0;
}
else{
sum=countrows(a,r-1,c-1);
return sum+Count_Inversion(a,r-1,c);
}
return sum;
}

