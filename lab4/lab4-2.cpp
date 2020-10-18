#include <bits/stdc++.h>
using namespace std;
struct newstack
{
	int arr[10001];
	int size = 0;
	string push (int a) {
		arr[size] = a;
		size++;
		return "ok";
	}
	string clear () {
		size=0;
		return "ok";
	}
	void pop () {
		if (size == 0) cout<<"error"<<endl;
		else {
			size--;
			cout<<arr[size]<<endl;
		}
	}
	void back () {
		if (size == 0) cout<<"error"<<endl;
		else cout<<arr[size-1]<<endl;
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
		else if (inpt == "back")
				mystack.back();
		else if (inpt == "size" )
			cout<<mystack.size<<endl;
		else if (inpt == "clear")
			cout<<mystack.clear()<<endl;
		else if (inpt == "push" ){
			cin>>val;
			cout<<mystack.push(val)<<endl;
		}
	}
	cout<<"bye"<<endl;
}