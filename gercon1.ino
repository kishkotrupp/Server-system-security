
#define sig A0
#define pin_ger A1
#define mosfet 2

void setup() {
  pinMode(sig, INPUT);
  pinMode(mosfet, OUTPUT);
  pinMode(pin_ger, INPUT);
  Serial.begin(9600);
}

void loop() {

  int  anal_sig = analogRead (pin_ger);
  int  x = analogRead (sig);
  if (anal_sig > 500) {
    digitalWrite(mosfet, true);
  }
  else {
    digitalWrite(mosfet, false);

  }
   Serial.println(x);
}
