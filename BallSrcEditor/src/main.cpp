#include <iostream>
#include <memory>
#include <BallSrcCore/Application.hpp>

class MyApp : public BallSrc::Application {
	virtual void on_update() override {
		//std::cout << "Update frame: " << frame++ << std::endl;
	}

	int frame = 0;
};

int main() {
	auto myApp = std::make_unique<MyApp>();

	int returnCode = myApp->start(1024, 768, "BallSrc");

	std::cin.get();

	return returnCode;
}