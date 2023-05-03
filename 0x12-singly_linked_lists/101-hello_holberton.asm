section .data
    hello db 'Hello, Holberton', 0Ah ; the string to be printed, with a newline character (0Ah) at the end
    hello_len equ $ - hello          ; the length of the string, calculated as the difference between the current address ($) and the address of the start of the string (hello)

section .text
    global _start                   ; make the entry point of the program visible to the linker
    _start:
        ; write the string to stdout using the write syscall
        mov eax, 4                  ; syscall number for write
        mov ebx, 1                  ; file descriptor for stdout
        mov ecx, hello              ; pointer to the string to be printed
        mov edx, hello_len          ; length of the string
        int 0x80                    ; invoke the kernel to perform the syscall

        ; exit the program with a status code of 0 using the exit syscall
        mov eax, 1                  ; syscall number for exit
        xor ebx, ebx                ; exit status code of 0
        int 0x80                    ; invoke the kernel to perform the syscall

