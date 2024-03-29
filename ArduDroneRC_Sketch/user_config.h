/*
 *  user_config.h
 *  Ardu.Drone RC V0.2.2
 *
 *  Created by nosaari on 16.02.11.
 *  (Based on RC Ar.Drone V2.1 by Mheeli at rcgroups.com)
 *
 *  Arduino sketch to control AR.Drone with your RC controller
 *  by connecting it to the drone with an arduino board.
 *
 */
 
#ifndef USER_CONFIG_H
#define USER_CONFIG_H

//#define DEBUG_LOG_SERIAL          // Enable this when connected to computer and
                                    // doing setup. Disable when connected to drone.

#define DEBUG_LED                   // Enable this to get additional state signals
                                    // from a LED. Helpful if not using FTDI breakout.
                                    
#define LEDPIN          13          // The PIN to control the LED, 13 is the default 
                                    // onboard LED of the Arduino Pro Mini
                                    
                                    
                                    
                                    // TODO: Fix /bin/wifi_setup.sh so local connection
                                    // from atcomproxy are always accepted even when paired!
                                    
#define PAIR_MAC        "00:00:00:00:00:00"
                                    // Enter a MAC address the drone should get paired
                                    // with. This could e.g. be the one from your computer
                                    // so you still have access to the drone to 
                                    // configure it. If you just want to block access
                                    // simply enter a random MAC.


/**
 *  BASIC
 *
 *  Flight parameter and drone settings
 */

// Configuration for OUTDOOR setting
#define OUT_YAW_RATE        4       // YAW rate. Range 0-6 whole number no decimal,
                                    // default 5
#define OUT_THROTTLE_RATE   1500    // Throttle rate. Range 0-20000, whole number,
                                    // no decimal
#define OUT_PITCH_ROLL_RATE 3       // Pitch-roll rate. Range 0-5, whole number
                                    // no decimal ie 0,1,2,3,4 or 5 only

#define OUT_ALTITUDE_MAX    10000   // Maximum drone altitude in millimeters. 
                                    // Give an integer value between 500 and 5000
                                    // to prevent the drone from flying above this 
                                    // limit, or set it to 10000 to let the drone 
                                    // fly as high as desired

// Configuration for INDOOR setting
#define IN_YAW_RATE        4        // YAW rate. Range 0-6 whole number no decimal,
                                    // default 5
#define IN_THROTTLE_RATE   1500     // Throttle rate. Range 0-20000, whole number,
                                    // no decimal
#define IN_PITCH_ROLL_RATE 2        // Pitch-roll rate. Range 0-5, whole number
                                    // no decimal ie 0,1,2,3,4 or 5 only

#define IN_ALTITUDE_MAX    4000     // Maximum drone altitude in millimeters. 
                                    // Give an integer value between 500 and 5000
                                    // to prevent the drone from flying above this 
                                    // limit, or set it to 10000 to let the drone 
                                    // fly as high as desired



/**
 *  WIRING
 *
 *  To what pins is your controller connected to the arduino
 */
#define THROTTLEPIN     12 // Radio CH3
#define ROLLPIN         10 // Radio CH1
#define PITCHPIN        5 // Radio CH2
#define YAWPIN          3 // Radio CH4
#define AUX1PIN         9 // Radio CH5
#define AUX2PIN         7 // Radio CH6


/**
 *  INPUT
 *
 *  Settings depending on your RC gear
 */

// Input dead zones, max value is 400
#define RC_DEADZONE_THROTTLE    60
#define RC_DEADZONE_ROLL        20
#define RC_DEADZONE_PITCH       20
#define RC_DEADZONE_YAW         30

// How long to wait for a single signal while polling all channels.
// Set this to 20000 - 30000 for regular rc receivers.
#define RC_INPUT_TIMEOUT    20000

// These values _should_ be ok but you can customize them to better
// suit your rc receiver.
// Center is usually around 1500
#define RC_INPUT_CENTER 1490

// Max usually ~2000, min ~900-1000
#define RC_ROLL_MAX     2050
#define RC_ROLL_MIN     930

#define RC_PITCH_MAX    2050
#define RC_PITCH_MIN    930

#define RC_THROTTLE_MAX 2050
#define RC_THROTTLE_MIN 930

#define RC_YAW_MAX      2050
#define RC_YAW_MIN      930

#endif
