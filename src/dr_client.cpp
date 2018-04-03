
#include "dr_api.h"


DR_EXPORT void
dr_client_main(client_id_t id, int argc, const char *argv[])
{
    dr_set_client_name("DynamoRIO Sample Client",
                       "http://dynamorio.org/issues");

#ifdef _WIN32
	dr_enable_console_printing();
#endif	

	dr_printf("This must be printed\n");
	dr_abort();
}


