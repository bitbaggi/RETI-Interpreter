#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

#ifndef SPECIAL_OPTS_H
#define SPECIAL_OPTS_H

int8_t *extract_comment_metadata(const char *prgrm_path, uint8_t *len) ;

void create_out_and_err_file() ;
void adjust_print(bool is_stdout, const char *format, const char *format_no_newline, ...) ;
void close_out_and_err_file();

#endif // SPECIAL_OPTS_H