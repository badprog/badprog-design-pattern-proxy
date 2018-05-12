#ifndef __BADPROG_PAGEPROXY_H__
#define __BADPROG_PAGEPROXY_H__

#include <memory>
#include "IPage.h"
#include "Page.h"

// Badprog.com

class PageProxy : public IPage
{
public:
	// CTOR & DTOR
	PageProxy();
	~PageProxy();

	// override
	void displayText() override;
	void displayImage() override;
	void displayVideo() override;
	void displayEmpty() override;

	// other
	void setCurrentPage(int currentPage);
	const int getCurrentPage() const;
	std::shared_ptr<Page> getPage();
	void displayContent(int pageNumber);

private:
	int _currentPage;
	std::shared_ptr<Page> _page;
};

#endif // __BADPROG_PAGEPROXY_H__
