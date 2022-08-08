/*
 * SC18IS606.h
 *
 *  Created on: Jul 25, 2022
 *      Author: bmkuzior
 */

#ifndef SC18IS606_H_
#define SC18IS606_H_

//This .h file requires customization for their purpose according to the SC18IS606 data Sheet. 
//(x.x.x) refer to section of data sheet

/*
 * ======== SC18IS606 Registers ==========
 */

#define bridge_config_fxn       0xF0;   //SC18 fxn id for SPI configuration
#define bridge_config           0x06;   //Change this value for SPI config (Table 5) 

#define clear_int               0xF1;   //Byte clears interrupt (7.1.6)

#define idle_mode               0xF2;   //SC18 fxn id for idle (7.1.7)

#define SC18_GPIO_WRITE_fxn     0xF4;   //SC18 fxn id for Gpio Write (7.1.8)
#define SC18_GPIO_WRITE         0x01;   // Three LSB bits control the SS2, SS1, SS0, set high and make appropriate Hex conversion

#define SC18_GPIO_READ_fxn      0xF5;   //SC18 fxn id for GPIO READ (7.1.9)
#define SC18_GPIO_READ          0x00;   //Config bits as referenced in TABLE 8

#define SC18_GPIO_ENABLE_FXN    0xF6;   //FXN id for GPIO enable
#define SC18_GPIO_ENABLE        0x01;   //Table 9, config bits as needed

#define SC18_GPIO_CONFIG_FXN    0xF7;   //FXN id byte for GPIO configuration
#define SC18_GPIO_CONFIG        0x00;   //Config bits as referenced in table 10 and 11

#define SC18_ADDR               0x28;   //7-bit Write address for SC18 I2C Tx function will handle read and write values (0x50)
#define SC18_R_ADDR             0x29;   //7-bit Read address

#define SC18_WRITE_EN           0x06;   //Write Enable Function ID for EEPROM on development board

#define SC18_CS                 0x04;   //chip select, 01-07

#endif /* SC18IS606_H_ */
