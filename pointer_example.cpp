#include <iostream>
using namespace std;

int main(){
    int var = 10;

    int *pointer;
    pointer = &var;
    //cout<<"The memory location of the variable is:"<< &var <<endl;

    cout<<"The stored value is :"<< *pointer <<endl;

}
