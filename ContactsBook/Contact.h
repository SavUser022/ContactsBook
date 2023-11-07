#pragma once

class Contact
{
	std::string name;
	std::string phone;
	std::string city;
public:
	Contact();
	Contact(std::string name, std::string phone, std::string city);
	//~Contact();
	std::string getName() const;
	std::string getCity() const;
	std::string getPhone() const;
};

