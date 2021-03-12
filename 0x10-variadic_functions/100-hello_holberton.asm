	.global main             /* Make main a global function */
main:	                       /* Start function main */
	mov $msg, %rdi           /* RDI gets pointer to message */
	call puts                /* puts(msg) */
	mov $0, %rax             /* RAX gets zero */
	ret                      /* return(0) */
msg:	                        /* Declare a label for the string */
	   .asciz "Hello, Holberton"     /* Define the string */ 
