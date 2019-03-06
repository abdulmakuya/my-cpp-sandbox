#include <iostream>
using namespace std;

int main(){
	int number,val;
	number = 13;
	
	int *pnt_a;
	
	pnt_a = &number;
	//cout<<"The memory adress where varibale is stored is in: "<<&number<<endl;
	
	cout<<"The value in memory adress is: "<<*pnt_a<<endl;
	
	//0x9ffe4c
	return 0;
	
	cin>>val;
}

