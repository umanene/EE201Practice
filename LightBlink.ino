//https://wokwi.com/projects/345980535389028946
#define LED 2 // LED on pin 2
#define POT A0 // Potentiometer on pin A0

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(POT, INPUT);
  Serial.begin(9600);

}

 int delayTime;
void loop() {
  // put your main code here, to run repeatedly:
  int potStatus = analogRead(POT);

  Serial.println("pot and delay");
  Serial.println(potStatus);
 

  if(potStatus == 0){
    delayTime = 5000;
  } else {
    delayTime = round((200000 * (1.0/potStatus)) + 300);
  }

  Serial.println(delayTime);

  digitalWrite(2, HIGH);
  delay(delayTime);
  digitalWrite(2, LOW);
  delay(delayTime);



}
