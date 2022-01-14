#include <iostream>
using namespace std;

long giaithua (int a)
{
    long t=1;
    for (int i=1; i<=a; i++) t*=i;
    return t;
}

int main ()
{
    //IN;
    int t;
    cin>>t;
    string n;
    for (int i=1; i<=t; i++)
    {
        cin>>n;
        //OUT;
        int len = n.length();
        long long S=0;
        for (int i=len-1; i>=0; i--)
        {
            int so = n[i]-'0';
            S+=(so*giaithua(len-i));
        }
        cout<<S<<endl;
    }
    return 0;
}
