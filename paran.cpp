#include<iostream>
#include<stack>
using namespace std;
char Brackets_Balance(string str)
{
    stack<char> s;
    char x;


    for (int i=0; i<str.length(); i++)
    {
        if (str[i]=='('||str[i]=='['||str[i]=='{')
        {
            s.push(str[i]);
            continue;
        }
        if (s.empty())
        return false;

        switch (str[i])
        {
        case ')':
            x = s.top();
            s.pop();
            if (x=='{' || x=='[')
            return false;
            break;

        case '}':
            x = s.top();
            s.pop();
            if (x=='(' || x=='[')
            return false;
            break;

        case ']':
            x = s.top();
            s.pop();
            if (x =='(' || x == '{')
            return false;
            break;
        }
    }


    return (s.empty());
}


int main()
{
char str[100];
cout << "Enter a expression: ";
cin >> str;
if (Brackets_Balance(str))
    cout << "Balanced";
else
    cout << "Not Balanced";
return 0;
}
