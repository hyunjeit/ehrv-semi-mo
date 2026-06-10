#pragma once

#include "AWindow.h"
#include <map>
#include <memory>
#include <string>

namespace csopesy {

class UIManager {
public:
    static UIManager& getInstance();

    void initialize();

    void registerWindow(const std::string& name, std::shared_ptr<AWindow> window);
    void showWindow(const std::string& name);
    void hideWindow(const std::string& name);

    void renderAllWindows();

    void requestShutdown();
    bool isShutdownRequested() const;

private:
    UIManager() = default;

    std::map<std::string, std::shared_ptr<AWindow>> windows;
    bool m_shutdownRequested = false;
};

} // namespace csopesy