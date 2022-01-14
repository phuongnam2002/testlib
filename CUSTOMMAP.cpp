#include <iostream>
#include <queue>
using namespace std;

int main ()
{
    int n;
    string total = "";
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        string tmp;
        cin>>tmp;
        total+=(tmp + " ");
    }
    /*input:
    3
    a
    bv
    gva
    -> total = "a bv gva"
    */
    string base = "abcdefghijklmnopqrstuvwxyz";
    string u = "";
    queue <string> q;
    q.push(u);
    while (!q.empty())
    {
        string f = q.front();
        q.pop();
        for (int i=0; i<base.length(); i++)
        {
            string v = f+base[i];      //each v we have: a, b, c ..., z, aa, ab, ..., zz, ... aaa, ... 
            q.push(v);
            if (total.find(v)==-1)
            {
                cout<<v;
                return 0;
            }
        }
    }
    return 0;
}
