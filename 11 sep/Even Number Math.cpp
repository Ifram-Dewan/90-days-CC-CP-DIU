#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    cin >> w;


    if(w % 2 == 1){
        cout << "No" << endl;
    }
    else{
        if(w == 2)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}
