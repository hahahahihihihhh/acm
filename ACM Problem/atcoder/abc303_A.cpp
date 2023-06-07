//
// Created by 86159 on 2023/6/2.
//

#include <bits/stdc++.h>

using namespace std;

inline void solve()
{
    int n;  cin >> n;
    string s, t;    cin >> s >> t;
    for (int i = 0; i < n; i ++){
//        char a = s[i], b = t[i];
        if (s[i] == '1' || s[i] == 'l')    s[i] = '1';
        if (t[i] == '1' || t[i] == 'l')    t[i] = '1';
        if (s[i] == '0' || s[i] == 'o')    s[i] = '0';
        if (t[i] == '0' || t[i] == 'o')    t[i] = '0';
    }
    cout << (s == t ? "Yes" : "No") << "\n";
}

int main(){
//    int T;  cin >> T;
//    while (T--)
        solve();
    return 0;
}

/*
3
abc
arc

No
 */