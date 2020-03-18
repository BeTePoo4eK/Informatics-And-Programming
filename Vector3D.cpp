#include <iostream>
#include <fstream>
#include "Vector3D.h"


Vector3D::Vector3D() {
	x = 0.0;
	y = 0.0;
	z = 0.0;
}
Vector3D::Vector3D(double _x, double _y, double _z) : x(_x), y(_y), z(_z) { }

Vector3D::Vector3D(double a) {
	this->x = a;
	y = 0.0;
	z = 0.0;
}

Vector3D::Vector3D(const Vector3D& c) {
	x = c.x;
	y = c.y;
	z = c.z;
}

Vector3D::~Vector3D() {
	x = 0.0;
	y = 0.0;
	z = 0.0;
}

Vector3D& Vector3D :: operator= (const Vector3D& c) {
	this->x = c.x;
	y = c.y;
	z = c.z;
	return *this;
}

Vector3D Vector3D :: operator+ (const Vector3D& c) {
	Vector3D res;
	res.x = x + c.x;
	res.y = y + c.y;
	res.z = z + c.z;
	return res;
}

Vector3D Vector3D :: operator- (const Vector3D& c) {
	Vector3D res;
	res.x = x - c.x;
	res.y = y - c.y;
	res.z = z - c.z;
	return res;
}

Vector3D Vector3D :: operator% (const Vector3D& c) {
	Vector3D res;
	res.x = x * c.x;
	res.y = y * c.y;
	res.z = z * c.z;
	return (res.x + res.y + res.z);
}

Vector3D Vector3D :: operator* (const double& c) {
	Vector3D res;
	res.y = y * c;
	res.x = x * c;
	res.z = z * c;
	return res;
}

bool Vector3D :: operator== (const Vector3D& c) {
	return ((c.x == x) && (c.y == y) && (c.z == z));
}

bool Vector3D::CompVector(const Vector3D& c) {
	bool res = 0;
	double c1 = abs(sqrt(this->x * x + y * y + z * z));
	double c2 = abs(sqrt(c.x * c.x + c.y * c.y + c.z * c.z));
	if (c1 == c2) res = 1;

	return res;
}
std::ostream& operator<<(std::ostream& stream, const Vector3D& c) {
	stream << "Ответ: ";
	if ((c.x != 0) && (c.y == 0) && (c.z == 0)) {
		stream << c.x << endl << endl;
	}
	else if ((c.x == 0) && (c.y == 0) && (c.z == 0)) {
		stream << c.x << endl << endl;
	}
	else {
		stream << "(" << c.x << ":" <<c.y << ":" << c.z << ")" << endl << endl;
	}
	return stream;
}

std::istream& operator>>(std::istream& stream, Vector3D& c) {
	stream >> c.x >> c.y >> c.z;
	return stream;
}