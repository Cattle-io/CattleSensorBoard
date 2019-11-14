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

Led::Led(string name, int pin, bool state){
    this->$pin = pin;
    this->$name = name;
    this->$state = state;
};

Led::~Led(){

};



/**
 * ------------------------------------------------------
 * -- LED ::SETTERS
 * ------------------------------------------------------
 * */ 

void Led::setPin(int pin){
    $pin = pin;
    switch (pin){

        case 0:
            pinMode(D0, OUTPUT); 
            break;
        case 1:
            pinMode(D1, OUTPUT); 
            break;
        default:
            pinMode(D0, OUTPUT); 
            break;
    }
 
};

void Led::setState(bool state){
    $state = state;
    if(state){
       digitalWrite(D0, HIGH); 
    }else{
       digitalWrite(D0, LOW); 
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

int Led::getPin(){
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
