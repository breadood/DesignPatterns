#pragma once
#include "HotDrink.h"

class Coffee : public HotDrink
{
public:
	Coffee();
	~Coffee();
	void prepare(int volume) override;

	void drink() override;
};
