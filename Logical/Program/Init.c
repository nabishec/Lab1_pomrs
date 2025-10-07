
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	Enable = 0;
	Speed = 0;
	pulse_width = 50;
	
	fb_motor.dt=0.02;
	fb_motor.ke=43.3;
	fb_motor.Tm=0.17;
	
	fb_motor_unreg.dt = 0.02;
	fb_motor_unreg.ke=43.3;
	fb_motor_unreg.Tm=0.17;
	
	fb_regulator.dt = 0.02;
	fb_regulator.k_p = 7.361;//3.804;
	fb_regulator.k_i =43.3;
	fb_regulator.max_abs_value = 24;
	
}
