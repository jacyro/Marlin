/**
 * OULWARE
 */

#ifndef __SAM3X8E__
  #error "Oops!  Make sure you have 'Arduino Due' selected from the 'Tools -> Boards' menu."
#endif

#define BOARD_NAME "OULWARE"
#define DEFAULT_WEBSITE_URL "http://www.oulware.org/index.php/Printer_Controller"

//
// Servos
//
#define SERVO0_PIN         -1
#define SERVO1_PIN         -1
#define SERVO2_PIN         -1
#define SERVO3_PIN         -1

//
// Limit Switches
//
#define X_MIN_PIN          54
#define X_MAX_PIN          55
#define Y_MIN_PIN          56
#define Y_MAX_PIN          57
#define Z_MIN_PIN          58
#define Z_MAX_PIN          59

//
// Z Probe (when not Z_MIN_PIN)
//
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN  -1
#endif

//
// Steppers
//
#define X_STEP_PIN         38
#define X_DIR_PIN          36
#define X_ENABLE_PIN       40
#ifndef X_CS_PIN
  #define X_CS_PIN         34
#endif

#define Y_STEP_PIN         28
#define Y_DIR_PIN          26
#define Y_ENABLE_PIN       30
#ifndef Y_CS_PIN
  #define Y_CS_PIN         32
#endif

#define Z_STEP_PIN         23
#define Z_DIR_PIN          29
#define Z_ENABLE_PIN       25
#ifndef Z_CS_PIN
  #define Z_CS_PIN         27
#endif

#define E0_STEP_PIN        44
#define E0_DIR_PIN         42
#define E0_ENABLE_PIN      46
#ifndef E0_CS_PIN
  #define E0_CS_PIN        48
#endif

#define E1_STEP_PIN        33
#define E1_DIR_PIN         31
#define E1_ENABLE_PIN      35
#ifndef E1_CS_PIN
  #define E1_CS_PIN        37
#endif

#define E2_STEP_PIN        41
#define E2_DIR_PIN         39
#define E2_ENABLE_PIN      43
#ifndef E2_CS_PIN
  #define E2_CS_PIN        45
#endif

//
// Temperature Sensors
//
#define TEMP_0_PIN          9   // Analog Input
#define TEMP_1_PIN         10   // Analog Input
#define TEMP_BED_PIN       11   // Analog Input

// SPI for Max6675 or Max31855 Thermocouple
#define MAX6675_SS         47

//
// Heaters / Fans
//
#define HEATER_0_PIN        7
#define HEATER_1_PIN        6
#define HEATER_2_PIN        9   // AUX PIN
#define HEATER_BED_PIN      8   // BED

#define FAN_PIN            10
#define FAN1_PIN           11
#define FAN2_PIN           12
#define FAN3_PIN           13

//
// Misc. Functions
//
#define SDSS                4
//#define PS_ON_PIN          -1

//#ifndef FIL_RUNOUT_PIN
//  #define FIL_RUNOUT_PIN   -1
//#endif

//
// LCD / Controller
//
#if ENABLED(ULTRA_LCD)
  #error "No LCD support at the moment!"
#endif // ULTRA_LCD
