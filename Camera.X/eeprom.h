/*
 * File:   eeprom.h
 * Author: bienphongvnn
 *
 * Created on September 22, 2015, 3:33 PM
 */

#ifndef EEPROM_H
#define	EEPROM_H

#include "SPI.h"
void EEPROMWrite(WORD add, BYTE data);
BYTE EEPROMRead(WORD add);
void EEPROMReadArray(WORD add, BYTE * buffer, WORD len);
void EEPROMSave(WORD add1,WORD add2,BYTE data[]);
#endif	/* EEPROM_H */

