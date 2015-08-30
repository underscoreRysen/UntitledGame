#pragma once

#define _USE_MATH_DEFINES
#include <math.h>



namespace u_engine { namespace maths {

		inline float toRadians(float degrees) {
			return degrees * (M_PI / 180.0f);
		}

} }