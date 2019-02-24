#include <iostream>
using namespace std;
#include <stack>


int main(){
 stack <char> myStack;
 int i = 0;
 char element = 'a';

 if (myStack.empty() == true){
    cout<<"Stack is empty"<<endl;
 }
 else
    cout<<"Stack is not empty"<<endl;

 for (i; i<=2; i++){
        myStack.push(element);
        cout<<"element "<<element<<"pushed"<<endl;
        element++;
     }

 cout<<"size of stack "<<myStack.size()<<endl;

 //Removing elements from my stack

 if (myStack.empty() != true){
    cout<<"top element is "<<myStack.top()<<endl;
    myStack.pop();
    cout<<"Element is now poped out"<<endl;

    cout<<"current size of stack "<<myStack.size()<<endl;
 }
}
