const int LEFT=1;
const int RIGHT=2;

const int LED_OFFSET=2;
const int SHOCKER_OFFSET=4;

void setup() {                
// Turn the Serial Protocol ON
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);

  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);

  digitalWrite(2,HIGH);
}

void loop() { 
   /*  check if data has been sent from the computer: */
  boolean data=false;
  if (Serial.available()) {
    /* read the most recent byte */
    int port = Serial.parseInt();
    
    if (port==LEFT || port==RIGHT) {
       digitalWrite(port+LED_OFFSET,HIGH);
       digitalWrite(port+SHOCKER_OFFSET,HIGH);
       data=true;
       // shocker requires voltage for at least 5µs to activate
       delayMicroseconds(10);
       digitalWrite(port+SHOCKER_OFFSET,LOW);
    }
  }
  if (!data) {
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
  }
}

