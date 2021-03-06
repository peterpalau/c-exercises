#ifndef C_ARRAY_UTILS_H

#define C_ARRAY_UTILS_H

/**
 * Helper function for repeating a character
 * specific number of times
 */
extern /*@notnull@*/ char *repeat_str(/*@unique@*/ /*@observer@*/ char *string,
                                      int size);

/**
 * This function count digits on a number
 */
extern int count_digits(int number);

/**
 * This function count the number of chars in string
 */
extern int count_chars(const char *string);

/**
 * Join two strings
 */
static /*@unused@*/ void join_str(char *str1, char *str2);

#endif
