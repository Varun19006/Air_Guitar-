#define trigPin 9
#define echoPin 10
#define buzzer 8

long duration;
int distance;

void setup() {
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(buzzer, OUTPUT);
 Serial.begin(9600);
}

void loop() {
 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);

 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);

 duration = pulseIn(echoPin, HIGH);
 distance = duration * 0.034 / 2;

 Serial.println(distance);

 if(distance > 2 && distance < 8)
 tone(buzzer, 262); // C

 else if(distance >=8 && distance <12)
 tone(buzzer, 294); // D

 else if(distance >=12 && distance <16)tone(buzzer, 330); // E

 else if(distance >=16 && distance <20)
 tone(buzzer, 349); // F

 else if(distance >=20 && distance <25)
 tone(buzzer, 392); // G

 else
 noTone(buzzer);

 delay(100);
}
