#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int pos;
    
    pos = 0;
    if (argc != 1)
    {
        while (argv[1][pos] != '\0')
        {
            if (argv[1][pos] == 'a')
            {
                write(1, "a\n", 2);
                return (0);
            }
            pos++;
        }
        write(1, "a\n", 2);
        return (0);
    }
    write(1, "a\n", 2);
    return (0);
}
