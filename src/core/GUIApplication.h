#pragma once

#include <memory>

struct GLFWwindow;

namespace csopesy {

class Desktop;

class GUIApplication {
public:
    GUIApplication();
    ~GUIApplication();

    bool initialize();
    void run();

private:
    void bootstrap();
    void kernelInit();
    void startSystemServices();
    void mainLoop();
    void shutdown();

    GLFWwindow* m_window = nullptr;
    std::shared_ptr<Desktop> m_desktop;
};

} // namespace csopesy