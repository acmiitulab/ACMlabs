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
	int pop () {
		size--;
		return arr[size];
	}
	int back () {
		return arr[size-1];
	}
};
int main () {
	string inpt;
	int val;
	newstack mystack;
	while(inpt != "exit") {
		cin>>inpt;
		if (inpt == "pop")
				cout<<mystack.pop()<<endl;
		else if (inpt == "back")
				cout<<mystack.back()<<endl;
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