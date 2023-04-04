const int buzzerPin = 7;
const int sensorPin = 3;
int sensorVal;
//write a part of the notes of cowboy bebop openning
int notes[] = {262, 392, 392, 370, 349, 311, 329.63, 233, 262, 392, 392, 370, 349, 311, 329.63, 233}; // frequency of notes in Hz
//write the beat of the notes
int duration = 220;

void setup(){
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  pinMode(sensorPin, INPUT);
}

void loop (){
  sensorVal = digitalRead(sensorPin);

//check if the sensor works
 // Serial.print("Sensor Value:");
 // Serial.println(sensorVal);
//the sensitivity of the sensor
  if (sensorVal == 1) {
    melody();
    delay(1000);
  }
}

void melody() {
  for (int i = 0; i < 16; i++) {
    tone(buzzerPin, notes[i], duration);
    delay(duration);
  }
}