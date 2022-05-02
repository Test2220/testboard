void setup() {
    Wire.begin(4);
    Wire.onReceive(receiveEvent);
}

void loop() {

}

void receiveEvent() {
    
}