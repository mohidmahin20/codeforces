#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int n;
    cin >> n >> str;

    int maxi = 0;
    string gram;

    for (int i = 0; i < str.size() - 1; i++) {
        string sub = str.substr(i, 2);

        int temp = 0;

        for (int j = 0; j < str.size() - 1; j++) {
            if (str[j] == sub[0] && str[j + 1] == sub[1])
                temp++;
        }

        if (temp > maxi) {
            maxi = temp;
            gram = sub;
        }
    }

    cout << gram << endl;

    return 0;
}
