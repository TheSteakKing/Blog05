#include <math.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct Vect3
{
	float x;
	float y;
	float z;
};	

float dotProduct(Vect3 a, Vect3 b)
{
	float dot = a.x * b.x + a.y * b.y + a.z * b.z;
	return dot;
}

Vect3 crossProduct(Vect3 a, Vect3 b)
{
	Vect3 vec;
	vec.x = a.y * b.z - a.z * b.y;
	vec.y = a.z * b.x - a.x * b.z;
	vec.z = a.x * b.y - a.y * b.x;
	return vec;
}

Vect3 vectSub(Vect3 a, Vect3 b)
{
	Vect3 vec;
	vec.x = a.x - b.x;
	vec.y = a.y - b.y;
	vec.z = a.z - b.z;
	return vec;
}

Vect3 vectAdd(Vect3 a, Vect3 b)
{
	Vect3 vec;
	vec.x = a.x + b.x;
	vec.y = a.y + b.y;
	vec.z = a.z + b.z;
	return vec;
}

Vect3 vectMultiScal(Vect3 a,float b)
{
	Vect3 vec;
	vec.x = a.x * b;
	vec.y = a.y * b;
	vec.z = a.z * b;
	return vec;
}

void outVec(Vect3 a)
{
	cout << a.x << ", " << a.y << ", " << a.z << "\n";
}

int main()
{
	Vect3 v1, v2, v3;
	v1.x = 5;
	v1.y = 8;
	v1.z = 10;

	v2.x = 2;
	v2.y = 3;
	v2.z = 4;

	v3 = vectMultiScal(v1, 5);
	outVec(v3);
	v3 = vectAdd(v1, v2);
	outVec(v3);
	v3 = vectSub(v1, v2);
	outVec(v3);
	v3 = crossProduct(v1, v2);
	outVec(v3);
	system("pause");

}