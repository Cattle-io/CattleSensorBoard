#include "Arduino.h"
#include "SensorMQ4.h"




/**
 * ------------------------------------------------------
 * -- LED :: CONSTRUCTORS
 * ------------------------------------------------------
 * */ 
SensorMQ4::SensorMQ4(uint8_t pin) {
    $pin = pin;
};

void SensorMQ4::init(void) {
    
};

bool SensorMQ4::read(void) {
    int raw_adc = analogRead($pin);
    float ppm = (10000.0 / 4096.0) * raw_adc + 200.0;
    $methane = ppm;
    return true;
};

/**
 * ------------------------------------------------------
 * -- SensorMQ4 ::Setters 
 * ------------------------------------------------------
 * */ 

void SensorMQ4::setPin(uint8_t pin){
    $pin = pin;
};



/**
 * ------------------------------------------------------
 * -- SensorMQ4 ::Getters
 * ------------------------------------------------------
 * */   

float SensorMQ4::getMethane(void){
    return $methane;
}




/**
 * ------------------------------------------------------
 * -- SensorMQ4 :: Private Methods
 * ------------------------------------------------------
 * */   



