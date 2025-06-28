#include <iostream>

using namespace std;

int main() {
    string questionText_1 = "What is -1 + 5 / 3 ?";
    string expectedAnswer_1 = "0";

    string questionText_2 = "Assume that n is properly declared and initialized. Write a condition to represent that n does NOT satisify 0 < n < 100.";
    string expectedAnswer_2 = "(n <= 0 || n >= 100)";

    string answer_1;
    string answer_2;

    cout << questionText_1 << endl;
    cout << "Your Answer: ";
    getline(cin, answer_1);
    
    cout << answer_1 << endl;

    string stringVariable;

    return 0;
}