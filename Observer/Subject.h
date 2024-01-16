#pragma once
#include "Observer.h"
#include <vector>

using namespace std;

/* Subject
- �������: ����������� ����������� � ����� ������������. �� ��������� ����� ��������� ����� ����� ������������;
- ������������� ��������� ��� ������������� � ��������� ������������;
*/
class Store abstract
{
	vector<Observer*> observers;
public:
	void Attach(Observer* observer);
	void Detach(Observer* observer);
	void Notify();
};
