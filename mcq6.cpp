#include<iostream>
using namespace std;
int main(){
float first=12.5;
float p=21.5;
float *ptr=&first;
(*ptr)++;
*ptr=p;
cout<<*ptr<<" "<<first<<" "<<p<<endl;
return 0;

}