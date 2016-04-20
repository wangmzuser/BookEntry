#ifndef __MYDEF_H__
#define __MYDEF_H__

#include <string>
#include <list>
#include <vector>
#include <memory>
using namespace std;

class Image
{
public:
	~Image(){}
	Image(const string& c_imageFileName);

private:
	Image(){}
};

class AudioClip
{
public:
	~AudioClip(){}
	AudioClip(const string& c_audioClipFileName);

private:
	AudioClip(){}

};

class PhoneNumber
{
public:
	~PhoneNumber(){}
	PhoneNumber(const string& c_areacode , const string& c_number);
	void ShowAll();
private:
	PhoneNumber();
	string m_areacode;
	string m_number;
};


class BookEntry
{
public:
	~BookEntry(){}
	BookEntry(const string& c_name,const string& c_address,const string& c_imageFileName,const string& c_audioClipFileName);
	void AddPhoneNumber(const PhoneNumber& number);
	void ShowAll();
private:
	string m_name;
	string m_address;
	list<PhoneNumber> m_phoneNumberlist;
	const auto_ptr<Image> mc_image;
	const auto_ptr<AudioClip> mc_audioClip;

	BookEntry(){}
	Image* InitImage(const string& c_imageFileName);
	AudioClip* InitAudio(const string& c_audioClipFileName);
};


#endif