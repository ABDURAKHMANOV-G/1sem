#include "CBody.h"
#include <iostream>



CBody::CBody()
{
	std::cout << "Hello from Body\n";
}

CBody::CBody(float x, float m)
{
	m_fCoord = x; 
	m_fMass = m; 

	std::cout << m_fCoord << " " << m_fMass << std::endl;
}

float CBody::Dist(CBody b)
{
	return m_fCoord - b.m_fCoord;
}

CBody CBody::operator +(CBody b)
{
	return(CBody(m_fCoord, m_fMass + b.m_fMass));
}
