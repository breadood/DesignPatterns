#pragma once
#include <vector>
#include <string>

class HtmlBuilder;

using namespace std;
struct HtmlElement
{
public:
	friend class HtmlBuilder;
	
	~HtmlElement();
	string str(int indent = 0) const;
	void addChild(const string & child_name, const string & child_text);
private:
	string name, text;
	vector<HtmlElement> elements;
	const size_t indent_size = 2;
	// client can no longer use constructor directly but only through builder
	HtmlElement();
	HtmlElement(const string &name, const string &text);
};

