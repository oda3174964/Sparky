#pragma once

#define _USE_MATH_DEFINES
#include <math.h>

#include "sp/Common.h"

namespace sp { namespace maths {

	SP_API inline float toRadians(float degrees)
	{
		return (float)(degrees * (M_PI / 180.0));
	}

	SP_API inline float toDegrees(float radians)
	{
		return (float)(radians * (180.0f / M_PI));
	}

	SP_API inline int sign(float value)
	{
		return (value > 0) - (value < 0);
	}

	SP_API inline float sin(float angle)
	{
		return ::sin(angle);
	}

	SP_API inline float cos(float angle)
	{
		return ::cos(angle);
	}

	SP_API inline float tan(float angle)
	{
		return ::tan(angle);
	}

	SP_API inline float sqrt(float value)
	{
		return ::sqrt(value);
	}

	SP_API inline float rsqrt(float value)
	{
		return 1.0f / ::sqrt(value);
	}

	SP_API inline float asin(float value)
	{
		return ::asin(value);
	}

	SP_API inline float acos(float value)
	{
		return ::acos(value);
	}

	SP_API inline float atan(float value)
	{
		return ::atan(value);
	}

	SP_API inline float atan2(float y, float x)
	{
		return ::atan2(y, x);
	}

} }