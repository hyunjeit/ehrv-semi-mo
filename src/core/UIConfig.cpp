#include "UIConfig.h"
#include <algorithm>

namespace csopesy {

UIConfig& UIConfig::getInstance() {
    static UIConfig instance;
    return instance;
}

void UIConfig::calculateScaling(int monitorWidth, int monitorHeight) {
    (void)monitorHeight;
    float baseWidth = 1920.0f;
    float currentWidth = static_cast<float>(monitorWidth);
    scaleFactor = currentWidth / baseWidth;
    scaleFactor = std::clamp(scaleFactor, 1.0f, 2.0f);
}

float UIConfig::getScaleFactor() const {
    return scaleFactor;
}

ImVec2 UIConfig::scale(ImVec2 size) const {
    return ImVec2(size.x * scaleFactor, size.y * scaleFactor);
}

} // namespace csopesy