#include <iostream>
using namespace std;
int main() {
    string input;
    cin >> input;
    string final_string;
    int first_3 = -1;
    for (int c;c <=input.length();c++) {
        if (c % 2==0) {
            switch (input[c] - '0')
            {
            case 1:
                final_string.insert(0,1,'1');
                if (first_3 != -1) {
                    first_3 += 1;
                }
                break;
            case 2:
                if (first_3 == -1) {
                    final_string += '2'; 
                } else {
                    final_string.insert(first_3,1, '2');
                    first_3 += 1;
                }
                break;
            case 3:
                if (first_3 == -1) {
                    first_3 = final_string.length();
                }
                final_string += '3';
                break;
            default:
                break;
            }
        }
    }
    for (int i = 1; i< final_string.length(); i++) {
        final_string.insert(i,1,'+');
        i++;
    }
    cout << endl << final_string;
    return 0;
}
