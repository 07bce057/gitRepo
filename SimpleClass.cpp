#include<iostream>
#include<string.h>

using namespace std;

class Simple{

	string str;
	int i;

public:

//	void setMsg(String *);
//	String *getMsg();
	Simple();
	void display();

};


Simple :: Simple()
{
	str="Hello,How are you..!!";
	i=10;
	//strcpy(str,"Hello");
}

void Simple :: display()
{
	cout<<str<<":"<<i<<"\n";
}


int main()
{
	Simple *ob;
	ob=new Simple();
	ob->display();

	return 0;
}
