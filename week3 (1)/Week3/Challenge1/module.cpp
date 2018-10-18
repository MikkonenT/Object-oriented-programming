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
	
	std::cout << "Title is " << title_ << " And the code is " << code_ << std::endl;
}


//Getters and setters


