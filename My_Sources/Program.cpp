#include <Program.h>
#include <main.h>
#include <string.h>
#include <stdio.h>
#include "pins.h"


void program();

extern "C"
{
	void start_program()
	{
		program();
	}
}

void program()
{
	while (1)
	{
		//printf("Hello world!\n");
		//int time = HAL_GetTick();	//millis()
		//HAL_Delay(10); //delay(ms)
		led_toggle();
		HAL_Delay(500);
	}
}