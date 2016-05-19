#include "Word.h"
template<typename T>
Word::Word()
{
	type = " ";
	frequency = 0;
}
template<typename T>
T Word::getType()
{
	return type;
}
template<typename T>
T Word::getFrequency()
{
	return frequency;
}
template<typename T>
T Word::setFrequency()
{
	T newFrequency = frequency;
}