#include <Arduino.h>
#include <M5Stack.h>

bool btnAPressed = false;
bool btnBPressed = false;
bool btnCPressed = false;

void setup() {
    M5.begin();
    M5.Power.begin();
    M5.Lcd.fillScreen(BLUE);
    M5.Lcd.fillEllipse(160, 100, 60, 100, PINK);

    delay(500);

    M5.Lcd.fillScreen(BLACK);
    M5.Lcd.print("Ready to test");
}

void loop() {
    M5.update();
    btnAPressed = M5.BtnA.wasPressed();
    btnBPressed = M5.BtnB.wasPressed();
    btnCPressed = M5.BtnC.wasPressed();

    if (btnAPressed) {
        // For file "test1.txt"
    }

    if (btnBPressed) {
        // For file "test2.txt"
    }

    if (btnCPressed) {
        M5.Lcd.clearDisplay();
        M5.Lcd.setCursor(0,0);
    }

    delay(20);
}

