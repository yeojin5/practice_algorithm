#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string A = to_string(a);
    string B = to_string(b);
    int A_i = stoi(A+B);
    int B_i = stoi(B+A);
    answer = (A_i>B_i)?A_i:B_i;
    return answer;
}
