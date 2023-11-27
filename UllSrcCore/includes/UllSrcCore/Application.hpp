#pragma once

namespace UllSrc {

	class Application {

	public:
		Application();
		virtual ~Application();

		Application(const Application&) = delete;
		Application(Application&&) = delete;
		Application& operator=(const Application&) = delete;
		Application& operator=(const Application&&) = delete;

		virtual int start(unsigned int window_width, unsigned int window_height, const char* title);

		virtual void on_update() {};
	};
}