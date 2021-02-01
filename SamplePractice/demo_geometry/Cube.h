#pragma once
class Cube 
{
private:
	float m_lenth;
	float m_width;
	float m_height;
public:
	Cube();
	Cube(float lenth, float width, float height);
	
	void set_m_lenth(float lenth);
	void set_m_width(float width);
	void set_m_height(float height);

	float get_m_lenth();
	float get_m_width();
	float get_m_height();

	float CalculateVol();
	float CalculateSa();
	bool IsSameCube(Cube* p_cube);
};