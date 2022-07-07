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
    je shiftLeft
    cmp rdx, 8
    je shiftRight
    cmp rdx, 9
    je NOT

    addition:
        add rdi, rsi
        mov rax, rdi
        jmp end

    subtraction:
        sub rdi, rsi
        mov rax, rdi
        jmp end

    division:
        idiv rdi
        mov rax, rdi
        jmp end

    multiplication:
        imul rdi, rsi
        mov rax, rdi
        jmp end

    OR:
        or rdi, rsi
        mov rax, rdi
        jmp end

    AND:
        and rdi, rsi
        mov rax, rdi
        jmp end

    XOR:
        xor rdi, rsi
        mov rax, rdi
        jmp end

    shiftLeft:
        mov rcx, rsi
        shl rdi, cl 
        mov rax, rdi
        jmp end

    shiftRight:
        mov rcx, rsi
        shr rdi, cl 
        mov rax, rdi
        jmp end

    NOT:
        not rdi
        mov rax, rdi
        jmp end
    end:
        ret
