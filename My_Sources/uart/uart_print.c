#include "main.h"

extern UART_HandleTypeDef huart2;

int _write(int file, char* text, int len)
{
	HAL_UART_Transmit(&huart2, (uint8_t*)text, len, 1000);
}