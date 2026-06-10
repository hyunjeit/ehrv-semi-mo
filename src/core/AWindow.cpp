#include "AWindow.h"
#include "imgui.h"

namespace csopesy {

AWindow::AWindow(const std::string& name)
    : windowName(name)
    , isVisible(false)
{
}

void AWindow::show() {
    isVisible = true;
}

void AWindow::hide() {
    isVisible = false;
}

bool AWindow::isShown() const {
    return isVisible;
}

const std::string& AWindow::getName() const {
    return windowName;
}

bool AWindow::beginWindow() {
    if (!isVisible) return false;
    ImGui::Begin(windowName.c_str(), &isVisible);
    return true;
}

void AWindow::endWindow() {
    ImGui::End();
}

} // namespace csopesy