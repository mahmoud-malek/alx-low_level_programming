#include "main.h"

/**
 * error_and_exit - function to exit
 * @str: message to print
 * @filename: name of file to print
 * @exit_code: code to exit with
 */

void error_and_exit(char *str, char *filename, int exit_code)
{
	fprintf(stderr, "%s %s\n", str, filename);
	exit(exit_code);
}

/**
 * main - Entry point
 * Description: a program that displays the information
 * contained in the ELF header at the start of an ELF file.
 * @argc: number of args
 * @argv: array of strings (args)
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr ehdr;

	if (argc != 2)
		error_and_exit("Usage: elf_header elf_filename", "", 98);

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		error_and_exit("Error: Can't read from file", argv[1], 98);

	if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
		error_and_exit("Error: Can't read ELF header", argv[1], 98);

	if (ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
		ehdr.e_ident[EI_MAG2] != ELFMAG2 || ehdr.e_ident[EI_MAG3] != ELFMAG3)
		error_and_exit("Error: Not an ELF file", argv[1], 98);

	printf("Magic:   %.2x %.2x %.2x %.2x\n", ehdr.e_ident[EI_MAG0],
		   ehdr.e_ident[EI_MAG1], ehdr.e_ident[EI_MAG2], ehdr.e_ident[EI_MAG3]);
	printf("Class:   %s\n",
		   ehdr.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data:    %s\n", ehdr.e_ident[EI_DATA] == ELFDATA2LSB
								? "2's complement, little endian"
								: "2's complement, big endian");
	printf("Version: %d\n", ehdr.e_ident[EI_VERSION]);
	printf("OS/ABI:  %d\n", ehdr.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", ehdr.e_ident[EI_ABIVERSION]);
	printf("Type:    %d\n", ehdr.e_type);
	printf("Entry point address: %lx\n", ehdr.e_entry);

	close(fd);
	return (0);
}
