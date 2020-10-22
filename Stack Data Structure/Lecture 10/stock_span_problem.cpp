//Stock Span Problem Code From
#include<bits/stdc++.h>
using namespace std;

vector<int> stockSpanProblem(vector<int>& v1)
{
    stack<pair<int,int>> s1;
    vector<int> answer;

    for(int i=0; i<v1.size(); i++)
    {
        int temp;
        if(s1.empty())
            temp=1;
        
        else if(s1.top().first>v1[i])
            temp=1;
        
        else if(s1.top().first<=v1[i])
        {
            while(!s1.empty() && s1.top().first<=v1[i])
                s1.pop();
            
            if(s1.empty())
                temp=i+1;
            else
                temp=i-s1.top().second;
            
        }

        answer.push_back(temp);
        s1.push({v1[i],i});
    }

    return answer;
}

int main()
{
    vector<int> v1{100, 80, 60, 70, 60, 75, 85};

    cout<<"Printing the elements of vector:";
    for(int i=0; i<v1.size(); i++)
        cout<<" "<<v1[i];
    cout<<endl;

    vector<int> v2;
    v2=stockSpanProblem(v1);

    cout<<"Printing Span of Every Element: ";
    for(int i=0; i<v2.size(); i++)
        cout<<v2[i]<<" ";

    return 0;
}