#include <iostream>
#include <string>
using namespace std;
int main ()
{
    //IN;
    string A, B;
    int case_i=0;
    while (1)
    {
        cin>>A>>B;
        if (A=="END" && B=="END") break;
        case_i++;
        //OUT;
        int arrA[128], arrB[128];
        for (int i=32; i<=126; i++)
        {
            arrA[i]=0;
            arrB[i]=0;
        }
        int lenA=A.length();
        int lenB=B.length();
        for (int i=0; i<lenA; i++)
        {
            int cs=A[i]-0;
            arrA[cs]++;
        }
        for (int i=0; i<lenB; i++)
        {
            int cs=B[i]-0;
            arrB[cs]++;
        }
        int kt=1;
        for (int i=97; i<=122; i++)
        {
            if (arrA[i]!=arrB[i])
            {
                kt=0;
                break;
            }
        }
        if (kt==1) cout<<"Case "<<case_i<<": same"<<endl;
        else cout<<"Case "<<case_i<<": different"<<endl;
    }

    return 0;
}

