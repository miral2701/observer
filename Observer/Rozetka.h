#pragma once
#include "Subject.h"
#include<iostream>
using namespace std;

/*
  ConcreteSubject - ���������� �������:
	 - ��������� ���������, �������������� ������� ��� ����������� ����������� ConcreteObserver;
	 - �������� ���������� ����� ������������, ����� ���������� ���������;
*/
class Rozetka : public Store
{
	string info;
public:
	string GetInfo()
	{
		return info;
	}
	void SetInfo(string h)
	{
		h = h;
	}
	
};
