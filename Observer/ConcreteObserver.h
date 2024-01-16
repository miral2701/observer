#pragma once
#include "Observer.h"
#include "Clock.h"

/*
 ConcreteObserver - ���������� �����������:
	 - ������ ������ �� ������ ������ ConcreteSubject;
	 - ��������� ������, ������� ������ ���� ����������� � ������� ��������;
	 - ��������� ��������� ����������, ������������ � ������ Observer, ����� ������������ ��������������� � ���������.
*/

class ConcreteCustomer: public Customer
{
	
	string name;

public:
	ConcreteObserver(Clock* clock, string name);
	void Update() override;
	Clock* GetClock();
	void SetClock(Clock* clock);
};