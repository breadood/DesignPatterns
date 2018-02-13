#pragma once
#include "GraphicObject.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;
class GroupGO :
	public GraphicObject
{
public:
	GroupGO();
	GroupGO(const string &name);
	~GroupGO();
	void draw() override;
	void add_object(GraphicObject* go);
private:
	string name;
	vector<GraphicObject*> objects;
};

