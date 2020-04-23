#include "irng.h"

class simpleRng : public IRng
{
public:
	simpleRng(float seed = 0.678);
	float randomFloat() override;
private:
	float state;
};