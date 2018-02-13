#include "stdafx.h"
#include "GroupGO.h"


GroupGO::GroupGO()
{
}

GroupGO::GroupGO(const string & name) :
	name(name)
{
}


GroupGO::~GroupGO()
{
}

void GroupGO::draw()
{
	std::cout << "Group " << name << " contains: " << std::endl;
	for (auto o : objects) {
		o->draw();
	}
}

void GroupGO::add_object(GraphicObject* go)
{
	objects.push_back(go);
}
