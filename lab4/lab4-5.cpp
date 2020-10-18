#include <bits/stdc++.h>
using namespace std;
int arr[1000000];
struct newstack
{
	int l = 500000;
	int r = 500000;
	string push_back(int a) {
		r++;
		arr[r] = a;
		return "ok";
	}
	string push_front(int a) {
		arr[l] = a;
		l--;
		return "ok";
	}
	string clear () {
		l = 500000; r = 500000;
		arr[500000] = 0;
		return "ok";
	}
	void pop_back () {
	    if (r == l) cout<<"error"<<endl;
	    else {
            cout<< arr[r]<<endl;
            r--;
	    }
	}
	void pop_front () {
	    if (r == l) cout<<"error"<<endl;
	    else {
            cout<< arr[l+1]<<endl;
            l++;
	    }
	}
	void front () {
	    if (r == l) cout<<"error"<<endl;
		else cout<< arr[l+1]<<endl;
	}
	void back () {
	    if (r == l) cout<<"error"<<endl;
		else cout<< arr[r]<<endl;

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
		if (inpt == "pop_back")
                mystack.pop_back();
        else if (inpt == "pop_front")
                mystack.pop_front();
		else if (inpt == "size" )
			cout<<mystack.r - mystack.l<<endl;
		else if (inpt == "clear")
			cout<<mystack.clear()<<endl;
		else if (inpt == "front")
			mystack.front();
        else if (inpt == "back" )
            mystack.back();
		else if (inpt == "push_front" ){
			cin>>val;
			cout<<mystack.push_front(val)<<endl;
		}
		else if (inpt == "push_back" ){
			cin>>val;
			cout<<mystack.push_back(val)<<endl;
		}


	}
	cout<<"bye"<<endl;



}
