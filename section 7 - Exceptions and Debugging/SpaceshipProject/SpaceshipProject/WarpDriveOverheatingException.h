#ifndef WARP_DRIVE_OVERHEATING_EXCEPTION
#define	WARP_DRIVE_OVERHEATING_EXCEPTION

#include <stdexcept>
using namespace std;

class WarpDriveOverheatingException : public overflow_error
{
	public: 
		WarpDriveOverheatingException() : overflow_error("The warp drive has exceeded safe temperature tolerance (>80 deg)")
		{

		}
};

#endif 

