#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_abiversion(unsigned char *e_ident);
void print_type(unsigned int e_type);
void print_entry(unsigned long e_entry);

/**
 * main- start of the function.
 * @argc: arguement count.
 * @argv: arguement vector.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int fd;
	char *buffer;
	ssize_t ch;
	Elf64_Ehdr *ehdr;

	buffer = malloc(1024);
	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		fprintf(stderr, "Error opening file: %s\n", strerror(errno));
		exit(98);
	}

	ch = read(fd, buffer, 1024);
	if (ch == -1)
		return (-1);

	ehdr = (Elf64_Ehdr *) buffer;
	print_magic(ehdr->e_ident);
	print_class(ehdr->e_ident);
	print_data(ehdr->e_ident);
	print_version(ehdr->e_ident);
	print_osabi(ehdr->e_ident);
	print_abiversion(ehdr->e_ident);
	print_type(ehdr->e_type);
	print_entry(ehdr->e_entry);

	close(fd);

	return (0);
}


/**
 * check_elf - checks the elf.
 * @e_indent: unsigned character pointer.
 *
 * Return: nothing.
 */
void check_elf(unsigned char *e_ident)
{
	if (e_ident[EI_MAG0] != ELFMAG0 ||
			e_ident[EI_MAG1] != ELFMAG1 ||
			e_ident[EI_MAG2] != ELFMAG2 ||
			e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}

	if (e_ident[EI_CLASS] != ELFCLASS64)
	{
		dprintf(STDERR_FILENO, "Error: Not a 64-bit ELF file\n");
		exit(98);
	}

}

/**
 * print_magic - prints magic.
 * @e_ident: unsigned character pointer.
 *
 * Return: 0
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", e_ident[i]);

	printf("\n");
}
/**
 * print_class - prints the class.
 * @e_indent: unsigned character pointer.
 *
 * Return: nothing.
 */
void print_class(unsigned char *e_ident)
{
	printf("Class:     ");

	if (e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("none\n");

	else if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");

	else if (e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");

	else
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

/**
 * print_data - prints data.
 * @e_indent: unsigned character pointer.
 *
 * Return: nothing.
 */
void print_data(unsigned char *e_ident)
{
	printf("Data:   ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("Little endian\n");
			break;

		case ELFDATA2MSB:
			printf("Big endian\n");
			break;

		default:
			printf("<unknown: %x>\n", e_ident[EI_DATA]);
			break;
	}
}


/**
 * print_version - it prints version.
 * @e_ident: character integer pointer.
 *
 * Return: 0.
 */
void print_version(unsigned char *e_ident)
{
	printf("Version:  ");

	switch (e_ident[EI_VERSION])
	{
		case EV_NONE:
			printf("invalid\n");
			break;

		case EV_CURRENT:
			printf("1 (current)\n");
			break;

		default:
			 printf("%d\n", e_ident[EI_VERSION]);
			 break;
	}
}


/**
 * print_osabi - prints the osabi.
 * @e_ident: character pointer.
 *
 * Return: nothing.
 */
void print_osabi(unsigned char *e_ident)
{
	printf("OS/ABI:  ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;

		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");

			break;

		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;

		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;

		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;

		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;

		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;

		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;

		case ELFOSABI_ARM:
			printf("ARM\n");
			break;

		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;

		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
			break;
	}
}


/**
 * print_abiversion - function that takes ident array as an arguement.
 * @e_ident: array of arguements.
 *
 * Return: nothing.
 */

void print_abiversion(unsigned char *e_ident)
{
	printf("ABI Version:   ");
	switch (e_ident[EI_ABIVERSION])
	{
		case 0:
			printf("%d (0)\n", e_ident[EI_ABIVERSION]);
			break;

			default:
			printf("%d\n", e_ident[EI_ABIVERSION]);

			break;
	}
}


/**
 * print_type - function that takes value from the ELF.
 * @e_type: values from the ELF header as an arguement.
 *
 * Return: 0.
 */
void print_type(unsigned int e_type)
{
	printf("Type:    ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (Unknown type)\n");
			break;

		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;

		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;

		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;

		case ET_CORE:
			printf("CORE (Core file)\n");
			break;

		default:
			printf("<unknown: %x>\n", e_type);
			break;
	}
}

/**
 * print_entry - function that takes the entry point address as an arguement.
 * @e_entry: entry point of the program.
 *
 * Return: nothing.
 */

void print_entry(unsigned long e_entry)
{
printf("Entry point address: 0x|%lX\n", e_entry);	
}
