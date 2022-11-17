	.file	"matrix_prog.c"
	.option nopic
	.attribute arch, "rv64i2p0_m2p0_a2p0_f2p0_d2p0_c2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.section	.rodata
	.align	3
.LC1:
	.string	"\nThe matrix is: "
	.align	3
.LC2:
	.string	"%4d"
	.align	3
.LC3:
	.string	"\nThe determinant is %d.\n"
	.align	3
.LC4:
	.string	"The sum of all elements in matrix is: %d.\n"
	.align	3
.LC0:
	.word	1
	.word	6
	.word	9
	.word	7
	.word	2
	.word	6
	.word	3
	.word	5
	.word	4
	.text
	.align	1
	.globl	main
	.type	main, @function
main:
	addi	sp,sp,-64
	sd	ra,56(sp)
	sd	s0,48(sp)
	addi	s0,sp,64
	lui	a5,%hi(.LC0)
	addi	a5,a5,%lo(.LC0)
	ld	a1,0(a5)
	ld	a2,8(a5)
	ld	a3,16(a5)
	ld	a4,24(a5)
	sd	a1,-64(s0)
	sd	a2,-56(s0)
	sd	a3,-48(s0)
	sd	a4,-40(s0)
	lw	a5,32(a5)
	sw	a5,-32(s0)
	lui	a5,%hi(.LC1)
	addi	a0,a5,%lo(.LC1)
	call	puts
	sw	zero,-20(s0)
	j	.L2
.L5:
	sw	zero,-24(s0)
	j	.L3
.L4:
	lw	a3,-24(s0)
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,1
	add	a5,a5,a4
	add	a5,a5,a3
	slli	a5,a5,2
	addi	a5,a5,-16
	add	a5,a5,s0
	lw	a5,-48(a5)
	mv	a1,a5
	lui	a5,%hi(.LC2)
	addi	a0,a5,%lo(.LC2)
	call	printf
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L3:
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,2
	ble	a4,a5,.L4
	li	a0,10
	call	putchar
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L2:
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,2
	ble	a4,a5,.L5
	addi	a5,s0,-64
	mv	a0,a5
	call	compute3x3Det
	mv	a5,a0
	mv	a1,a5
	lui	a5,%hi(.LC3)
	addi	a0,a5,%lo(.LC3)
	call	printf
	addi	a5,s0,-64
	mv	a0,a5
	call	sum
	mv	a5,a0
	mv	a1,a5
	lui	a5,%hi(.LC4)
	addi	a0,a5,%lo(.LC4)
	call	printf
	addi	a5,s0,-64
	mv	a0,a5
	call	identityM
	li	a5,0
	mv	a0,a5
	ld	ra,56(sp)
	ld	s0,48(sp)
	addi	sp,sp,64
	jr	ra
	.size	main, .-main
	.align	1
	.globl	compute3x3Det
	.type	compute3x3Det, @function
compute3x3Det:
	addi	sp,sp,-48
	sd	s0,40(sp)
	addi	s0,sp,48
	sd	a0,-40(s0)
	ld	a5,-40(s0)
	lw	a4,0(a5)
	ld	a5,-40(s0)
	addi	a5,a5,12
	lw	a3,4(a5)
	ld	a5,-40(s0)
	addi	a5,a5,24
	lw	a5,8(a5)
	mulw	a5,a3,a5
	sext.w	a3,a5
	ld	a5,-40(s0)
	addi	a5,a5,12
	lw	a2,8(a5)
	ld	a5,-40(s0)
	addi	a5,a5,24
	lw	a5,4(a5)
	mulw	a5,a2,a5
	sext.w	a5,a5
	subw	a5,a3,a5
	sext.w	a5,a5
	mulw	a5,a4,a5
	sext.w	a4,a5
	ld	a5,-40(s0)
	lw	a3,4(a5)
	ld	a5,-40(s0)
	addi	a5,a5,12
	lw	a2,0(a5)
	ld	a5,-40(s0)
	addi	a5,a5,24
	lw	a5,8(a5)
	mulw	a5,a2,a5
	sext.w	a2,a5
	ld	a5,-40(s0)
	addi	a5,a5,12
	lw	a1,8(a5)
	ld	a5,-40(s0)
	addi	a5,a5,24
	lw	a5,0(a5)
	mulw	a5,a1,a5
	sext.w	a5,a5
	subw	a5,a2,a5
	sext.w	a5,a5
	mulw	a5,a3,a5
	sext.w	a5,a5
	subw	a5,a4,a5
	sext.w	a4,a5
	ld	a5,-40(s0)
	lw	a3,8(a5)
	ld	a5,-40(s0)
	addi	a5,a5,12
	lw	a2,0(a5)
	ld	a5,-40(s0)
	addi	a5,a5,24
	lw	a5,4(a5)
	mulw	a5,a2,a5
	sext.w	a2,a5
	ld	a5,-40(s0)
	addi	a5,a5,12
	lw	a1,4(a5)
	ld	a5,-40(s0)
	addi	a5,a5,24
	lw	a5,0(a5)
	mulw	a5,a1,a5
	sext.w	a5,a5
	subw	a5,a2,a5
	sext.w	a5,a5
	mulw	a5,a3,a5
	sext.w	a5,a5
	addw	a5,a4,a5
	sw	a5,-20(s0)
	lw	a5,-20(s0)
	mv	a0,a5
	ld	s0,40(sp)
	addi	sp,sp,48
	jr	ra
	.size	compute3x3Det, .-compute3x3Det
	.section	.rodata
	.align	3
.LC5:
	.string	"The matrix is an identity matrix."
	.align	3
.LC6:
	.string	"The matrix is not an identity matrix."
	.text
	.align	1
	.globl	identityM
	.type	identityM, @function
identityM:
	addi	sp,sp,-32
	sd	ra,24(sp)
	sd	s0,16(sp)
	addi	s0,sp,32
	sd	a0,-24(s0)
	ld	a5,-24(s0)
	lw	a5,0(a5)
	mv	a4,a5
	li	a5,1
	bne	a4,a5,.L10
	ld	a5,-24(s0)
	addi	a5,a5,12
	lw	a5,4(a5)
	mv	a4,a5
	li	a5,1
	bne	a4,a5,.L10
	ld	a5,-24(s0)
	addi	a5,a5,24
	lw	a5,8(a5)
	mv	a4,a5
	li	a5,1
	bne	a4,a5,.L10
	ld	a5,-24(s0)
	lw	a5,4(a5)
	bne	a5,zero,.L11
	ld	a5,-24(s0)
	lw	a5,8(a5)
	bne	a5,zero,.L11
	ld	a5,-24(s0)
	addi	a5,a5,12
	lw	a5,0(a5)
	bne	a5,zero,.L11
	ld	a5,-24(s0)
	addi	a5,a5,12
	lw	a5,8(a5)
	bne	a5,zero,.L11
	ld	a5,-24(s0)
	addi	a5,a5,24
	lw	a5,0(a5)
	bne	a5,zero,.L11
	ld	a5,-24(s0)
	addi	a5,a5,24
	lw	a5,4(a5)
	bne	a5,zero,.L11
	lui	a5,%hi(.LC5)
	addi	a0,a5,%lo(.LC5)
	call	puts
	j	.L13
.L11:
	lui	a5,%hi(.LC6)
	addi	a0,a5,%lo(.LC6)
	call	puts
	j	.L13
.L10:
	lui	a5,%hi(.LC6)
	addi	a0,a5,%lo(.LC6)
	call	puts
	nop
.L13:
	nop
	ld	ra,24(sp)
	ld	s0,16(sp)
	addi	sp,sp,32
	jr	ra
	.size	identityM, .-identityM
	.align	1
	.globl	sum
	.type	sum, @function
sum:
	addi	sp,sp,-48
	sd	s0,40(sp)
	addi	s0,sp,48
	sd	a0,-40(s0)
	sw	zero,-28(s0)
	sw	zero,-20(s0)
	j	.L15
.L18:
	sw	zero,-24(s0)
	j	.L16
.L17:
	lw	a4,-20(s0)
	mv	a5,a4
	slli	a5,a5,1
	add	a5,a5,a4
	slli	a5,a5,2
	mv	a4,a5
	ld	a5,-40(s0)
	add	a4,a5,a4
	lw	a5,-24(s0)
	slli	a5,a5,2
	add	a5,a4,a5
	lw	a5,0(a5)
	lw	a4,-28(s0)
	addw	a5,a4,a5
	sw	a5,-28(s0)
	lw	a5,-24(s0)
	addiw	a5,a5,1
	sw	a5,-24(s0)
.L16:
	lw	a5,-24(s0)
	sext.w	a4,a5
	li	a5,2
	ble	a4,a5,.L17
	lw	a5,-20(s0)
	addiw	a5,a5,1
	sw	a5,-20(s0)
.L15:
	lw	a5,-20(s0)
	sext.w	a4,a5
	li	a5,2
	ble	a4,a5,.L18
	lw	a5,-28(s0)
	mv	a0,a5
	ld	s0,40(sp)
	addi	sp,sp,48
	jr	ra
	.size	sum, .-sum
	.ident	"GCC: (g2ee5e430018) 12.2.0"
	.section	.note.GNU-stack,"",@progbits
