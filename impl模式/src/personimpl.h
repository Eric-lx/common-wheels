#pragma once

#include <string>
class PersonImpl
{
public:
	PersonImpl() = default;
	~PersonImpl() = default;
	void SetName(const std::string &name);
	const std::string& GetName() const;
	void SetAge(uint32_t age);
	const uint32_t GetAge() const;
private:
	void AgePlusOne();

private:
	std::string name_;
	uint32_t age_;
};