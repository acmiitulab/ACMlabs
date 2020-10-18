#include <bits/stdc++.h>
#include <string>
using namespace std;
int main () {
        queue <string> nine;
        queue <string> ten;
        queue <string> eleven;
        string str;
        int a;
        while (cin>>a>>str) {
            if (a == 9) {
                nine.push(str);
            }
            else if (a == 10) {
                ten.push(str);
            }
            else if (a == 11) {
                eleven.push(str);
            }
        }
        while (!nine.empty()) {
            cout<<9<<" "<<nine.front()<<endl;
            nine.pop();
        }
        while (!ten.empty()) {
            cout<<10<<" "<<ten.front()<<endl;
            ten.pop();
        }
        while (!eleven.empty()) {
            cout<<11<<" "<<eleven.front()<<endl;
            eleven.pop();
        }
}