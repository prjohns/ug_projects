int i = 0;
double reading = 0;
unsigned long timer;
unsigned long last_time = 0;
#define TEST_NUM 1
int addresses_to_test[TEST_NUM];

void setup() {
  // put your setup code here, to run once:
  SerialUSB.begin(1234);
  analogReadResolution(12);

  for(int i = 0; i< TEST_NUM; i++){
    addresses_to_test[i] = i;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long dt = 0;
  unsigned long start_time;
  int value;
  for(int addr: addresses_to_test) {
    start_time = micros();
    value = analogRead(addr);
    dt += (micros() - start_time);
    reading += value;
    i++;
  }
  timer += dt;
  if (timer >= 1000000) {
    timer = 0;
    SerialUSB.print(reading/i);
    SerialUSB.print('\t');
    SerialUSB.println(i);
    reading = 0;
    i = 0;
  }
}
