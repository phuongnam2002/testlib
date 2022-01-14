#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;
struct DATA
{
    string Value;
    int TanSo = 0;
};
DATA tmp;
vector<DATA> Res;
bool cmp(DATA a, DATA b)
{
    while (a.Value.length() > b.Value.length())
        b.Value = "0" + b.Value;
    while (a.Value.length() < b.Value.length())
        a.Value = "0" + a.Value;
    return a.Value > b.Value;
}
bool isTN(string s)
{
    int i = 0, j = s.length() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}
int isExist(string tmp)
{
    for (int i = 0; i < Res.size(); i++)
        if (tmp == Res[i].Value)
            return i;
    return -1;
}
void Run()
{
    while (cin >> tmp.Value)
    {
        if (tmp.Value.length() > 1 && isTN(tmp.Value))
        {
            int tmp1 = isExist(tmp.Value);
            if (tmp1 != -1)
                Res[tmp1].TanSo++;
            else
            {
                tmp.TanSo = 1;
                Res.push_back(tmp);
            }
        }
    }
    sort(Res.begin(), Res.end(), cmp);
    for (int i = 0; i < Res.size(); i++)
    {
        cout << Res[i].Value << " " << Res[i].TanSo << endl;
    }
}
int main()
{
    Run();
    return 0;
}
