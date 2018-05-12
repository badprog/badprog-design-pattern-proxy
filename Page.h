#ifndef __BADPROG_PAGE_H__
#define __BADPROG_PAGE_H__

#include "IPage.h"

// Badprog.com

class Page : public IPage
{
public:
	// CTOR & DTOR
	Page();
	~Page();

	// override
	void displayText() override;
	void displayImage() override;
	void displayVideo() override;
	void displayEmpty() override;
};

#endif // __BADPROG_PAGE_H__