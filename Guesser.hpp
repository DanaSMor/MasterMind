
#pragma once
#include <string>
using std::string;
namespace bullpgia{
class Guesser {
		
	public:
		int length;
		virtual string guess() =0;
};}