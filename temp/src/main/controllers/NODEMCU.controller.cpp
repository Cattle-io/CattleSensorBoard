#include <iostream>
#include "Arduino.h"

using namespace std;  

#define LED D0 

class NodeMCU {  


   public:
        NodeMCU(void);
        void setDigitalOut(int,bool);

};  




/**
 * ------------------------------------------------------
 * -- NodeMCU :: CONSTRUCTORS
 * ------------------------------------------------------
 * */ 
NodeMCU::NodeMCU(void){

};



/**
 * ------------------------------------------------------
 * -- NodeMCU :: OUTPUS
 * ------------------------------------------------------
 * */ 
void setDigitalOut(int pin_number,bool output_value){
    digitalWrite(LED, HIGH);
};