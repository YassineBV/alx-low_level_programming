#include "main.h"
int append_text_to_file(const char *filename, char *text_content)
{
    int fd1, bytWrt, lent;

    if (filename == NULL)
        return (-1);
    if (text_content == NULL)
        return (-1);
    fd1 = open(filename, O_APPEND);
    if (fd1 < 0)
        return (-1);
    lent = strlen(text_content);
    bytWrt = write(fd1, text_content, lent);
    if (bytWrt <= 0)
        return (-1);
    return (1);
    
}
