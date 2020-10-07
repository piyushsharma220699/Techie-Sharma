//Stack STL
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s1;

    cout<<s1.empty()<<endl;  //1

    s1.push(7);

    cout<<s1.top()<<endl;  //7
    cout<<s1.size()<<endl;  //1

    s1.push(9);

    cout<<s1.top()<<endl;  //9
    cout<<s1.size()<<endl;  //2

    s1.pop();
    
    cout<<s1.top()<<endl;  //7
    cout<<s1.size()<<endl; //1

    cout<<s1.empty()<<endl; //0
}