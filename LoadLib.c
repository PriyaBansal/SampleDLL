#include<stdio.h>
#include<windows.h>


void main(void){
	BOOL freeResult, runTimeLinkSuccess = FALSE;
	HINSTANCE dllHandle = NULL;
	FARPROC fooPtr = NULL;

	//Load the dll
	dllHandle = LoadLibrary("libfoo.dll");

	//handle validity check
	if(NULL != dllHandle){
		fooPtr = GetProcAddress(dllHandle,"foo");

	//check FooPtr validity
		if(runTimeLinkSuccess = (NULL != fooPtr)){
			LPCTSTR testString = "Hello World!\n";
			int retVal = fooPtr(testString);
			printf("%d\n", retVal);
		}

		freeResult = FreeLibrary(dllHandle);
	}

	//if dll function not called
	if(!runTimeLinkSuccess)
		printf("Error while calling function");
}
