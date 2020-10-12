//Sort a stack using Recursion
#include<bits/stdc++.h>
using namespace std;

int put_sorted(stack<int>& s1, int k)
{
    if(s1.empty() || s1.top()>k)
    {
        s1.push(k);
        return 0;
    }

    int temp=s1.top();
    s1.pop();
    put_sorted(s1, k);
    
    s1.push(temp);

    return 0;
}

int sort_stack(stack<int>& s1)
{
    if(s1.empty())
        return 0;

    int temp=s1.top();
    s1.pop();

    sort_stack(s1);

    put_sorted(s1,temp);

    return 0;
}

int printthestack(stack<int>& s1)
{
    if(s1.empty())
        return -1;

    cout<<s1.top()<<" ";
    int temp=s1.top();
    s1.pop();

    printthestack(s1);
    s1.push(temp);

    return 0;
}

int main()
{
    stack<int> s1;
    s1.push(9);
    s1.push(0);
    s1.push(3);
    s1.push(7);
    s1.push(1);

    cout<<"Stack before sorting operation: ";
    printthestack(s1);
    cout<<endl;

    sort_stack(s1);
    cout<<"Sorting operation Applied"<<endl;

    cout<<"Stack after sorting operation: ";
    printthestack(s1);
    cout<<endl;

    return 0;
}