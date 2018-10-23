#pragma once
#include <iostream>
#include <string>

class Module {
	//Data members private
private:
	std::string title_, code_;
	int creds_, mark_;

public:
	//Default constructor
	Module();

	//Custom constructor1

	explicit Module(std::string title);

	//Custom constructor 2

	Module(std::string title, std::string code, int creds, int mark);


	//Getters and setters

	void SetTitle(std::string title);
	std::string GetTitle() const;

	void SetCode(std::string code);
	std::string GetCode() const;

	void SetCreds(int creds);
	int GetCreds() const;

	void SetMark(int mark);
	int GetMark() const;


};