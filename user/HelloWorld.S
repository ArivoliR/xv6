.global main 

.section .text
main: 
  li a0, 1
  la a1, hello
  li a2, 34
  li a7, 16
  ecall

  li a0, 0
  li a7, 2
  ecall

.section .data
hello: .ascii "Hello EE23B008! Welcome to CS3500\n"


