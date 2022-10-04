	.file	"main.cpp"
	.text
	.p2align 4
	.type	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0, @function
_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0:
.LFB2319:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	pushq	%rbx
	.cfi_def_cfa_offset 24
	.cfi_offset 3, -24
	subq	$8, %rsp
	.cfi_def_cfa_offset 32
	movq	(%rdi), %rax
	movq	-24(%rax), %rax
	movq	240(%rdi,%rax), %rbp
	testq	%rbp, %rbp
	je	.L7
	cmpb	$0, 56(%rbp)
	movq	%rdi, %rbx
	je	.L3
	movsbl	67(%rbp), %esi
.L4:
	movq	%rbx, %rdi
	call	_ZNSo3putEc
	addq	$8, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 24
	popq	%rbx
	.cfi_def_cfa_offset 16
	movq	%rax, %rdi
	popq	%rbp
	.cfi_def_cfa_offset 8
	jmp	_ZNSo5flushEv
.L3:
	.cfi_restore_state
	movq	%rbp, %rdi
	call	_ZNKSt5ctypeIcE13_M_widen_initEv
	movq	0(%rbp), %rax
	movl	$10, %esi
	movq	%rbp, %rdi
	call	*48(%rax)
	movsbl	%al, %esi
	jmp	.L4
.L7:
	call	_ZSt16__throw_bad_castv
	.cfi_endproc
.LFE2319:
	.size	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0, .-_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0
	.p2align 4
	.globl	_Z9fibonaccii
	.type	_Z9fibonaccii, @function
_Z9fibonaccii:
.LFB1782:
	.cfi_startproc
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	movl	%edi, %r12d
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	subq	$104, %rsp
	.cfi_def_cfa_offset 160
	cmpl	$1, %edi
	jle	.L37
	leal	-1(%rdi), %edx
	movl	%edi, %r13d
	movl	%edi, %ebp
	xorl	%ebx, %ebx
	movl	%edx, %eax
	andl	$-2, %eax
	subl	%eax, %r13d
	movl	%r13d, %r12d
	cmpl	%r12d, %ebp
	je	.L41
.L10:
	subl	$2, %ebp
	movl	%edx, %esi
	xorl	%r13d, %r13d
	movl	%r12d, 32(%rsp)
	movl	%ebp, %eax
	movl	%ebx, %r15d
	movl	%r13d, %r12d
	andl	$-2, %eax
	subl	%eax, %esi
	movl	%esi, 56(%rsp)
.L15:
	movl	56(%rsp), %esi
	leal	-1(%rdx), %ecx
	movl	%ecx, %eax
	cmpl	%esi, %edx
	je	.L42
.L13:
	leal	-2(%rdx), %r13d
	movl	%eax, %esi
	xorl	%ebx, %ebx
	movl	%r12d, 36(%rsp)
	movl	%r13d, %ecx
	movl	%ebx, %r14d
	movl	%ebp, %r12d
	andl	$-2, %ecx
	subl	%ecx, %esi
	movl	%esi, 60(%rsp)
.L18:
	movl	60(%rsp), %esi
	leal	-1(%rax), %ecx
	movl	%ecx, %edi
	cmpl	%esi, %eax
	je	.L43
	leal	-2(%rax), %ecx
	movl	%edi, %esi
	movl	%r15d, 40(%rsp)
	xorl	%ebx, %ebx
	movl	%ecx, %eax
	movl	%ecx, 48(%rsp)
	andl	$-2, %eax
	movl	%r13d, 44(%rsp)
	movl	%r12d, %r13d
	movl	%ebx, %r12d
	subl	%eax, %esi
	movl	%esi, 64(%rsp)
.L21:
	movl	64(%rsp), %ecx
	leal	-1(%rdi), %eax
	movl	%eax, %r9d
	cmpl	%ecx, %edi
	je	.L44
	subl	$2, %edi
	movl	%r9d, %ebx
	movl	%r12d, 52(%rsp)
	movl	%r14d, %r8d
	movl	%edi, %eax
	xorl	%r15d, %r15d
	movl	%r9d, %r14d
	movl	%edi, %r11d
	andl	$-2, %eax
	movl	%r13d, %ebp
	subl	%eax, %ebx
	movl	%ebx, %r12d
.L24:
	leal	-1(%r14), %r10d
	movl	%r10d, %eax
	cmpl	%r12d, %r14d
	je	.L45
	subl	$2, %r14d
	movl	%r10d, %edx
	xorl	%ebx, %ebx
	movl	%r8d, %r9d
	movl	%r14d, %edi
	andl	$-2, %edi
	subl	%edi, %edx
	movl	%edx, 16(%rsp)
.L27:
	movl	16(%rsp), %esi
	leal	-1(%rax), %edi
	movl	%edi, %edx
	cmpl	%esi, %eax
	je	.L46
	leal	-2(%rax), %r10d
	leal	-3(%rax), %edi
	movl	%edx, %ecx
	xorl	%esi, %esi
	movl	%r10d, %eax
	andl	$-2, %eax
	subl	%eax, %ecx
	movl	%ecx, 28(%rsp)
.L30:
	movl	28(%rsp), %ecx
	leal	-1(%rdx), %eax
	movl	%eax, %r13d
	cmpl	%ecx, %edx
	je	.L47
	movl	%edi, %eax
	movl	%r13d, %ecx
	movl	%edx, 20(%rsp)
	andl	$-2, %eax
	movl	%ebp, 24(%rsp)
	movl	%edi, %ebp
	subl	%eax, %ecx
	movl	%ecx, 12(%rsp)
	xorl	%ecx, %ecx
	movl	%ecx, %edx
.L33:
	movl	12(%rsp), %eax
	leal	-1(%r13), %r8d
	cmpl	%eax, %r13d
	je	.L48
	xorl	%ecx, %ecx
.L31:
	leal	-1(%r8), %edi
	movl	%r10d, 92(%rsp)
	movl	%r11d, 88(%rsp)
	movl	%ecx, 84(%rsp)
	movl	%edx, 80(%rsp)
	movl	%esi, 76(%rsp)
	movl	%r9d, 72(%rsp)
	movl	%r8d, 68(%rsp)
	call	_Z9fibonaccii
	movl	68(%rsp), %r8d
	movl	84(%rsp), %ecx
	movl	72(%rsp), %r9d
	movl	76(%rsp), %esi
	subl	$2, %r8d
	addl	%eax, %ecx
	movl	80(%rsp), %edx
	movl	88(%rsp), %r11d
	cmpl	$1, %r8d
	movl	92(%rsp), %r10d
	jg	.L31
	leal	-3(%r13), %edi
	subl	$2, %r13d
	andl	$1, %edi
	addl	%ecx, %edi
	addl	%edi, %edx
	cmpl	$1, %r13d
	jg	.L33
	movl	%edx, %ecx
	movl	%ebp, %edi
	movl	20(%rsp), %edx
	movl	24(%rsp), %ebp
.L32:
	addl	%ecx, %r13d
	subl	$2, %edx
	subl	$2, %edi
	addl	%r13d, %esi
	cmpl	$1, %edx
	jg	.L30
	addl	%esi, %edx
	movl	%r10d, %eax
	addl	%edx, %ebx
	cmpl	$1, %r10d
	jg	.L27
.L50:
	movl	%r9d, %r8d
.L26:
	addl	%ebx, %eax
	addl	%eax, %r15d
	cmpl	$1, %r14d
	jg	.L24
	movl	52(%rsp), %r12d
	movl	%r14d, %r9d
	movl	%r11d, %edi
	movl	%r8d, %r14d
	movl	%ebp, %r13d
.L23:
	addl	%r15d, %r9d
	addl	%r9d, %r12d
	cmpl	$1, %edi
	jg	.L21
	movl	%r12d, %ebx
	movl	40(%rsp), %r15d
	movl	%r13d, %r12d
	movl	48(%rsp), %ecx
	movl	44(%rsp), %r13d
.L20:
	addl	%ebx, %edi
	movl	%ecx, %eax
	addl	%edi, %r14d
	cmpl	$1, %ecx
	jg	.L18
	movl	%r14d, %ebx
	movl	%r12d, %ebp
	movl	36(%rsp), %r12d
	movl	%r13d, %edx
	addl	%ebx, %eax
	addl	%eax, %r12d
	cmpl	$1, %r13d
	jg	.L15
.L51:
	movl	%r15d, %ebx
	movl	%r13d, %r15d
	movl	%r12d, %r13d
	movl	32(%rsp), %r12d
	addl	%r13d, %r15d
	addl	%r15d, %ebx
	cmpl	$1, %ebp
	jg	.L49
.L38:
	movl	%ebp, %r12d
	addl	%ebx, %r12d
	jmp	.L37
	.p2align 4,,10
	.p2align 3
.L46:
	movl	%r9d, %r8d
	subl	$2, %eax
	addl	%edi, %ebx
	jmp	.L26
	.p2align 4,,10
	.p2align 3
.L47:
	addl	%eax, %esi
	subl	$2, %edx
	movl	%r10d, %eax
	addl	%esi, %edx
	addl	%edx, %ebx
	cmpl	$1, %r10d
	jg	.L27
	jmp	.L50
	.p2align 4,,10
	.p2align 3
.L48:
	movl	%edx, %ecx
	movl	%ebp, %edi
	movl	20(%rsp), %edx
	movl	24(%rsp), %ebp
	subl	$2, %r13d
	addl	%r8d, %ecx
	jmp	.L32
.L45:
	movl	%r14d, %r9d
	movl	52(%rsp), %r12d
	movl	%r8d, %r14d
	movl	%r11d, %edi
	movl	%ebp, %r13d
	subl	$2, %r9d
	addl	%r10d, %r15d
	jmp	.L23
.L44:
	movl	%r12d, %ebx
	movl	40(%rsp), %r15d
	movl	%r13d, %r12d
	movl	48(%rsp), %ecx
	movl	44(%rsp), %r13d
	subl	$2, %edi
	addl	%eax, %ebx
	jmp	.L20
.L43:
	movl	%r14d, %ebx
	movl	%r12d, %ebp
	subl	$2, %eax
	movl	36(%rsp), %r12d
	addl	%ecx, %ebx
	movl	%r13d, %edx
	addl	%ebx, %eax
	addl	%eax, %r12d
	cmpl	$1, %r13d
	jle	.L51
	movl	56(%rsp), %esi
	leal	-1(%rdx), %ecx
	movl	%ecx, %eax
	cmpl	%esi, %edx
	jne	.L13
.L42:
	movl	%r15d, %ebx
	movl	%r12d, %r13d
	movl	%edx, %r15d
	movl	32(%rsp), %r12d
	subl	$2, %r15d
	addl	%ecx, %r13d
	addl	%r13d, %r15d
	addl	%r15d, %ebx
	cmpl	$1, %ebp
	jle	.L38
.L49:
	leal	-1(%rbp), %edx
	cmpl	%r12d, %ebp
	jne	.L10
.L41:
	addl	%ebx, %edx
	leal	-2(%rbp,%rdx), %r12d
.L37:
	addq	$104, %rsp
	.cfi_def_cfa_offset 56
	movl	%r12d, %eax
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE1782:
	.size	_Z9fibonaccii, .-_Z9fibonaccii
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"Enter the positon:"
.LC1:
	.string	"The "
	.section	.rodata.str1.8,"aMS",@progbits,1
	.align 8
.LC2:
	.string	" number in the fibonacci series is: "
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB1783:
	.cfi_startproc
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	movl	$18, %edx
	movl	$.LC0, %esi
	movl	$_ZSt4cout, %edi
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	xorl	%r13d, %r13d
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	subq	$24, %rsp
	.cfi_def_cfa_offset 80
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l
	movl	$_ZSt4cout, %edi
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0
	leaq	12(%rsp), %rsi
	movl	$_ZSt3cin, %edi
	call	_ZNSirsERi
	movl	$4, %edx
	movl	$.LC1, %esi
	movl	$_ZSt4cout, %edi
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l
	movl	12(%rsp), %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEi
	movl	$36, %edx
	movl	$.LC2, %esi
	movq	%rax, %rdi
	movq	%rax, %r14
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l
	movl	12(%rsp), %r12d
	cmpl	$1, %r12d
	jle	.L55
	leal	-1(%r12), %eax
	movl	%r12d, %r15d
	xorl	%r13d, %r13d
	movl	%eax, %edx
	movl	%eax, %ebx
	andl	$-2, %edx
	subl	%edx, %r15d
	cmpl	%r15d, %r12d
	je	.L61
.L58:
	xorl	%ebp, %ebp
.L54:
	leal	-1(%rbx), %edi
	subl	$2, %ebx
	call	_Z9fibonaccii
	addl	%eax, %ebp
	cmpl	$1, %ebx
	jg	.L54
	leal	-3(%r12), %eax
	subl	$2, %r12d
	andl	$1, %eax
	addl	%ebp, %eax
	addl	%eax, %r13d
	cmpl	$1, %r12d
	jle	.L55
	leal	-1(%r12), %eax
	movl	%eax, %ebx
	cmpl	%r15d, %r12d
	jne	.L58
.L61:
	subl	$2, %r12d
	addl	%eax, %r13d
.L55:
	leal	0(%r13,%r12), %esi
	movq	%r14, %rdi
	call	_ZNSolsEi
	movq	%rax, %rdi
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0
	addq	$24, %rsp
	.cfi_def_cfa_offset 56
	xorl	%eax, %eax
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE1783:
	.size	main, .-main
	.p2align 4
	.type	_GLOBAL__sub_I__Z9fibonaccii, @function
_GLOBAL__sub_I__Z9fibonaccii:
.LFB2316:
	.cfi_startproc
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	jmp	__cxa_atexit
	.cfi_endproc
.LFE2316:
	.size	_GLOBAL__sub_I__Z9fibonaccii, .-_GLOBAL__sub_I__Z9fibonaccii
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z9fibonaccii
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.hidden	__dso_handle
	.ident	"GCC: (GNU) 12.2.1 20220819 (Red Hat 12.2.1-2)"
	.section	.note.GNU-stack,"",@progbits
