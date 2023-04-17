void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // (1) Moving light 3 rounds
  for (int i=0; i<3; i++){  
    // From left to right               
    digitalWrite(1, HIGH);   
    delay(1000); 
    
    digitalWrite(2, HIGH);
    digitalWrite(1, LOW); 
    delay(1000);
    
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
    delay(1000);

    digitalWrite(4, HIGH);
    digitalWrite(3, LOW);
    delay(1000);

    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
    delay(2000);

    // From right to left
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(1000);

    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    delay(1000);

    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    delay(1000);

    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
    delay(1000);
  }

  // (2) SOS Morse code with green lights 
  // S
  for(int i=0; i<3; i++) {
    for (int i=0; i<3; i++) {
      digitalWrite(1, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(5, HIGH);
      delay(100);

      digitalWrite(1, LOW);
      digitalWrite(3, LOW);
      digitalWrite(5, LOW);
      delay(100);
    }
    delay (500);
    
    // O
    for (int i=0; i<3; i++) {
      digitalWrite(1, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(5, HIGH);
      delay(500);

      digitalWrite(1, LOW);
      digitalWrite(3, LOW);
      digitalWrite(5, LOW);
      delay(100);
    }
    delay(500);
    
    // S
    for (int i=0; i<3; i++) {
      digitalWrite(1, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(5, HIGH);
      delay(100);

      digitalWrite(1, LOW);
      digitalWrite(3, LOW);
      digitalWrite(5, LOW);
      delay(100);
    }
    delay(100);
  }

  // (3) Accelerating flickering speeds
  for (int i=0; i<10; i++) {
    int interval = 100-i*10;
    digitalWrite(1, HIGH);
    delay(interval);
    digitalWrite(1, LOW);
    delay(interval);
    
    digitalWrite(2, HIGH);
    delay(interval);
    digitalWrite(2, LOW);
    delay(interval);

    digitalWrite(3, HIGH);
    delay(interval);
    digitalWrite(3, LOW);
    delay(interval);

    digitalWrite(4, HIGH);
    delay(interval);
    digitalWrite(4, LOW);
    delay(interval); 

    digitalWrite(5, HIGH);
    delay(interval);
    digitalWrite(5, LOW);
    delay(interval);
  }

}
