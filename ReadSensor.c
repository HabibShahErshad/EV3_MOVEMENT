/*
 \file		ReadSensor.c
 \author	Mohammad Habib Shah Ershad Bin Mohd Azrul SHazril
 \date		2/7/1999
 \brief		Read reflective light from light sensor
*/

#include <ev3.h>

void init(){

	InitEV3(); //Declare library function
	setAllSensorMode(NO_SEN, NO_SEN, COL_REFLECT, NO_SEN); //set what input corresponds to what sensor
}

int main(void)
{

	char array[20];

	while(ButtonIsUp(BTNCENTER) == 0)
	{
		sprintf(array, "%d", readSensor(IN_3));

		TermPrintln("ReflectiveLight : %s",array);
	}


	return 0;
}
