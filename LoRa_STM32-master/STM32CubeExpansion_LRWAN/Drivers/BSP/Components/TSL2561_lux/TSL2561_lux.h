#ifndef __TSL2561_LUX_H__
#define __TSL2561_LUX_H__

#include "hw.h"

unsigned int CalculateLux(unsigned int iGain, unsigned int tInt, unsigned int ch0,unsigned int ch1, int iType);

#endif