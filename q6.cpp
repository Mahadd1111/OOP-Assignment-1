//Mahad Ahmed 20i0426
#include<iostream>
using namespace std;

int EvenSum(int **a,int r, int c){
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
         if(*(*(a+j)+i)%2==0){
             sum=sum+*(*(a+j)+i);
         }
        }
    }
return sum;    
}

int OddSum(int **a,int r, int c){
    int sum2=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
         if(*(*(a+j)+i)%2!=0){
             sum2=sum2+*(*(a+j)+i);
         }
        }
    }
return sum2;    
}
