#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    int length = str.length();
    for (int i=0; i!=length; i++){
        if (str[i] < 96){ //Capital to small
            str[i] += 32;
        }
        else {
            str[i] -=32;
        }
    }
    cout << str;
    return 0;
}
