#define MAIN_H

int _putchar(char c);
int _atoi(char *s);
char *create_array(ujnsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int sidth, int height);
void free_grid(int **grid, int height);

