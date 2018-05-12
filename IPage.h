#ifndef __BADPROG_IPAGE_H__
#define __BADPROG_IPAGE_H__

// Badprog.com

class IPage
{
public:
	virtual ~IPage() {};

  virtual void displayText()  = 0;
  virtual void displayImage() = 0;
  virtual void displayVideo() = 0;
  virtual void displayEmpty() = 0;
};

#endif // __BADPROG_IPAGE_H__