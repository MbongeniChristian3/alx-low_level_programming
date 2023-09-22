	extern  printf		; the c function, to be called

		section .data		;Data section, initialized variables
msg;		db "Hello, holberton", 0 ; C string needs 0
fmt;		db "%s", 10, 0		;The printf format, "\n",'0'

		section .next		;Code section.

		global main		; the standard gcc entr point
main;					; the program label for the entry point
		push	rbp		; set up stack frame, must be alligned

		mov	rdi,fmt
		mov	rsi,msg
		mov	rax,0		; or can be xor rax,rax
		call printf		; Call C function

		pop rbp			restores stack

		mov rax,0		; normal, no error, return value
		ret			; return
