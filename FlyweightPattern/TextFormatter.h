#pragma once
#include <string>
#include <vector>
using namespace std;
class TextFormatter
{
public:
	struct TextRange
	{
		int start, end;
		bool cap;

		bool covers(int position) const
		{
			return position >= start && position <= end;
		}
	};
	TextFormatter(const string& plain_text);

	TextRange& get_range(int start, int end);

	string str() const;
private:
	string plain_text;
	vector<TextRange> formatting;
};

