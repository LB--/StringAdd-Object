/* Conditions.cpp
 * This is where you should define the
 * behavior of your conditions. Make sure
 * the parameters and return types match those
 * in the JSON exactly! Double check Extension.h
 * as well.
 */

#include "Common.h"

bool Extension::Equals(const TCHAR *s)
{
	return _tcscmp(str, s) == 0;
}
