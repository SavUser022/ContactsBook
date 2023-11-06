#include "framework.h"
#include "Group.h"
#include "Book.h"
//#include "Contact.h"

Book::Book() : name("NO NAME"), size(0)
{
}

Book::Book(std::string name, int size) : name(name), size(size)
{
}

Book::~Book()
{
}

std::string Book::getName() const
{
	return name;
}

int Book::getSize() const
{
	return size;
}

Group* Book::getGroup() const
{
	return nullptr;
}

void Book::addGroup(const Group& g) 
{
}

void Book::delGroup()
{
}

