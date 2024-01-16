#pragma once
#include "Subject.h"
#include<iostream>
using namespace std;

/*
  ConcreteSubject - конкретный субъект:
	 - сохраняет состояние, представляющее интерес для конкретного наблюдателя ConcreteObserver;
	 - посылает информацию своим наблюдателям, когда происходит изменение;
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
