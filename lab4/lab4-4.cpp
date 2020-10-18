#include <bits/stdc++.h>
using namespace std;
int arr[1000000];
struct newstack
{

	int l = 0;
	int r = 0;
	string push (int a) {
		arr[r] = a;
		r++;
		return "ok";
	}
	string clear () {
		l = 0; r = 0;
		arr[0] = 0;
		return "ok";
	}
	void pop () {
	    if (r == l) cout<<"error"<<endl;
	    else {
            l++;
            cout<< arr[l-1]<<endl;
	    }
	}
	void front () {
	    if (r == l) cout<<"error"<<endl;
		else cout<< arr[l]<<endl;

	}
	void size() {
	    if (r == l) cout<<"error"<<endl;
	    else cout<< r-l<<endl;

	}

};












int main () {
	string inpt;
	int val;
	newstack mystack;
	while(inpt != "exit") {
		cin>>inpt;
		if (inpt == "pop")
                mystack.pop();
		else if (inpt == "size" )
			cout<<mystack.r - mystack.l<<endl;
		else if (inpt == "clear")
			cout<<mystack.clear()<<endl;
		else if (inpt == "front")
			mystack.front();
		else if (inpt == "push" ){
			cin>>val;
			cout<<mystack.push(val)<<endl;
		}


	}
	cout<<"bye"<<endl;
}
