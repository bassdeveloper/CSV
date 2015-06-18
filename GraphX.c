void maintime()
{
	SYSTEMTIME str_t;
	GetLocalTime(&str_t);
	char mon[12][15]={"January","February","March","April","May","June","July","August","September","October","November","December"};


	printf("%d %s %d     %02d:%02d:%02d\n",str_t.wDay,mon[str_t.wMonth],str_t.wYear,str_t.wHour,str_t.wMinute,str_t.wSecond);

}

int mainmax()
{
   HWND hWnd;
   SetConsoleTitle("test");
   hWnd = FindWindow(NULL, "test");
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD NewSBSize = GetLargestConsoleWindowSize(hOut);
    SMALL_RECT DisplayArea = {0, 0, 0, 0};

    SetConsoleScreenBufferSize(hOut, NewSBSize);

    DisplayArea.Right = NewSBSize.X - 1;
    DisplayArea.Bottom = NewSBSize.Y - 1;

    SetConsoleWindowInfo(hOut, TRUE, &DisplayArea);

    ShowWindow(hWnd, SW_MAXIMIZE);
    return 0;
}

