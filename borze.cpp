#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    cin >> a;

    for(int i = 0; i < a.size(); i++)
        if(a[i] == '.') cout << '0';
        else if(i+1 < a.size() && a[i] == '-' && a[i+1] == '.') {
            cout << '1';
            i++;
        } else if(i+1 < a.size() && a[i] == '-' && a[i+1] == '-') {
            cout << '2';
            i++;
        }

    cout << endl;
    return 0;
}
