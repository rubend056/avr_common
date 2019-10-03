#ifndef AVR_PINS
#define AVR_PINS



#include "b_opp.h"

// *****************SHORT EXPLANATION OF DDR, PORT, and PIN registers***************
// DDR stands for Data Direction Register, if 1, the pin is output, if 0, pin is input
// PORT (write) is basically a register whether the pin is connected to ground or positive
// PIN (read) is basically a register whether the pin is currently high or low, 
//   currently unsure if the DDR needs to be low for this to work, 
//   my guess it doens't and you can read it regardless

// Set the data direction register
#define _SET_DDR(l,s) SET(DDR##l, s)
#define SET_DDR(l,s) _SET_DDR(l,s)

// Set the PORT, wether it's 5V or Ground(output), enable pullup or not(input)
#define _SET_PORT(l,s) SET(PORT##l, s)
#define SET_PORT(l,s) _SET_PORT(l,s)

#define _TOG_PORT(l,s) TOG(PORT##l, s)
#define TOG_PORT(l,s) _TOG_PORT(l,s)
// Clear the data direction register
#define _CLR_DDR(l,s) CLR(DDR##l, s)
#define CLR_DDR(l,s) _CLR_DDR(l,s)
// Clear the PORT, wether it's 5V or Ground(output), enable pullup or not(input)
#define _CLR_PORT(l,s) CLR(PORT##l, s)
#define CLR_PORT(l,s) _CLR_PORT(l,s)

// EITHER SET OR CLR
// Set the data direction register
#define _SET_OR_CLR_DDR(l,s, t) SET_OR_CLR(DDR##l, s, t)
#define SET_OR_CLR_DDR(l,s, t) _SET_OR_CLR_DDR(l,s, t)
// Set the PORT, wether it's 5V or Ground(output), enable pullup or not(input)
#define _SET_OR_CLR_PORT(l,s, t) SET_OR_CLR(PORT##l, s, t)
#define SET_OR_CLR_PORT(l,s, t) _SET_OR_CLR_PORT(l,s, t)

// Get teh PIN, wether the pin is 5v or not
#define _GET_PINI(l,s) GETI(PIN##l, s)
#define GET_PINI(l,s) _GET_PINI(l,s)


#endif