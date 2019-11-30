#include "Utils.h"
#include <Arduino.h>

/**
 * ------------------------------------------------------
 * -- Utils :: CONSTRUCTORS
 * ------------------------------------------------------
 * */ 
Utils::Utils() {

};

/**
 * ------------------------------------------------------
 * -- Utils :: Misc
 * ------------------------------------------------------
 * */ 
float Utils::getRandomNumber(float min, float max){
    return ((float)rand() / RAND_MAX) * (max - min) + min;
};
