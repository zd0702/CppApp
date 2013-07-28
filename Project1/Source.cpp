#include<iostream>
#include<string>
using namespace std;

void print(string message);

void main()
{
	print("hello world");
	print("");
	getchar();
}

void print(string message)
{
	if(!message.empty()){
		cout << message <<endl;
	}else{
		cout << "empty string detected" <<endl;
	}
	


}

