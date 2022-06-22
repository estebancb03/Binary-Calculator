section .data
section .text
global funcion

funcion:
    cmp rdx, 0
    je suma
    cmp rdx, 1
    je resta
    cmp rdx, 2
    je division
    cmp rdx, 3
    je multiplicacion
    cmp rdx, 4
    je operacionOr
    cmp rdx, 5
    je operacionAnd
    cmp rdx, 6
    je operacionXOR
    cmp rdx, 7
    je operacionNOT

    suma:
        add rdi, rsi
        mov rax, rdi
        jmp final

    resta:
        sub rdi, rsi
        mov rax, rdi
        jmp final

    division:
        idiv rdi
        mov rax, rdi
        jmp final

    multiplicacion:
        imul rdi, rsi
        mov rax, rdi
        jmp final

    operacionOr:
        or rdi, rsi
        mov rax, rdi
        jmp final

    operacionAnd:
        and rdi, rsi
        mov rax, rdi
        jmp final

    operacionXOR:
        xor rdi, rsi
        mov rax, rdi
        jmp final

    operacionNOT:
        not rdi
        mov rax, rdi

    final:
        ret