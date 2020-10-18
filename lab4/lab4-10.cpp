#include <bits/stdc++.h>
#include <string>
using namespace std;
int main () {
        stack <int> first;
        int a, i = 0;
        string str;
        getline(cin, str);
        for (int q=0; q<str.length(); q++) {

            if (str[q] >= '0' && str[q] <= '9') {
                first.push(str[q] - '0');
            }
            else if (str[q] == '*') {
                a  = first.top();
                first.pop();
                a *= first.top();
                first.pop();
                first.push(a);
            }
            else if (str[q] == '-') {
                a  = first.top();
                first.pop();
                a = first.top() - a;
                first.pop();
                first.push(a);
            }
            else if (str[q] == '+') {
                a  = first.top();
                first.pop();
                a += first.top();
                first.pop();
                first.push(a);
            }
        }
        cout<<first.top();
}