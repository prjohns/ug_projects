void setup() {
  SerialUSB.begin(57600);
  Serial1.begin(57600);
}

void loop() {
  while (SerialUSB.available()) {// If anything comes in Serial (USB),
    SerialUSB.read();            // flush Serial's read buffer, we don't care about it
  }

  while (Serial1.available()) {     // If anything comes in Serial1 (pins 0 & 1)
    SerialUSB.write(Serial1.read());// read it and send it out Serial (USB)
  }
}
