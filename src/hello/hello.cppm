module;

#include <cstdlib>

export module hello;

export void hello();

export template<typename T> class Test {
public:
	static size_t size() {
		return sizeof(T);
	}
};

