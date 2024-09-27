#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int mul = 2*a*b;
    string A = to_string(a);
    string B = to_string(b);
    int big = stoi(A+B);
    answer = big >= mul ? big : mul;
    return answer;
}
