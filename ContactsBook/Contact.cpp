#include "framework.h"
#include "Contact.h"

Contact::Contact() : name("NO NAME"), phone("NO PHONE"),city("NO CITY")
{
}

Contact::Contact(std::string name, std::string phone, std::string city) : name(name), phone(phone), city(city)
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
