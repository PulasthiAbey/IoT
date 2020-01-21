#include "HX711.h"
#define calibration_factor 895000
#define DOUT D1
#define CLK D2

HX711 scale(DOUT, CLK);

void stup(){
    Serial.begin(115200);
    Serial.println("Calibrate");
    scale.set_scale(calibration_factor);
    scale.tare();
    Serial.print("OK");
  }

 void loop(){
    Serial.print("Reading");
    Serial.print(scale.get_units(), 3);
    Serial.print("Kg");
  }
  
