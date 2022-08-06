//Mahad Ahmed 20i0426
#include <iostream>
#include <string>
using namespace std;

void ChangeLocation(char*array,int b1,int b2){
if(b1==0 and b2==0){
return;   
}
else{
char temp;
temp=array[b1-1];
array[b1-1]=array[b2-1];
array[b2-1]=temp;
ChangeLocation(array,0,0);
}
}
