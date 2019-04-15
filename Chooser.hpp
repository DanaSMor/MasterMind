#pragma once
#include <string>
using std::string;
namespace bullpgia{
class Chooser {
	public:
		//Chooser(const string& constantString) { myString = constantString; }
		virtual string choose(uint length) =0;

};
}