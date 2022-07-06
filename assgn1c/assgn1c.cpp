#include<iostream>
#include<cstring>
#include<string>

using namespace std;

class Bank{
	private:
		string CustNam;
		long int Acc_Num;
		string Acc_Type;
		int Bal;
	public:
		Bank(){CustNam="defaultName";Acc_Num=123456789012;Acc_Type="Savings";Bal=0;}
		void account()
		{
			 string CustNam= "defaultname";
			 cout<<"Customer Name:"<<CustNam<<endl;
			 long int Acc_Numr=1424102233367;
			 cout<<"Account_Number:"<<Acc_Num<<endl;
			 string Acc_Type="Savings";
			 cout<<"Type_of_Account:"<<Acc_Type<<endl;
			 int Bal=5000;
			 cout<<"Account_Balance:"<<Bal<<endl;
		 }

		Bank(string cname,long int anum,string atype,int bal)
		{
			CustNam=cname;
			Acc_Num=anum;
			Acc_Type=atype;
			Bal=bal;
		}
		 ~Bank(){}

		  void deposit()
			   {
				    int depositamount;
				    cout<<"\nDeposit Amount:";
				    cin>>depositamount;
				       }
		   void withdraw()
			    {
				   int withdrawamount;
				   cout<<"\nEnter Withdraw Amount:";
				   cin>>withdrawamount;
				   if(withdrawamount>Bal)
					{
						cerr<<"Insufficient Balance:"<<endl;
						Bal-=withdrawamount;
						 }
			}
		    void display()
			     {
				  cout<<"\n-------------------";
				  cout<<"\nCustomer Name:"<<CustNam;
				  cout<<"\nAccount Number:"<<Acc_Num;
				cout<<"\nAccount Type:"<<Acc_Type;
				cout<<"\nAccount Balance:"<<Bal<<endl;
			 }
};
int main()
{
	string CustNam ;
	long int Acc_Num;
	string Acc_Type;
	int  Bal;
	cout<<"\nEnter details:";
	cout<<"\n-------------------";
	cout<<"\nCustomer Name:";
	cin>>CustNam;
	cout<<"\nAccount Number:";
 	cin>>Acc_Num;
	cout<<"\nAccount Type:";
	cin>>Acc_Type;
	cout<<"\nAccount Balance:";
	cin>>Bal;
	Bank obj;
	Bank b1;//CustNam, Acc_Num,Acc_Type,Bal);
	b1.display();
	b1.deposit();
	b1.withdraw();
	obj.account();
	Bank *ptr;
	ptr=new Bank;
	delete ptr;
	return 0;
}	
