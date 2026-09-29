#ifndef OLED_H_
#define OLED_H_

#include <stdint.h>

/* OLED I2C 7-bit Address (0x3C or 0x3D) */
#define OLED_I2C_ADDRESS    0x3C

/* Display Dimensions */
#define OLED_WIDTH          128
#define OLED_HEIGHT         64

/* Functions Declarations */
void OLED_Init(void);
void OLED_SendCommand(uint8_t command);
void OLED_SendData(uint8_t data);
void OLED_Clear(void);
void OLED_SetCursor(uint8_t page, uint8_t column);
void OLED_DisplayChar(char c);
void OLED_DisplayString(const char *str);

#endif /* OLED_H_ */