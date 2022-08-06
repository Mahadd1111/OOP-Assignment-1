//Mahad Ahmed 20i0426
#include<iostream>
#include<string>
#include<cstring>
#include<string.h>
using namespace std;

bool CheckSubSequence(char*str1,char*str2,int i,int j){
if(strlen(str1)==strlen(str2)){
return true;
}
if(i==0){
return false;
}
if(j==0){
return true;
}
if((str1[i-1])==(str2[j-1])){
return CheckSubSequence(str1,str2,i-1,j-1);
}

return CheckSubSequence(str1,str2,i-1,j);
}
