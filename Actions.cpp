/* Actions.cpp
 * This is where you should define the
 * behavior of your actions. Make sure
 * the parameters match those in the JSON
 * exactly! Double check Extension.h
 * as well.
 */

#include "Common.h"

void Extension::Concat(const TCHAR *s)
{
	len += _tcslen(s) + 1;
	if(len > mlen)
	{
		TCHAR *ostr = str;
		mlen = len + InitSize;
		str = new TCHAR[mlen];
		_tcscpy(str, ostr);
		delete[] ostr;
	}
	_tcscat(str, s);
}

void Extension::Reset()
{
	if(mlen > InitSize)
	{
		delete[] str;
		mlen = InitSize;
		str = new TCHAR[mlen];
	}
	str[0] = '\0';
	len = 1;
}
