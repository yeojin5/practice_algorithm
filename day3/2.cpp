#include <string>
#include <vector>

using namespace std;

string solution(vector<string> arr) {
    string answer = "";
    while(arr.size()!=0){
        answer += arr.front();
        arr.erase(arr.begin());
    }
    return answer;
}
