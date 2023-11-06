#pragma once
class Book
{
private:
	std::string name;
	int size;
	Group* groups;
	//Contact* contacts;
public:
	Book();
	Book(std::string name, int size);
	~Book();
	std::string getName() const;
	int getSize() const;
	Group* getGroup() const;
	void addGroup(const Group& g);
	void delGroup();
	

};

