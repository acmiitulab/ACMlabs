#include <bits/stdc++.h>
#include <string>
using namespace std;
int main () {
        int a, n, fsize = 0, ssize = 0;
        deque<int> f, s;
        queue<int> answ;
        char ds;
        cin>>n;
        for (int q=0; q<n; q++) {
            cin>>ds;
            if (ds == '-') {
                answ.push(f.front());
                f.pop_front();
                fsize--;
                if (ssize > fsize) {
                    f.push_back(s.front());
                    s.pop_front();
                    fsize++;
                    ssize--;
                }
            }
            else {
                cin>>a;
                if (ds == '+') {
                    s.push_back(a);
                    ssize++;
                    if (ssize > fsize) {
                        f.push_back(s.front());
                        s.pop_front();
                        fsize++;
                        ssize--;
                    }
                }
                else if (ds == '*'){
                    s.push_front(a);
                    ssize++;
                    if (ssize > fsize) {
                        f.push_back(s.front());
                        s.pop_front();
                        fsize++;
                        ssize--;
                    }

               }
            }
        }
        while (!answ.empty()) {
                cout<<answ.front()<<endl;
                answ.pop();
        }
}