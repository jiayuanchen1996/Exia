#include <Exia.h>

class Sandbox : public Exia::Application {

public:
	Sandbox() {
	}


	~Sandbox() {
	}

};

Exia::Application* Exia::CreateApplication(){
	return new Sandbox();
}