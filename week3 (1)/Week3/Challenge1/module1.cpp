#include <iostream>
#include <string>
#include "module.h"

// Default constructor
Module::Module()
{
	title_ = "";

}

//Non-default constructors

Module::Module(std::string title)
	:title_{ title } {
	
	std::cout << "Title is " << title_ << std::endl;
}

Module::Module(std::string title, std::string code, int creds, int mark)
	: title_{ title }, code_{ code }, creds_{ creds }, mark_{ mark }{
	
	std::cout << "Title is " << title_ << "And the code is " << code_ << std::endl;
}


//Getters and setters

void Module::SetTitle(std::string title) {
	title_ = title;
}
std::string Module::GetTitle() const {
	return title_;
}

void Module::SetCode(std::string code) {
	code_ = code;
}
std::string Module::GetCode() const {
	return code_;
}

void Module::SetCreds(int  creds) {
	creds_ = creds;
}

int Module::GetCreds() const {
	return creds_;
}

void Module::SetMark(int  mark) {
	mark_ = mark;
}
int Module::GetMark() const {
	return mark_;
}