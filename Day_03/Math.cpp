#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a,b,c;
        cin >> a >> b >> c;
        long long x;
        if(c == 0)
        {
            if(a == b)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
            continue;
        }
        else{
            long long aa = max (a,b);
            long long bb = min (a,b);
            c++;
            x = bb*c;
            if(x>=aa)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }

    }



    return 0;
}
