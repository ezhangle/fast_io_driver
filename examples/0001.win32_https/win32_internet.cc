#include<fast_io.h>
#include<fast_io_device.h>
#include<win32_internet.h>

int main()
{
	fast_io::driver::win32_internet_https_client https_client("www.warcraftlogs.com","GET","/zone/rankings/24/");
	transmit(fast_io::out,https_client);
}