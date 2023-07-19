#include<iostream>
using namespace std;
int main(){

int i=5;
int *p=&i;
int **p2=&p;
 
cout<<endl<<"All going good !"<<endl;
cout<<"Printing p: "<<p<<endl;
cout<<"Adress of p"<<&p<<endl;

cout<<*p2<<endl;
cout<<i<<endl;
cout<<*p<<endl;
cout<<**p2<<endl;


cout<<&i<<endl;
cout<<p<<endl;
cout<<*p2<<endl;


 

return 0;

}