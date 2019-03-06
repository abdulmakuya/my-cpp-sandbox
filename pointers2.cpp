#include <iostream>
using namespace std;

int main(){
    int number = 15;
    int *pointer;

    pointer = &number;

    cout<<"The number stored in adress is:" <<*pointer<<endl;
    return 0;
}
