#include <iostream>
#include <string>
#include <random>
using namespace std;
int main() {
    const string characters =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789"
        "@!.";   
    const int length = 20;
    random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<int> distribution(0, characters.size() - 1);
    for (int i = 0; i < 10; i++) {
        string result;
        for (int j = 0; j < length; j++) {
            result += characters[distribution(generator)];
        }
        cout << result << endl;
    }
    return 0;
}