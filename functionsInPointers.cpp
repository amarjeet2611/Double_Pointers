#include<iostream>
using namespace std;
void update(int **p2){
   // p2=p2+1;
    //kuch chnage hoga? - NO

    //*p2=*p2+1;
    //kuch change hoga ?-YES P HOGA
    **p2=**p2+1;
    //kuch change hua?? -YES I CHANGE HOGA
}

 int main(){

int i=5;
int *p=&i;
int **p2=&p;
 
cout<<"Before: "<<i<<endl;
cout<<"before: "<<p<<endl;
cout<<"before: "<<p2<<endl;
update(p2);
cout<<"after: "<<i<<endl;
cout<<"after: "<<p<<endl;
cout<<"after: "<<p2<<endl;
 cout<<endl<<endl;

return 0;

}