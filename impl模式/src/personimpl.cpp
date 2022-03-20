#include "personimpl.h"

void PersonImpl::SetName(const std::string &name) {
	name_ = name;
}

const std::string& PersonImpl::GetName() const {
	return name_;
}

void PersonImpl::SetAge(uint32_t age) {
	age_ = age;
	AgePlusOne();
}

const uint32_t PersonImpl::GetAge() const {
	return age_;
}

void PersonImpl::AgePlusOne() {
	age_++;
}