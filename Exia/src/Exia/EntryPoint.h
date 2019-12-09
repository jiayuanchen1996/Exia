#pragma once

#ifdef  EX_PLATFORM_WINDOWS

extern Exia::Application* Exia::CreateApplication();

int main(int argc, char** argv) {
	auto app = Exia::CreateApplication(); 
	app->Run();
	delete app;
}

#endif