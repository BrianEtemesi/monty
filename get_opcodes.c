#include "monty.h"

/**
 * get_opcodes - selects correct opcode to perform
 * @opc: passed opcode
 *
 * Return: pointer to the function that executes the opcode
 *
 */

void (*get_opcodes(char *opc))(stack_t **stack, unsigned int line_number)
{
	instruction_t instruct[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"queue", _queue},
		{"mod", _mod},
		{"pchar", _pchar},
		{"pstr", _pstr},
		{"rotl", _rotl},
		{"stack", _stack},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"mul", _mul},
		{"div", _div},
		{"rotr", _rotr},
		{NULL, NULL}
	};

	int i;

	/* loop through the instruction */

	for (i = 0; instruct[i].opcode; i++)
	{
		if (_strcmp(instruct[i].opcode, opc) == 0)
			break;
	}

	/* return pointer to func */
	return (instruct[i].f);
}
