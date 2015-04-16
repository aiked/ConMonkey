/*
void movl_i32m(int imm, int offset, RegisterID base)
{
	spew("movl       $0x%x, %s0x%x(%s)",
		 imm, PRETTY_PRINT_OFFSET(offset), nameIReg(base));
	m_formatter.oneByteOp(OP_GROUP11_EvIz, GROUP11_MOV, base, offset);
	m_formatter.immediate32(imm);
}
*/

/*
void movl_i32r(int imm, RegisterID dst)
{
	spew("movl       $0x%x, %s",
			imm, nameIReg(4, dst));
	m_formatter.oneByteOp(OP_MOV_EAXIv, dst);
	m_formatter.immediate32(imm);
}
 */

/*
void movw_i16m(int imm, int offset, RegisterID base)
{
	spew("movw       $0x%x, %s0x%x(%s)",
		 imm, PRETTY_PRINT_OFFSET(offset), nameIReg(base));
	m_formatter.prefix(PRE_OPERAND_SIZE);
	m_formatter.oneByteOp(OP_GROUP11_EvIz, GROUP11_MOV, base, offset);
	m_formatter.immediate16(imm);
}
 */
