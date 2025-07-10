#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main() {
    
    string s;
    cin >> s;

    int h = 0; 

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '<') {
            
            int tag_end = s.find('>', i);
            string tag = s.substr(i, tag_end - i + 1);

            if (tag[1] == '/') { 
                h--; 
                for (int j = 0; j < 2 * h; ++j) {
                    cout << ' ';
                }
                cout << tag << endl;
            } else { 
                for (int j = 0; j < 2 * h; ++j) {
                    cout << ' ';
                }
                cout << tag << endl;
                h++; 
            }
            i = tag_end; 
        }
    }

    return 0;
}