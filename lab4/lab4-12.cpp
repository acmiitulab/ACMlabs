#include <bits/stdc++.h>
#include <string>
using namespace std;


int main () {

        vector< stack<int> > arr;
        stack<int> subar;
        queue< pair<int, int> > answ;
        queue <int> chek;
        vector< int > arr2, arr3;
        int n, a, b;
        bool isPos1 = true, isPos2 = true, some1 = true, some2 = true, chek1 = true;

        cin>>n;

        for(int q=0; q<n; q++) {
            cin>>a;
            arr.push_back(subar);
            for (int w=0;  w<a; w++) {
                cin>>b;
                if (b != q+1) chek1 = false;
                if (b>n) {
                    cout<<0;
                    return 0;}
                if (n == 2) {
                    if ( q == 0)
                        arr2.push_back(b);
                    else
                        arr3.push_back(b);
                }
                arr[q].push(b);
            }

        }
        if (chek1 ) return 0;
        //for (int q=0; q<arr2.size(); q++) cout<<arr2[q];

        if (arr.size() >= 3) {


            for (int q=1; q<n; q++) {
                while(!arr[q].empty()) {
                    answ.push( pair<int, int> (q+1,  1));
                    arr[0].push(arr[q].top());
                    arr[q].pop();

                }
            }
           // cout<<arr[0].top();

            while(!arr[0].empty()) {
                if (arr[0].top() == 1) {
                    arr[1].push(arr[0].top());
                    answ.push( pair<int, int> (1,  2));
                    arr[0].pop();
                   // cout<<arr[0].top();

                }
                else {
                    arr[arr[0].top()-1].push(arr[0].top());
                    answ.push( pair<int, int> (1,  arr[0].top()));
                    arr[0].pop();
                    //cout<<arr[0].top();
                }


            }
            //cout<<"yes";

            while (!arr[1].empty()) {
                if (arr[1].top() == 1) {
                    arr[0].push(1);
                    answ.push( pair<int, int> (2,  1));
                    arr[1].pop();
                }
                else {
                    arr[2].push(2);
                    arr[1].pop();
                    answ.push( pair<int, int> (2,  3));
                }
            }

            while (arr[2].top() == 2) {
                arr[1].push(arr[2].top());
                arr[2].pop();
                answ.push( pair<int, int> (3,  2));
            }
            while (!answ.empty()) {
            cout<<answ.front().first<<" "<<answ.front().second<<endl;
            answ.pop();
            }
        }
        else if (arr.size() == 2) {

            for (int q=arr2.size()-1; q>=0; q--) {
                   // cout<<arr2[q]<<endl;
                if (arr2[q] != 1 && some1) isPos1 = false;
                /*else if (arr2[q] == 1 && !isPos1 ) {
                    cout<<1;
                    return 0;
                }*/
                else if (arr2[q] != 1 && !some1 )
                {
                    cout<<0;
                    return 0;
                }
                else if (arr2[q] == 1 ) some1 = false;

            }

            for (int q=arr3.size()-1; q>=0; q--) {
                if (arr3[q] != 2 && some2) isPos2 = false;
              /*  else if (arr3[q] == 2 && !isPos2 ) {
                    cout<<3;
                    return 0;
                }*/
                else if (arr3[q] != 2 && !some2 )
                {
                    cout<<0;
                    return 0;
                }
                else if (arr3[q] == 2) some2 = false;
            }
            if (isPos1 && isPos2) {
                return 0;
            }
            if ( (!isPos1 && !isPos2) ) {
                cout<<0;
                return 0;
            }

            if (!isPos1 && isPos2) {
                while (arr[0].top() != 1 && !arr[0].empty()) {
                    answ.push(pair<int, int> (1,  2));
                    arr[0].pop();
                }
            }
            else if ( !isPos2 && isPos1 )
                while (arr[1].top() != 2 && !arr[1].empty()) {
                    answ.push(pair<int, int> (2,  1));
                    arr[1].pop();
                }
            }

            while (!answ.empty()) {
            cout<<answ.front().first<<" "<<answ.front().second<<endl;
            answ.pop();
            }













}