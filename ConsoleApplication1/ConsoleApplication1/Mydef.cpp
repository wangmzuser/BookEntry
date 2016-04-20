#include "Mydef.h"
#include <iostream>
using namespace std;

BookEntry::BookEntry()
{

}
BookEntry::~BookEntry()
{

}
Image* BookEntry::InitImage(const string& c_imageFileName)
{
	if (c_imageFileName != "")
	{
		return new Image(c_imageFileName);
	}
	else
	{
		return NULL;
	}
}
AudioClip* BookEntry::InitAudio(const string& c_audioClipFileName)
{
	if (c_audioClipFileName != "")
	{
		return new AudioClip(c_audioClipFileName);
	}
	else
	{
		return 0;
	}
}

BookEntry::BookEntry(const string& c_name,const string& c_address,const string& c_imageFileName,const string& c_audioClipFileName)
:m_name(c_name),m_address(c_address),
mc_image(InitImage(c_imageFileName)),mc_audioClip(InitAudio(c_audioClipFileName))
{
	
}

void BookEntry::AddPhoneNumber(const PhoneNumber& number)
{
	m_phoneNumberlist.push_back(number);
}

void BookEntry::ShowAll()
{
	cout<<"name:"<<m_name<<endl
		<<"address:"<<m_address<<endl
		<<"phoneNumber:";
	list<PhoneNumber>::iterator it;
	for (it = m_phoneNumberlist.begin(); it != m_phoneNumberlist.end()  ; it++)
	{
		it->ShowAll();
	}
}

PhoneNumber::PhoneNumber(const string& c_areacode,const string& c_number)
:m_number(c_number),m_areacode(c_areacode)
{}

void PhoneNumber::ShowAll()
{
	cout<<m_areacode<<"-"<<m_number<<",  ";
}

Image::Image(const string& c_imageFileName)
{

}

AudioClip::AudioClip(const string& c_audioClipFileName)
{

}