#define _CRT_SECURE_NO_WARNINGS 1
#include "Cube.h"

Cube::Cube() {}

Cube::Cube(float lenth, float width, float height) 
{
	this->m_lenth = lenth;
	this->m_width = width;
	this->m_height = height;
}
void Cube::set_m_lenth(float lenth) 
{
	this->m_lenth = lenth;
}
float Cube::get_m_lenth() 
{
	return this->m_lenth;
}
void Cube::set_m_width(float width)
{
	this->m_width = width;
}
float Cube::get_m_width()
{
	return this->m_width;
}
void Cube::set_m_height(float height)
{
	this->m_height = height;
}
float Cube::get_m_height()
{
	return this->m_height;
}
float Cube::CalculateVol() 
{
	return m_lenth * m_width * m_height;
}
float Cube::CalculateSa() 
{
	return 2 * (m_lenth * m_width + m_width * m_height + m_lenth * m_height);
}
bool Cube::IsSameCube(Cube* p_cube)
{
	return p_cube->get_m_lenth() == this->m_lenth
		&& p_cube->get_m_width() == this->m_width
		&& p_cube->get_m_height() == this->m_height;
}

Cube Cube::operator+(Cube& cube) 
{
	Cube targetCube;
	targetCube.set_m_lenth(this->m_lenth + cube.get_m_lenth());
	targetCube.set_m_width(this->m_width + cube.get_m_width());
	targetCube.set_m_height(this->m_height + cube.get_m_height());
	return targetCube;
}