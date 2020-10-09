// Valid Parenthesis Code from scratch
#include<bits/stdc++.h>
using namespace std;

bool valid_parenthesis(string str)
{
    stack<char> s1;

    for(int i=0; i<str.size(); i++)
    {
        if(s1.empty() && (str[i]==']' || str[i]=='}' || str[i]==')'))
            return false;

        else if(str[i]==']')
        {
            if(s1.top()=='[')
                s1.pop();
            
            else
                return false;
        }
        
        else if(str[i]=='}')
        {
            if(s1.top()=='{')
                s1.pop();
            
            else
                return false;
        }

        else if(str[i]==')')
        {
            if(s1.top()=='(')
                s1.pop();
            
            else
                return false;
        }

        else
            s1.push(str[i]);
        
    }

    if(!s1.empty())
        return false;
    
    return true;
}

int main()
{
    string s1 = "[[{}()(())]]";

    if(valid_parenthesis(s1))
        cout<<"Yes, the parenthesis are valid!";
    else
        cout<<"Parenthesis are NOT valid!";
    
    return 0;
}