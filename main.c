/*
 * main.c
 *
 *  Created on: Apr 5, 2024
 *      Author: Toa Fekry
 */


#include <util/delay.h>

#include "HAL/LED/Header/Led_Interface.h"




void main()
{

	 Led_Init(LedGroup2,Led1);

	 while(1)
	 {
		 Led_On(LedGroup2,Led2);
		 _delay_ms(100);
		 Led_Toggle(LedGroup2,Led3,100);
		 _delay_ms(100);
	 }

}
