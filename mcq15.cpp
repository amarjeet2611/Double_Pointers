#include<iostream>
using namespace std;
  void update(int *p){
        int a = 70;
        p = &a;
        *p = (*p) * (*p);
    }

    int main(){
        int a = 70;
        square(&a);
        cout << a << endl;
    }
