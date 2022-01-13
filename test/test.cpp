#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;


template<class T> class MyStack
{
public:
    MyStack(){};
    virtual void Push(const T& x) = 0;
    
};



int main(){
    cout<<"hello world"<<endl;
    return 0;
}