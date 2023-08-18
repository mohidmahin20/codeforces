#include<bits/stdc++.h>
#define ll    long long
#define ull   unsigned long long
#define pb    push_back
using namespace std;

string processBracketString(const string& s) {
    int n = s.length();
    bool found = false;

    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == ')' && s[i + 1] == '(') {
            found = true;
            break;
        }
    }

    if (found) {
        return "1\n()";
    } else {
        return "2\n(" + s + ")";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string bracketSeq;
        cin >> bracketSeq;

        stack<char> stk;
        bool regular = true;

        for (char ch : bracketSeq) {
            if (ch == '(') {
                stk.push(ch);
            } else if (ch == ')') {
                if (stk.empty() || stk.top() != '(') {
                    regular = false;
                    break;
                }
                stk.pop();
            }
        }
        int l=stk.size();
        if (regular && stk.empty()) {
            cout << "NO" << endl;
        } else {
         
            cout << "YES" << endl;int flag=0;
         for (int i = 0; i < l - 1; ++i) {
    if (bracketSeq[i] == ')' && bracketSeq[i + 1] == '(') {
        flag = 1;
    }
}

if (flag == 1) {
    for (int i = 0; i < l; ++i) {
        cout << "(";
    }
    for (int i = 0; i < l; ++i) {
        cout << ")";
    }
    cout << endl;
} else {
    for (int i = 0; i < l * 2; ++i) {  // Corrected here
        cout << "()";
    }
    cout << endl;
}

               
        }
    }

    return 0;
}