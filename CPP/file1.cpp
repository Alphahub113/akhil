/*..............................................day1................................................*/
#if 01
#include<iostream>
using namespace std;

int main()
{
		int x = 10;
		float f = 7.8;
		string str = "Akhil";

		cin >> x << f
		std::cout << "Hello world\n";
		//printf("Hello World\n");
		return 0;
}
#endif
/*............................................day2..................................................................*/
//to read
#if 0
#include<iostream>
using namespace std;

int main()
{
		int x = 10;
		float f = 7.8;
		string str = "Akhil";

		cin >> x >> f >> str;
		cout << x << " "<<f str << endl
		//printf("Hello World\n");
		return 0;
}
#endif

#if 0
#include<iostream>
using namespace std;

class Bank
{
		public
		int acc_no;
		string name;
		//string add;
		float balance;

		/*void withdraw()
		{
		}

		void transfer()
		{
		}*/
        
		public
		void show_details()
		{
				cout << acc_no << name << balance;
		}
}

int main
{
		Bank obj1;
		obj1.acc_no = 12345;
		obj1.name = "Akhil";
		obj1.balance = 1000.00;

		obj1.show_details();
		
		return 0;
}

#endif
