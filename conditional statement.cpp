#include <iostream>
using namespace std;
int main() {
    char c;
    cout << "enter the character: ";
    cin >> c;
    if (c >= 'a' && c<='z'){
        cout<<"lowercase"<<endl;
    }
    else {
        cout<<"uppercase"<<endl;
    }
    return 0;
}