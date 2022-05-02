void setup() {
    Wire.begin(4);
    Wire.onReceive(receiveEvent);
    Serial.begin(9600)
}

void loop() {

}

void receiveEvent(int howMany) {
     while (Wire.available()) {
          char n = (char)Wire.read()
          if (((int)n) > ((int)(' '))) {
              Serial.println(n)
              }
     }
}
