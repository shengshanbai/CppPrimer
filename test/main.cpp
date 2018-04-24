#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::vector;

int main() {
    string s("some string");
    for (auto it=s.begin();it!=s.end()&&!isspace(*it);it++){
        *it=toupper(*it);
    }
    cout << s << endl;
    return 0;
}
