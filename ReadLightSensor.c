/*
 \file		ReadLightSensor.c
 \author	Mohammad Habib Shah Ershad Bin Mohd Azrul Shazril
 \date		2/7/2022
 \brief		EV3 robot read reflective light from light sensor and stop when detect black
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

		OnFwdReg(OUT_BC,90);
		Wait(MS_500);

		if (readSensor(IN_3)<= 10)
		{
			Off(OUT_BC);
			break;
		}
	}


	return 0;
}
