section .text
global main

main:
	mov rdi, 1
	mov rax, 1
	mov rdx, msglen
	mov rsi, msg
	syscall

	mov rdi, 0
	mov rax, 60
	syscall

section .rodata
	msg: db "Hello, Holberton", 10
	msglen: equ $ - msg

