#define LED_PIN 7

void setup() {
    pinMode(LED_PIN, OUTPUT); 
}

void loop() {
    // 1초 동안 LED 켜기
    digitalWrite(LED_PIN, HIGH); 
    delay(1000); // 1초 대기

    // LED 끄기 (확인 용도)
    digitalWrite(LED_PIN, LOW); 
    delay(500); 

    // 1초 동안 LED 5회 깜빡이기
    for (int i = 0; i < 5; i++) {
        digitalWrite(LED_PIN, HIGH); 
        delay(100); // 0.1초 대기
        digitalWrite(LED_PIN, LOW); 
        delay(100); // 0.1초 대기
    }

    digitalWrite(LED_PIN, 255);

  
    while (1) {
        
    }
}
