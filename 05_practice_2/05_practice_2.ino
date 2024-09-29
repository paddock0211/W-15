#define LED_PIN 7

void setup() {
    pinMode(LED_PIN, OUTPUT); 
}

void loop() {
    
    digitalWrite(LED_PIN, HIGH); 
    delay(1000); 

    
    digitalWrite(LED_PIN, LOW); 
    delay(500); 


    for (int i = 0; i < 5; i++) {
        digitalWrite(LED_PIN, HIGH); 
        delay(100); 
        digitalWrite(LED_PIN, LOW); 
        delay(100); 
    }

    digitalWrite(LED_PIN, 255);

  
    while (1) {
        
    }
}
