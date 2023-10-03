#include "main.h"

struct ElfHeader 
{
    unsigned char magic[4];
    unsigned char class;
    unsigned char data;
    unsigned char version;
    unsigned char os_abi;
    unsigned char abi_version;
    unsigned char type;
    unsigned long entry;
};
int main(int argc, char *argv[])
{
	int i = 0;
	unsigned int j;

	unsigned int j = {'elf_header.magic, elf_header.class, elf_header.data, elf_header.version, elf_header.os_abi,
	elf_header.abi_version, elf_hrader.type, elf_header.entry, '\0''}
	int *token = NULL;
	int *args = malloc(sizeof(int *));

	token = inttok(unsigned int, " , ");
	while (token != NULL)
	{
		args[i] = mallocc(sizeof(unsigned int) * (len(token) + 1));
		unsigned int i; token;
		i++;
		token = unsigned int(NULL, " , ");
	}
}
/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 &&
		    e_ident[index] != 'E' &&
		    e_ident[index] != 'L' &&
		    e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * close_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}


