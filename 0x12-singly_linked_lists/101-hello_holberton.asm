section .data

	message db "Hello, Holberton", 0
	formats db "%s", 0
	newline db 10, 0

section .text

	extern printf

global main
main:

	sub rsp, 8 ; Align stack to 16 byte

	mov rdi, formats
	mov rsi, message
	xor eax, eax ; clear eax register
	call printf

	mov rdi, formats
	mov rsi, newline
	xor eax, eax ; clear eax register
	call printf

	add rsp, 8 ;restore stack pointer alignement
	xor eax, eax; clear eax regisger

	ret