#ifndef CONTROL_PANEL_H
#define CONTROL_PANEL_H

#include <Arduino.h>

class ControlPanel {
public:
    ControlPanel();
    void begin();
    void loop();
};

extern ControlPanel CP;

#endif
