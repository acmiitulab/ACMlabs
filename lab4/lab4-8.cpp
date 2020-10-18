#include <bits/stdc++.h>
#include <string>
using namespace std;
int main () {
        queue <int> first;
        queue <int> second;
        int a, i = 0;
        for (int w=0; w<5; w++) {
            cin>>a;
            first.push(a);
        }
        for (int w=0; w<5; w++) {
            cin>>a;
            second.push(a);
        }
        while (i != 1000000) {
            if ( (first.front() > second.front() || (first.front() == 0 && second.front() == 9)) 
                && !(first.front() == 9 && second.front() == 0)) {
                first.push(first.front());
                first.push(second.front());
                first.pop();
                second.pop();
            }
            else {
                second.push(first.front());
                second.push(second.front());
                first.pop();
                second.pop();
            }
            i++;

            if (first.empty()) {
                cout<<"second "<<i;
                return 0;
            }
            if (second.empty()) {
                cout<<"first "<<i;
                return 0;
            }
        }
        cout<<"botva";
}