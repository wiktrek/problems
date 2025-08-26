#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool is_leap(long long y) {
    if ((y % 4 == 0 && y% 100 != 0)|| y% 400 == 0) {
        return true;
    }
    return false;
}
int get_days(int m,long long y) {
    if (m == 2) {
        return is_leap(y) ? 28 : 29;
    }
    if (m < 8) {
        if (m % 2 == 1) {
            return 31;
        } else {
            return 30;
        }
    } else {
        if (m % 2 == 0) {
            return 31;
        } else {
            return 30;
        }
    }
}
string increase_day(string s) {
    int d = stoi(s.substr(0,2));
    int m = stoi(s.substr(2,2));
    long long y = stoll(s.substr(4));
    if (d == get_days(m,y)) {
        if (m == 12) {
            y+=1;
            m=1;
        } else {
            m+=1;
        }
        d = 1;
    } else {
        d+=1;
    }
    string out = (d < 10 ? "0" : "") + to_string(d);
    out += (m < 10 ? "0" : "") + to_string(m);
    out += to_string(y);
    return out;
}

bool is_palindrome(string s) {
    string b = s;
    reverse(s.begin(),s.end());
    return b == s;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i=0;i<n;i++) {
        string num;
        cin >> num;
        string new_str = increase_day(num);
        while (!is_palindrome(new_str)) {
            new_str = increase_day(new_str);
        }
        cout << new_str << "\n";
    }
    return 0;
}
