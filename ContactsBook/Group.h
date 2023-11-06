#pragma once

class Group
{
private:
	std::string name;
	int size;
	int count;
	Contact* contacts;
public:
	Group();
	Group(std::string name, int size);
	~Group();
	std::string getName() const;
	int getSize() const;
	int getCount() const;
	Contact* getContact() const;
	void addContact(const Contact& c);
	void delContact(std::string name)
};

