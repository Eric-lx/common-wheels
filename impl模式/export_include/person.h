#pragma once

#include <string>

class PersonImpl;
class Person {
public:
	Person();
	~Person();
	void SetName(const std::string &name);
	const std::string& GetName() const;
	void SetAge(uint32_t age);
	const uint32_t GetAge() const;
private:
	PersonImpl *impl_;
};