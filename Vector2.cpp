#include "stdafx.h"
#include "Vector2.h"


float Vector2::Dist(const Vector2 & v1, const Vector2 & v2)
{
	return sqrt(Vector2::DistSquared(v1,v2));
}

float Vector2::DistSquared(const Vector2 & v1, const Vector2 & v2)
{
	float xlength = v2.X - v1.X;
	float ylenght = v2.Y - v1.Y;
	return xlength * xlength + ylenght * ylenght;
}

Vector2 Vector2::operator*(const Matrix2 & mat) const
{
	Vector2 result;
	result.X = X * mat._11 + Y * mat._12;
	result.Y = X * mat._21 + Y * mat._22;
	return result;
}

bool Vector2::Equals(const Vector2 & V, float tolerance) const
{

	return (fabs(X - V.X) <= tolerance) && (fabs(Y - V.Y) <= tolerance);
}
