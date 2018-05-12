#ifndef __BADPROG_DOCUMENT_H__
#define __BADPROG_DOCUMENT_H__

#include <memory>
#include "PageProxy.h"

// Badprog.com

class Document
{
public:
	// CTOR & DTOR
	Document();
	~Document();

	// other	
	void open(int page = 1);
	void initProxy();
	void changeToPage(int pageNumber);

private:
	PageProxy _proxy;
};

#endif // __BADPROG_DOCUMENT_H__