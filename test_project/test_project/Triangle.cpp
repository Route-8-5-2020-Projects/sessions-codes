#include "Triangle.h"

int Triangle::trianglesCount = 0;
float Triangle::getArea()
{
	return 0.5 * base * height;
}

Triangle::Triangle()
{
	trianglesCount++;
}
