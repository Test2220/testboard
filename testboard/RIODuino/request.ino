#include <Wire.h>

int deviceCount = 3

byte devStats[deviceCount] = {}

void setup() {
    Serial.begin(9600)
    Wire.begin(4)
    Wire.onRequest(requestHandler)
}

void loop() {
    
}

void requestHandler() {
    Wire.write(devStats)
    Serial.println(devStats)
}
