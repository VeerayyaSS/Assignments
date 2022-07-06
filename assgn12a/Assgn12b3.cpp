#include <future>
#include <iostream>i
#include <thread>
#include <utility>
using namespace std;

void product(promise<string>&& intPromise, string a, string b){
	  intPromise.set_value(a);
}

struct Div{

	void operator() (promise<string>&& intPromise, string a, string b) const {
	intPromise.set_value(b);
	}

};

int main(){

	string a= "Capgemini";
	string b= "Company";

	cout << endl;

	        
	promise<string> prodPromise;
	promise<string> divPromise;

		    
	future<string> prodResult= prodPromise.get_future();
	future<string> divResult= divPromise.get_future();

		        
	thread prodThread(product,move(prodPromise),a,b);
	Div div;
	thread divThread(div,move(divPromise),a,b);


	cout << prodResult.get() << endl;
	cout << divResult.get() << endl;

	prodThread.join();
				    
	divThread.join();

	cout <<endl;
				        
}



