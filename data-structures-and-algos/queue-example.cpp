#include <iostream>
using namespace std;
#include <queue>

int main(){
    queue <char> myQueue;
    int i = 0;
    char element = 'a';

    if (myQueue.empty() == true){
        cout<<"Queue is empty "<<endl;
    }

    else
        cout<<"Queue is not empty "<<endl;

    for (i; i <= 2; i++){
        myQueue.push(element);
        cout<<"element "<<element<<" pushed in"<<endl;
        element++;
    }

    cout<<"size of Queue is "<<myQueue.size()<<endl;

    cout<<"front element is "<<myQueue.front()<<endl;
    cout<<"back element is "<<myQueue.back()<<endl;



    if (myQueue.empty() != true){
        cout<<"This queue is not empty,you can pop"<<endl;
        myQueue.pop();
    }


    //queue stats after popping
    cout<<"front element is "<<myQueue.front()<<endl;
    cout<<"back element is "<<myQueue.back()<<endl;

    cout<<"size of Queue is "<<myQueue.size()<<endl;

}
