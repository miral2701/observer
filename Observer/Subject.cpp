#include "Subject.h"

void Store::Attach(Observer* observer)
{
	observers.push_back(observer);
}
void Store::Detach(Observer* observer)
{
	auto iter = find(observers.begin(), observers.end(), observer);
	if (iter != observers.end())
		observers.erase(iter);
}
void Store::Notify()
{
	for (int i=0;i<observers.size();i++)
	{
		observers[i]->Update();
		Detach(observers[i]);
	}
}