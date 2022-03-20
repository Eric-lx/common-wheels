class Singleton
{
public:
	static Singleton& Instance() {
		static Singleton singleton;
		return singleton;
	}
	~Singleton() = default;
private:
	Singleton() = default;
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;
};