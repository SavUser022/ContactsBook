#include "framework.h"
#include "Contact.h"
#include "Group.h"

Group::Group() : name("NO NAME"), size(0)
{
}

Group::Group(std::string name, int size) : name(name), size(size)
{
}

Group::~Group()
{
}

std::string Group::getName() const
{
	return name;
}

int Group::getSize() const
{
	return size;
}

int Group::getCount() const
{
	return count;
}

Contact* Group::getContact() const
{
	return nullptr;
}

void Group::addContact(const Contact& c)
{

}
