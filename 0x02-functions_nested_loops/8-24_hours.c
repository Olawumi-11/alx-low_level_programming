#include "main.h"

/**
 * jack_bauer - prints every minutes of the day
 *
 * Description:prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{

		int hours_tens, hours_ones, minutes_tens, minutes_ones, hours_max;

		hours_max = 58;
		hours_tens = '0';
		while (hours_tens < '3')
		{
			if (hours_tens == '2')
			{
				hours_max = '4';
			}
			hours_ones = '0';
			while (hours_ones < hours_max)
			{
				minutes_tens = '0';
				while (minutes_ones 
