//Mahad Ahmed 20i0426
#include<iostream>
using namespace std;

void function2(int a[],int x,int n1,int n2){
if(n2<0){
return;
}
if(n2==0){
        for(int i=0;i<x;i++){
        cout<<a[i]<<"\t";
        }
        cout<<endl;
        return;
}
int last;
if(x==0){
last=1;
}
else{
last=a[x-1];
}
for(int j=last;j<=n1;j++){
a[x]=j;
function2(a,x+1,n1,n2-j);
}

} 

void printpattern(int &n){
int a[n];
function2(a,0,n,n);
return;
}

int main(){
cout<<"Enter Number: ";
int n;
cin>>n;
cout<<endl;
printpattern(n);
return 0;
}
