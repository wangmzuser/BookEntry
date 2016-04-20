#include "Mydef.h"
#include <iostream>

int main()
{
	BookEntry myMsgBook("wangmz","china-wuhan","","");
	PhoneNumber myPhoneNume("010","15927404595");
	PhoneNumber myPhoneNume2("010","15972383778");

	myMsgBook.AddPhoneNumber(myPhoneNume);
	myMsgBook.AddPhoneNumber(myPhoneNume2);
	myMsgBook.ShowAll();
	cout<<endl;

	return 0;
}