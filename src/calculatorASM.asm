section .data
section .text
global calculatorASM

calculatorASM:
    cmp rdx, 0
    je addition
    cmp rdx, 1
    je subtraction
    cmp rdx, 2
    je division
    cmp rdx, 3
    je multiplication
    cmp rdx, 4
    je OR
    cmp rdx, 5
    je AND
    cmp rdx, 6
    je XOR
    cmp rdx, 7
    je NOT

    addition:
        add rdi, rsi
        mov rax, rdi
        jmp final

    subtraction:
        sub rdi, rsi
        mov rax, rdi
        jmp final

    division:
        idiv rdi
        mov rax, rdi
        jmp final

    multiplication:
        imul rdi, rsi
        mov rax, rdi
        jmp final

    OR:
        or rdi, rsi
        mov rax, rdi
        jmp final

    AND:
        and rdi, rsi
        mov rax, rdi
        jmp final

    XOR:
        xor rdi, rsi
        mov rax, rdi
        jmp final

    NOT:
        not rdi
        mov rax, rdi
        jmp final

    final:
        ret
