#pragma once

#include "imgui.h"

namespace csopesy {

class UIConfig {
public:
    static UIConfig& getInstance();

    void calculateScaling(int monitorWidth, int monitorHeight);
    float getScaleFactor() const;
    ImVec2 scale(ImVec2 size) const;

private:
    UIConfig() = default;

    float scaleFactor = 1.0f;
};

} // namespace csopesy