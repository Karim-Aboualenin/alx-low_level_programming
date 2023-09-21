message db "Hello, Holberton\n", 0
global main

main:
        mov rdi, 1
        mov rax, 1
        mov rsi, message
        mov rdx, 17
        syscall
        mov rax, 60
        mov rdi, 0
        syscall


