#pragma once
using namespace std;
template <typename T>
T templateFunc(T t) {}


template<class T, class M>
class TemplateDemo {
public:
	T funcTT(T t) {
		cout << "TemplateDemo--funcT():a=" << t<< endl;
		return t;
	}
	M funcMM(M m) {
		cout << "TemplateDemo--funcM():b=" << m << endl;
		return m;
	}

	void funcTM() {
		cout << "TemplateDemo--funcTM():" << endl;
	}
	~TemplateDemo() {};
};


