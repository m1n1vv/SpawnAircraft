#if defined SPAWNAIRCRAFT
	#endinput
#endif
#define SPAWNAIRCRAFT

#if !defined S_AIR__DISTANCE
	#define S_AIR__DISTANCE			(4000.0)
#endif

#if !defined S_AIR__FLIGHT
	#define S_AIR__FLIGHT			(450.0)
#endif

#if !defined floatrandom
	#define floatrandom(%0) (float(random(%0))+float(random(1000))/1000)
#endif

stock GetDirectionOfAircraft(&Float:angle, &Float:x, &Float:y, &Float:z, &Float:fpoint_x, &Float:fpoint_y, Float:fault = 0.0)
{
        static
                Float:distance = S_AIR__DISTANCE;

        z = S_AIR__FLIGHT;
        angle = floatrandom(360);
        x = 0.0 + distance * -floatsin(angle, degrees);
        y = 0.0 + distance * floatcos(angle, degrees);
    
        distance *= 2.0;
        angle += fault + floatrandom(90) - 45.0;
        fpoint_x = x + distance * -floatsin(angle, degrees);
        fpoint_y = y + distance * floatcos(angle, degrees);
        distance = S_AIR__DISTANCE;
    
        return 1;
}

/*
by m1n1vv
Version: 0.1
*/
