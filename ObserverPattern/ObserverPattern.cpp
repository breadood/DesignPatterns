// ObserverPattern.cpp : Defines the entry point for the console application.
//
// Observer: informed when certain things are triggered
// Publisher(Event, Signal) & Subscriber(Handler, Slot)
// An observer is object wished to informed by observable
#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

template <typename T> class Observer;

template <typename T>
class Observable
{
	vector<Observer<T>*> observers;
public:
	void notify(T& source, const string& field_name)
	{
		for (auto observer : observers)
		{
			observer->field_changed(source, field_name);
		}
	}

	void subscribe(Observer<T>& observer)
	{
		observers.push_back(&observer);
	}

	void unsubscribe_all()
	{
		observers = {};
	}
};

class Person : public Observable<Person>
{
	int age;
public:
	Person(int age) : age(age) {}

	int get_age() const
	{
		return age;
	}

	void set_age(int age)
	{
		cout << "setting age: " << age << endl;
		this->age = age;
		notify(*this, "age");
	}
};

template <typename T>
class Observer
{
public:
	virtual void field_changed(T& source, const std::string& field_name) = 0;
};

class ConsolePersonObserver
	: public Observer<Person>
{
public:
	void field_changed(Person& source, const std::string& field_name) override
	{
		cout << "Person's " << field_name << "has changed to ";
		if (field_name == "age")
			cout << source.get_age();
		cout << endl;
	}
};

int main()
{
	Person person{ 10 };
	ConsolePersonObserver cpo;

	person.subscribe(cpo);
	 
	person.set_age(12);

	person.unsubscribe_all();

	person.set_age(11);

	system("pause");
    return 0;
}

