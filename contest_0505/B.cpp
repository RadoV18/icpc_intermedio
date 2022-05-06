#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char c;
    int tot = 0;
    char aux = '\0';
    while(n--) {
        cin >> c;
        if(c == aux) {
            tot++;
        }
        aux = c;
    }
    cout << tot << endl;
    return 0;
}