
#pragma once
#include <string>
#include "calculate.hpp"
using std::string;
namespace bullpgia{
class Guesser {
		
	public:
		int length;
		virtual string guess() =0;
		virtual void startNewGame(int len);
		virtual void learn(string reply);
};}