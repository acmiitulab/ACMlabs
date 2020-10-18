#include <bits/stdc++.h>
#include <string>
using namespace std;
int main () {
        stack <char> first;
        int a, i = 0;
        string str;
        cin>>str;
        for (int q=0; q<str.length(); q++) {
            if (  str[q] == '{' || str[q] == '(' || str[q] == '[') {
                    first.push(str[q]);
                }
            else if ( str[q] == '}' && !first.empty()) {
                if (first.top() == '{' && !first.empty()) {
                    first.pop();
                }
                else {
                    cout<<"no";
                    return 0;
                }
            }
            else if ( str[q] == ')' && !first.empty()) {
                if (first.top() == '(' && !first.empty()) {
                    first.pop();
                }
                else {
                    cout<<"no";
                    return 0;
                }
            }
            else if ( str[q] == ']' && !first.empty()) {
                if (first.top() == '[' ) {
                    first.pop();
                }
                else {
                    cout<<"no";
                    return 0;
                }
            }
            else {
                cout<<"no";
                return 0;;
            }
        }
        if (first.empty()) cout<<"yes";
        else cout<<"no";
}
