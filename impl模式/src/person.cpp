#include "person.h"
#include "personimpl.h"

Person::Person() {
	impl_ = new PersonImpl();
}

Person::~Person() {
	if (impl_ != nullptr) {
		delete impl_;
		impl_ = nullptr;
	}
}

void Person::SetName(const std::string &name) {
	impl_->SetName(name);
}

const std::string& Person::GetName() const {
	return impl_->GetName();
}

void Person::SetAge(uint32_t age) {
	impl_->SetAge(age);
}

const uint32_t Person::GetAge() const {
	return impl_->GetAge();
}