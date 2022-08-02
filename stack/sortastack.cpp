#include <bits/stdc++.h>
using namespace std;
void read(stack<int> &input)
{
    while(!input.empty())
    {
        cout<<input.top()<<" ";
        input.pop();
    }
}
stack<int> sort(stack<int> &input)
{
    stack<int> temp;
    while(!input.empty())
    {
        int x=input.top();
        input.pop();
        while(!temp.empty() && temp.top()>x)
        {
            input.push(temp.top());
            temp.pop();
        }
        temp.push(x);
    }
    return temp;
}
int main()
{
    stack<int> s;
    s.push(4);
    s.push(7);
    s.push(3);
    s.push(8);
    s.push(1);
     stack<int> sorted_stack=sort(s);
     read(sorted_stack);
     return 0;
}