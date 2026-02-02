#include<bits/stdc++.h>
using namespace std;
bool larger(const string& a, const string& b) {
    if (a.length() != b.length())
        return a.length() > b.length();
    return a > b;
}

int main() {
    string s1, op, s2;
    cin >> s1 >> op >> s2;

    bool result = false;

    if (op == "==") result = (s1 == s2);
    else if (op == "!=") result = (s1 != s2);
    else if (op == "<")  result = !larger(s1, s2) && s1 != s2;
    else if (op == ">")  result = larger(s1, s2);
    else if (op == "<=") result = !larger(s1, s2);
    else if (op == ">=") result = larger(s1, s2) || s1 == s2;

    cout << (result ? "TAK" : "NIE");
}