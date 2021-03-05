int analogPin = A0;
bool painettu;
int raja_arvo = 1;
int paine = 0;
int lyontikertyma = 0;
int lyonnit= 0;

unsigned long Aika = 0;
unsigned long mennytAika = 0;
int sekunnit = 0;
int intervaali = 10000;

void setup() {
  Serial.begin(9600);
}
void loop() {
 Aika = millis();
 paine = analogRead(A0);
  if(painettu == false){
    if(paine < raja_arvo){
      painettu = true;
    }
  }
  if(paine > raja_arvo){
    if(painettu == true){
    lyontikertyma++;
    lyonnit++;
    painettu = false;
    Serial.println(lyontikertyma);
    }
  }
 if(Aika - mennytAika >= intervaali)
      {
      sekunnit++;
      Serial.println(lyonnit);
      lyonnit=0;
      mennytAika = Aika;
      }
}
