#include <ControlPanel.h>

void setup() {
    Serial.begin(115200);
    CP.begin();
}

void loop() {
    CP.loop();
}
