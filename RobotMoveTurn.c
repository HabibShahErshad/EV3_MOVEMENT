/*
 \file		RobotMoveTurn.c
 \author	Mohammad Habib Shah Ershad Bin Mohd Azrul Shazril
 \date		2/7/2022
 \brief		Simple move forward and turn
*/

#include <ev3.h>

void moveforward(int forward)
{
	RotateMotor(OUT_BC, 50, forward);
}

void turn(int angle)
{
	RotateMotorEx(OUT_BC, 50, angle, 200 , true, true);
}

int main(void)
{

	int distance = 30;
	int angle = 90;

	distance = (distance/17.28)*360;
	angle = 2.55 * angle;

	moveforward(distance);
	turn(angle);
	moveforward(distance);
	turn(angle);
	moveforward(distance);
	turn(angle);
	moveforward(distance);
	turn(angle);

	return 0;
}
