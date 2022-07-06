#include<iostream>
#include<string>
#include<list>
#include <stack> 
#include <map> 

using namespace std;

int main(int argc,char *argv[])
{
	char ch;
	string str;
	string strg;
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
	ll.unique();
	for (auto ip = ll.begin(); ip != ll.end(); ++ip) {
        cout << *itr << " ";
    }
	itr=ll.begin();

    map<string,int> mp;
	map<int,int>::iterator it;
	while(itr!=ll.end())
	{
		strg =*itr;
		mp.insert({strg});
		*itr++;
		for (auto& x: mp) {  
		cout << "server name"<<x.first << "port name" << x.second << '\n';  
		} 
	}	
		string dels;
		cout<<"enter the server to be deleted";
		cin>>dels;
		for(auto it = mp.begin(); it != mp.end(); ) {
        if(it->first = dels)
            it = mp.erase(it);
        else
            ++it;
		}
	
		for(auto& p : c) {
			std::cout << p.second << ' ';
		}
		cout<<"\nenter the server to be updated";
		cin>>upds;
		cout<<"\nenter the port name to be updated for the same server";
		cin>>portn;
		for(auto it = mp.begin(); it != mp.end(); ) {
        if(it->first = upds)
            it = mp.swap(it);
			it->second=mp.swap(portn);
        else
            ++it;
		}
	for (auto& y: mp) {
    std::cout << y.first << ": " << y.second << '\n';
  }
		


	return 0;
}
