// -*- tab-width: 4, Mode: C++; c-basic-offset: 4; indent-tabs-mode: nil -*-
#include "Rover.h"



void Rover::update_tractor_health(){
    
    int buff_len;
    
    buff_len = hal.uartE->available();
    for(int i = buff_len; i>=0; i--){
        if(5 > i){
            tractor_health_info[i] = hal.uartE->read();
           // hal.uartE->printf("i = %d tractor_health_info[i] = %c \n", i, tractor_health_info[i]);
        }else{
            hal.uartE->read();
        }
    }
    
    //hal.uartE->printf("Read Tractor Health it is.....\n");
    //hal.uartE->printf(tractor_health_info);
    
    
}
