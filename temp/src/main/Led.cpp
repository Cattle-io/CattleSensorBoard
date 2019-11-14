#include "Arduino.h"

using namespace std;  

class Led {  

   public:

        Led(void);
        Led(string, int, bool);
        ~Led();

        void on();
        void off();
        
        void setPin(int);
        void setState(bool);
        void setName(string);
        void setDescription(string);
        void setIsBlinking(bool);
        void setBlinkingMiliSeconds(int);

        int getPin();
        bool getState();
        string getName();
        string getDescription();
        bool getIsBlinking();
        int getBlinkingMiliSeconds();

   private:  

        int  $pin;
        int  $blinkingMiliSeconds;
        bool $state;
        bool $isBliking;
        string $name;      
        string $description;

};  




/**
 * ------------------------------------------------------
 * -- LED :: CONSTRUCTORS
 * ------------------------------------------------------
 * */ 
Led::Led(void){

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
    pinMode(D0, OUTPUT); 
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
    if(this->$isBliking){
        //TODO NON BLOCKING LOOP
    }else{
        this->setState(true);
    } 
};

void Led::off(){
    if(this->$isBliking){
        //TODO NON BLOCKING LOOP
    }else{
        this->setState(false);
    } 
};
