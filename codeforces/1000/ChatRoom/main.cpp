#include <iostream>
using namespace std;
int main() {
    string s;
    string to_compare = "hello";
    int j = 0;
    cin >> s;
    for (int i =0; i < s.length();i++) {
        if (s[i] == to_compare[j]){
            j+=1;
        };
        if (j==to_compare.length()-1) {
            cout << "YES";
            return 0;
        }
   }
   cout << "NO";
   return 0;
}