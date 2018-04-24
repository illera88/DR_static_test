#include <dr_api.h>

void create_IDA_symbols_file(void* image_base) {
	dr_printf("before system\n");
	STARTUPINFO info = { sizeof(info) };
	PROCESS_INFORMATION processInfo;
	if (CreateProcess(NULL, "echo aaaa > C:\\Users\\default.LAPTOP-BGOSJ7N3\\Desktop\\perro.txt", NULL, NULL, TRUE, 0, NULL, NULL, &info, &processInfo))
	{
		WaitForSingleObject(processInfo.hProcess, INFINITE);
		CloseHandle(processInfo.hProcess);
		CloseHandle(processInfo.hThread);
	}
	//system("echo aaaa > C:\\Users\\default.LAPTOP-BGOSJ7N3\\Desktop\\perro.txt");
	dr_printf("after system\n");

}


DR_EXPORT void dr_client_main(client_id_t id, int argc, const char *argv[])
{
    dr_enable_console_printing();

	dr_printf("before\n");
	create_IDA_symbols_file(NULL);
	dr_printf("after\n");
}