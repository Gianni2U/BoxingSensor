int analogPin = A0;
bool pressed;
int limit_value = 1;
int pressure = 0;
int strike_accumulation = 0;
int strikes= 0;

unsigned long Time = 0;
unsigned long previousTime = 0;
int seconds = 0;
int interval = 10000;

void setup() {
  Serial.begin(9600);
}
void loop() {
 Time = millis();
 pressure = analogRead(A0);
  if(pressed == false){
    if(pressure < limit_value){
      pressed = true;
    }
  }
  if(pressure > limit_value){
    if(pressed == true){
    strike_accumulation++;
    strikes++;
    pressed = false;
    Serial.println(strike_accumulation);
    }
  }
 if(Time - previousTime >= interval)
      {
      seconds++;
      Serial.println(strikes);
      strikes=0;
      previousTime = Time;
      }
}
