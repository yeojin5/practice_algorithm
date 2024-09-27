#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    int distance = str.length();
    for (int i=0; i!= distance; i++){
        cout << str[i] << endl;
    }
    return 0;
}
