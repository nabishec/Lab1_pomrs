
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _CYCLIC ProgramCyclic(void)
{	
	
	//Speed = 10;
	if (Enable)
	{
		cnt += 1;
		if (cnt >= 10 && cnt <= pulse_width)
		{
			Speed = 5;
		}
		else
		{
			Speed = 0;
		//	u_unreg = 0;
		}
		
		e = Speed*3.14/30 - fb_motor.w;
		fb_regulator.e = e;
		FB_Regulator(&fb_regulator);
		fb_motor.u = fb_regulator.u * fb_motor.ke;
		fb_motor_unreg.u = Speed*3.14/30*fb_motor.ke;
		FB_Motor(&fb_motor_unreg);
		FB_Motor(&fb_motor);
		exit_speed = fb_motor.w*(30/3.14); 
		exit_speed_unreg = fb_motor_unreg.w*(30/3.14);
	}
	else
	{
		cnt = 0;
	}
}
