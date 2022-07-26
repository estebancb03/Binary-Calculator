section .data
section .text
global calculatorASM

calculatorASM:

  movaps xmm0, [rdi]
  movaps xmm1, [rsi]

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
    addps xmm0, xmm1
    jmp end

  subtraction:
    subps xmm0, xmm1
    jmp end

  division:
    divps xmm0, xmm1
    jmp end

  multiplication:
    mulps xmm0, xmm1
    jmp end

  OR:
    orps xmm0, xmm1
    jmp end

  AND:
    andps xmm0, xmm1
    jmp end

  XOR:
    xorps xmm0, xmm1
    jmp end

  NOT:
    jmp end

  end:
    movaps [rcx], xmm0
    ret
