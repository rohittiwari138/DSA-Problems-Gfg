#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    getline(cin, num);
    int res = stoi(num);
    cout<<res*2;

    return 0;
}
