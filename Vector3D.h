#pragma once
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

class Vector3D {
public:
	Vector3D();
	Vector3D(double _x, double _y, double _z);//inizial
	Vector3D(const Vector3D& c);//copirov
	Vector3D(double a);//tip

	~Vector3D();

	bool CompVector(const Vector3D& c);
	Vector3D &operator=(const Vector3D& c);
	Vector3D operator+(const Vector3D& c);
	Vector3D operator-(const Vector3D& c);
	Vector3D operator*(const double &c); 
	Vector3D operator%(const Vector3D& c); 
	bool operator==(const Vector3D& c);

	friend std::ostream& operator<<(std::ostream& stream, const Vector3D& c);
	friend std::istream& operator>>(std::istream& stream, Vector3D& c);
	
private:
	double x, y, z;

};