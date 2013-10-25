/// @file log.c
/// @brief log model
/// @author Rex Lee duguying2008@gmail.com
/// @version 0.01
/// @date 2013-10-19
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

/// @brief initial initialize the model
/// 
/// @return 
int initial(void)
{
	printf("Load Log Model success!\n");
	//log_create("test.log");
	return 0;
}

/// @brief log_create create a log
/// 
/// @param file filename
///
/// @return log handle
int log_create(const char* file)
{
	int lh;
	lh=open(file, O_RDWR|O_CREAT|O_APPEND);
	if(-1==lh){
		printf("create log file error!\n");
	}
	return lh;
}


/// @brief logw write log
///
/// @param string log message
/// @param lh log handle
///
/// @return the byte size have written
int logw(const char* string, int lh)
{
	return write(lh, string, strlen(string));
}

/// @brief log_close close log
///
/// @param lh log handle
///
/// @return if success, return 0
int log_close(int lh)
{
	return close(lh);
}
