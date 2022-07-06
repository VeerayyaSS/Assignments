#include<iostream>
#include<string>
#include<list>
#include <stack> 

using namespace std;

int main(int argc,char *argv[])
{
	char ch;
	string str;
	list<string> ll;
	list<string>:: iterator itr=ll.begin();
	for(int i=1; i<argc;i++)
	{
	str=argv[i];
	ll.push_back(str);
	}
	itr=ll.begin();

	cout<<"here is the list";
while(itr!=ll.end())
{
	cout<<"\n"<<*itr++;
}
	itr=ll.begin();
    stack<string> stack;

while(itr!=ll.end())
{
	    stack.push(*itr++);

}
        cout << "\n Here is the stack" ;

while (!stack.empty()) {
		cout<< '\n'<<stack.top();
        stack.pop();
    }
}
