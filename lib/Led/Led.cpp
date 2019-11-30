#include "Arduino.h"
#include "Led.h"


/**
 * ------------------------------------------------------
 * -- LED :: CONSTRUCTORS
 * ------------------------------------------------------
 * */ 
Led::Led(void){
    pinMode(D0, OUTPUT); 
};

Led::Led(string name, uint8_t pin, bool state){

    $pin = pin;
    $name = name;
    $state = state;

    pinMode($pin, OUTPUT); 
};

Led::~Led(){

};



/**
 * ------------------------------------------------------
 * -- LED ::SETTERS
 * ------------------------------------------------------
 * */ 

void Led::setPin(uint8_t pin){
    $pin = pin;
};

void Led::setState(bool state){
    $state = state;
    if(state){
       digitalWrite($pin, HIGH); 
    }else{
       digitalWrite($pin, LOW); 
    }
    
};

void Led::setName(string name){
    $name = name;
};

void Led::setDescription(string description){
    $description = description;
};

void Led::setIsBlinking(bool isBliking){
    $isBliking = isBliking;
};

void Led::setBlinkingMiliSeconds(int miliSeconds){
    $blinkingMiliSeconds = miliSeconds;
};





/**
 * ------------------------------------------------------
 * -- LED ::GETTERS
 * ------------------------------------------------------
 * */   

uint8_t Led::getPin(){
    return $pin;
};
bool Led::getState(){
    return $state;
};
string Led::getName(){
    return $name;
};
string Led::getDescription(){
    return $description;
};
bool Led::getIsBlinking(){
    return $isBliking;
};
int Led::getBlinkingMiliSeconds(){
    return $blinkingMiliSeconds;
};



/**
 * ------------------------------------------------------
 * -- LED :: ON/OFF
 * ------------------------------------------------------
 * */ 

void Led::on(){
    digitalWrite(D0, HIGH); 

/*
    if(this->$isBliking){
        //TODO NON BLOCKING LOOP
        this->setState(true);
    }else{
        this->setState(true);
    } 
*/
};

void Led::off(){

    digitalWrite(D0, LOW); 
    /*
    if(this->$isBliking){
        //TODO NON BLOCKING LOOP
        this->setState(false);
    }else{
        this->setState(false);
    } 
    */
};
