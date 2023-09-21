section .data
    message db "Hello, Holberton", 0
    format db '%s', 10, 0
extern printf
section .text
	global main
extern printf
main:
        mov rdi, format
        xor rax, rax
        mov rsi, message
        call printf
        mov eax, 0
        ret


