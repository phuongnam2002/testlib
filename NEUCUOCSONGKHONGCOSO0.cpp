#include <iostream>
#include <string>
using namespace std;

long toNum (string s)
{
    long S = 0;
    for (int i=0; i<s.length(); i++)
    {
        int tmp = s[i] - '0';
        S = S*10 + tmp;
    }
    return S;
}

string toString (long x)
{
    string s = "";
    while (1)
    {
        char tmp = x%10 + '0';
        x /= 10;
        s = tmp + s;
        if (x==0) break;
    }
    return s;
}

string del_0 (string s)
{
    while (1)
    {
        int vt = s.length()-1;
        while (s[vt]!='0' && vt>=0) vt--;
        if (vt>=0)
            s.erase(s.begin()+vt, s.begin()+vt+1);
        else
            break;
    }
    return s;
}

int main ()
{
    string a, b;
    cin>>a>>b;
    
    long num_a = toNum (a);
    long num_b = toNum (b);
    long VT = toNum (del_0 (toString (num_a+num_b)));    //  (num_a+num_b) long -> string -> (delete 0) string -> long
    
    long num_a_not0 = toNum (del_0 (a));
    long num_b_not0 = toNum (del_0 (b));
    long VP = num_a_not0 + num_b_not0;
    
    if (VT==VP) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}
