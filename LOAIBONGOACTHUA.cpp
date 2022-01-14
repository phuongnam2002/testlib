#include <iostream>
#include <stack>
using namespace std;

string deleteSpace (string x)   //a+ b -> a+b
{
    string rs = "";
    for (int i=0; i<x.length(); i++)
        if (x[i]!=' ')
            rs+=x[i];
    return rs;
}

string delete_1 (string x)  //delete string like (a)->a || ((a+b))->(a+b)
{
    stack <char> s;
    stack <int> index;
    int dele[300] = {0};
    for (int i=0; i<x.length(); i++)
    {
        if (x[i]==')')
        {
            int flag = 0;
            while (s.top()!='(')
            {
                char top = s.top();
                if (top=='+' || top=='-')
                    flag = 1;
                s.pop();
                index.pop();
            }
            if (flag == 0)
            {
                dele[index.top()] = 1;
                dele[i] = 1;
            }
            s.pop();
            index.pop();
        }
        else
        {
            s.push(x[i]);
            index.push(i);
        }
    }
    string rs = "";
    for (int i=0; i<x.length(); i++)
    {
        if (dele[i]==0)
            rs+=x[i];
    }
    return rs;
}

string delete_2 (string x)  //delete string like ((a+b)+c)->(a+b+c) || (a+(b-c))->(a+b-c)
{
    stack <char> s;
    stack <int> index;
    int dele[300] = {0};
    for (int i=x.length()-1; i>=0; i--)
    {
        if (x[i]=='(')
        {
            int flag = 1;
            if (i==0 || x[i-1]!='-')
                flag = 0;
            while (s.top()!=')')
            {
                s.pop();
                index.pop();
            }
            if (flag == 0)
            {
                dele[index.top()] = 1;
                dele[i] = 1;
            }
            s.pop();
            index.pop();
        }
        else
        {
            s.push(x[i]);
            index.push(i);
        }
    }
    string rs="";
    for (int i=0; i<x.length(); i++)
    {
        if (dele[i]==0)
            rs+=x[i];
    }
    return rs;
}

int main ()
{
    string str = "";
    int n;
    cin>>n;
    cin.ignore();
    while (1)
    {
        if (n==0) break;
        n--;
        getline(cin, str);
        string str_no_space = deleteSpace(str);
        string str_1 = delete_1(str_no_space);
        string str_2 = delete_2(str_1);
        cout<<str_2<<endl;
    }
    return 0;
}
