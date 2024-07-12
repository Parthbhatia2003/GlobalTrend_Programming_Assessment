#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isAlphabetic(string& str) {
    for (char c : str) {
        if (!isalpha(c)) {
            return false;
        }
    }
    return true;
}

int main() {
    string test1 = "HelloWorld";
  
    if(isAlphabetic(test1)){
        cout<<"Yes Given string contains only alphabetic characters";
    }
    else{
        cout<<"No Given string does not contains only alphabetic characters";
    }

    return 0;
}
