#include<iostream>
#include<string.h>

using namespace std;

class Simple{

	char *str;

public:

//	void setMsg(String *);
//	String *getMsg();
	Simple();
	void display();

};


Simple :: Simple()
{
	strcpy(str,"Hello");
}

void Simple :: display()
{
	cout<<str<<"\n";
}


int main()
{
	Simple ob;
	ob.display();

	return 0;
}
