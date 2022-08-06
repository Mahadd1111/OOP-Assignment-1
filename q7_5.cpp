//Mahad Ahmed 20i0426
#include<iostream>
using namespace std;

void RotateArrays(int **a,int **b,int **c, int n,int n2,int n3){
for(int i=0;i<n/2;i++) {
        for(int j=i;j<n-i-1;j++){
            int temp = a[i][j];
            a[i][j] = a[n-1-j][i];
            a[n-1-j][i] = a[n-1-i][n-1-j];
            a[n-1-i][n-1-j] = a[j][n-1-i];
            a[j][n-1-i] = temp;
        }
    }
    
for(int i=0;i<n2/2;i++) {
        for(int j=i;j<n2-i-1;j++){
            int temp = b[i][j];
            b[i][j] = b[n2-1-j][i];
            b[n2-1-j][i] = b[n2-1-i][n2-1-j];
            b[n2-1-i][n2-1-j] = b[j][n2-1-i];
            b[j][n2-1-i] = temp;
        }
    }
    
for(int i=0;i<n3/2;i++) {
        for(int j=i;j<n3-i-1;j++){
            int temp = c[i][j];
            c[i][j] = c[n3-1-j][i];
            c[n3-1-j][i] = c[n3-1-i][n3-1-j];
            c[n3-1-i][n3-1-j] = c[j][n3-1-i];
            c[j][n3-1-i] = temp;
        }
}


}
