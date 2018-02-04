#pragma once
#include <map>
#include <string>
#include <memory>

#include "HotDrink.h"
#include "HotDrinkFactory.h"
#include "CoffeeFactory.h"
#include "TeaFactory.h"
using namespace std;
class DrinkFactory
{
public:
	DrinkFactory();
	~DrinkFactory();
	unique_ptr<HotDrink> make_drink(const string& name, int volume);
private:
	map<string, unique_ptr<HotDrinkFactory>> hot_factories;
};
