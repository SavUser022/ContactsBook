#include "framework.h"
#include "Contact.h"


Contact::Contact() : name("NO NAME"), city(" - "), phone("NONE")
{
}

Contact::Contact(std::string name, std::string city, std::string phone) : name(name), city(city), phone(phone)
{
}

std::string Contact::getName() const
{
	return name;
}

std::string Contact::getCity() const
{
	return city;
}

std::string Contact::getPhone() const
{
	return phone;
}
