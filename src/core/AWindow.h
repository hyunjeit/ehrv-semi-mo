#pragma once

#include <string>

namespace csopesy {

class AWindow {
public:
    explicit AWindow(const std::string& name);
    virtual ~AWindow() = default;

    virtual void draw() = 0;

    void show();
    void hide();
    bool isShown() const;

    const std::string& getName() const;

protected:
    bool beginWindow();
    void endWindow();

    std::string windowName;
    bool isVisible;
};

} // namespace csopesy