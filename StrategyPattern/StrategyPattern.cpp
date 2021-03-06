// StrategyPattern.cpp : Defines the entry point for the console application.
//
// strategy/policy:
// Enables the exact behavior of a system to be selected
// either run-time or compile-time
#include "stdafx.h"
#include <sstream>
#include <memory>
#include <vector>
#include <string>
#include <iostream>

using namespace std;
// dynamic strategy

enum class OutputFormat
{
	markdown,
	html
};

struct ListStrategy
{
	virtual void start(ostringstream& oss) {}
	virtual void add_list_item(ostringstream& oss, const string& item) = 0;
	virtual void end(ostringstream& oss) {}
};
struct MarkdownListStrategy : ListStrategy
{
	void start(ostringstream& oss) {}
	void add_list_item(ostringstream& oss, const string& item)
	{
		oss << "* " << item << endl;
	}
	void end(ostringstream& oss) {}
};

struct HtmlListStrategy : ListStrategy
{
	void start(ostringstream& oss) {
		oss << "<ul>" << endl;
	}
	void add_list_item(ostringstream& oss, const string& item)
	{
		oss << "  <li>" << item << "</li>" << endl;
	}
	void end(ostringstream& oss) {
		oss << "</ul>" << endl;
	}
};

struct TextProcessor
{
	void append_list(const vector<string>& items)
	{
		list_strat->start(oss);
		for (auto& item : items)
			list_strat->add_list_item(oss, item);
		list_strat->end(oss);
	}

	void set_output_format(const OutputFormat& format)
	{
		switch (format)
		{
		case OutputFormat::markdown:
			list_strat = make_unique<MarkdownListStrategy>();
			break;
		case OutputFormat::html:
			list_strat = make_unique<HtmlListStrategy>();
			break;
		}

		oss.str("");
		oss.clear();
	}

	string str()
	{
		return oss.str();
	}

private:
	ostringstream oss;
	unique_ptr<ListStrategy> list_strat;
};

int main()
{
	vector<string> items{"pig", "dog"};

	TextProcessor tp;
	tp.set_output_format(OutputFormat::markdown);
	tp.append_list(items);
	cout << tp.str() << endl;


	tp.set_output_format(OutputFormat::html);
	tp.append_list(items);
	cout << tp.str() << endl;
	
	system("pause");

    return 0;
}

