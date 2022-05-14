#if !defined(__SOFT_FP__) && defined(__ARM_FP)
#warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include "own_drivers_and_func.h"
#include <stdio.h>

static void start(void);			   
static void wiperon(void);
static void wiperspeedwhenon(void);		   
static void wiperoff(void);  
static void stop(void); 

static void start(void)
{
	led_on(LED_RED);
}

static void wiperon(void) 
{

	led_on(LED_BLUE);
	my_delay_ms(350);
	led_off(LED_BLUE);
	my_delay_ms(350);
	led_on(LED_GREEN);
	my_delay_ms(350);
	led_off(LED_GREEN);
	my_delay_ms(350);
	led_on(LED_ORANGE);
	my_delay_ms(350);
	led_off(LED_ORANGE);
	my_delay_ms(350);
	led_on(LED_GREEN);
	my_delay_ms(350);
	led_off(LED_GREEN);
	my_delay_ms(350);
	led_on(LED_BLUE);
	my_delay_ms(350);
	led_off(LED_BLUE);
	my_delay_ms(350);
	led_on(LED_GREEN);
	my_delay_ms(350);
	led_off(LED_GREEN);
	my_delay_ms(350);
	led_on(LED_ORANGE);
	my_delay_ms(350);
	led_off(LED_ORANGE);
	my_delay_ms(350);
}

static void wiperspeedwhenon(void) 
{

	led_on(LED_BLUE);
	my_delay_ms(300);
	led_off(LED_BLUE);
	my_delay_ms(300);
	led_on(LED_GREEN);
	my_delay_ms(300);
	led_off(LED_GREEN);
	my_delay_ms(300);
	led_on(LED_ORANGE);
	my_delay_ms(300);
	led_off(LED_ORANGE);
	my_delay_ms(300);
    led_on(LED_GREEN);
	my_delay_ms(300);
	led_off(LED_GREEN);
	my_delay_ms(300);
	led_on(LED_BLUE);
	my_delay_ms(300);
	led_off(LED_BLUE);
	my_delay_ms(300);
	led_on(LED_GREEN);
	my_delay_ms(300);
	led_off(LED_GREEN);
	my_delay_ms(300);
	led_on(LED_ORANGE);
	my_delay_ms(300);
	led_off(LED_ORANGE);
    my_delay_ms(300);


}
static void wiperoff(void) 
{

	led_on(LED_BLUE);
	my_delay_ms(300);
	led_off(LED_BLUE);
	my_delay_ms(300);
	led_on(LED_GREEN);
	my_delay_ms(300);
	led_off(LED_GREEN);
	my_delay_ms(300);
	led_on(LED_ORANGE);
	my_delay_ms(300);
	led_off(LED_ORANGE);
	my_delay_ms(300);
    led_on(LED_GREEN);
	my_delay_ms(300);
	led_on(LED_GREEN);
	my_delay_ms(300);
	led_on(LED_BLUE);
	my_delay_ms(300);
	led_off(LED_BLUE);



}

static void stop(void) 
{
	led_off(LED_RED);
}

int main(void)
{

	led_init_all();
	button_init();

	while (1)
	{
		int btncnt = btn_press();
		volatile int encrypredData = Encryption(btncnt);
		if (encrypredData == 1244)
		{ 
			start();
			btncnt = 0;
		}
		else if (encrypredData == 6789)
		{ 
			wiperon();
			btncnt = 0;
		}
		else if (encrypredData == 6789)
		{ 
			wiperspeedwhenon();
            btncnt = 0;
		}
		else if (encrypredData == 5478)
		{ 
			wiperoff();
			btncnt = 0;
		}
		else if(encrypreData == 1843)
		{
			stop();
			btncnt = 0;
		}
	}
}
 