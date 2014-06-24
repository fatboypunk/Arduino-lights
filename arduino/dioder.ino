const int pinRed = 4;
const int pinGreen = 3;
const int pinBlue = 2;

void setup() {
  // set pins 2 through 13 as outputs:
  for (int thisPin = pinBlue; thisPin <= pinRed; thisPin++) {
    pinMode(thisPin, OUTPUT); 
    analogWrite(thisPin, 0);
  }
  Serial.begin(9600);  
}

void loop () {
  
  int availableBytes = Serial.available();
  
  if (availableBytes >= 12) {
     for (int thisPin = pinBlue; thisPin <= pinRed; thisPin++) { 
       analogWrite(thisPin, Serial.read());
     }
  }
}
