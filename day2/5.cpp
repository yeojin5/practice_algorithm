#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    answer = my_string;
    for (int i = s; i != overwrite_string.length()+s; i++){
        answer[i] = overwrite_string[i-s];
    }
    return answer;
}
