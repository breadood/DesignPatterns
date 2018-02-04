#pragma once
#include "HotDrink.h"

class Tea : public HotDrink
{
public:
	Tea();
	~Tea();
	void prepare(int volume) override;
	void drink() override;
};
