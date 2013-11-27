/**
 * @file config.c
 * @brief configuration model
 * @author Rex Lee duguying2008@gmail.com
 * @version 0.01
 * @date 2013-10-19
 */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

typedef struct conf
{
	int size;//size of config file, and this is chars number too
	int config_handle;
	char* content;//file content
} conf;

/**
 * @brief initial config model
 * @details [long description]
 * 
 * @param config_file configuration file
 * @return [description]
 */
conf* config_init(const char* config_file, conf* config);

char* config_get(int config_handle, const char* key);

/**
 * @brief remove the comment of config file
 * @details remove the comment of config file, the comment is begin with char #
 * 
 * @param config the struct pointer of config
 * @return the struct pointer of config, but carefully if you want to assignment
 */
void* config_remove_comment(conf* config);
