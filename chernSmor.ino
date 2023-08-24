// 228/229
#define sig A0
#define mosfet 2

unsigned long time_for_sig;

void setup() {
  pinMode(sig, INPUT);
  pinMode(mosfet, OUTPUT);
  // Serial.begin(9600);
}

void loop() {
  if (millis() - time_for_sig < 2000) {
    digitalWrite(mosfet, true);
  }
  millis();
  else {
    digitalWrite(mosfet, false);
  }
}
