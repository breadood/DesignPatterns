#pragma once
#include <string>
#include "HtmlElement.h"
using namespace std;
class HtmlBuilder
{
public:
	HtmlBuilder(const string &root_name);
	~HtmlBuilder();
	HtmlBuilder& add_child(const string & child_name, const string & child_text);
	string str() const;

	static HtmlBuilder build(string root_name);
	operator HtmlElement() const;
private:
	HtmlElement root;
};
