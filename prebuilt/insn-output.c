/* Generated automatically by the program `genoutput'
from the machine description file `md'.  */

#include "config.h"
#include <stdio.h>
#include "flags.h"
#include "rtl.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "real.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-flags.h"
#include "insn-attr.h"

#include "insn-codes.h"

#include "recog.h"

#include "output.h"

static char *
output_0 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REG_P (operands[0]))
    return AS2 (test%L0,%0,%0);

  operands[1] = const0_rtx;
  return AS2 (cmp%L0,%1,%0);
}
}

static char *
output_2 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REG_P (operands[0]))
    return AS2 (test%W0,%0,%0);

  operands[1] = const0_rtx;
  return AS2 (cmp%W0,%1,%0);
}
}

static char *
output_4 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REG_P (operands[0]))
    return AS2 (test%B0,%0,%0);

  operands[1] = const0_rtx;
  return AS2 (cmp%B0,%1,%0);
}
}

static char *
output_6 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (! STACK_TOP_P (operands[0]))
    abort ();

  output_asm_insn ("ftst", operands);

  if (find_regno_note (insn, REG_DEAD, FIRST_STACK_REG))
    output_asm_insn (AS1 (fstp,%y0), operands);

  return output_fp_cc0_set (insn);
}
}

static char *
output_8 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (! STACK_TOP_P (operands[0]))
    abort ();

  output_asm_insn ("ftst", operands);

  if (find_regno_note (insn, REG_DEAD, FIRST_STACK_REG))
    output_asm_insn (AS1 (fstp,%y0), operands);

  return output_fp_cc0_set (insn);
}
}

static char *
output_10 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (! STACK_TOP_P (operands[0]))
    abort ();

  output_asm_insn ("ftst", operands);

  if (find_regno_note (insn, REG_DEAD, FIRST_STACK_REG))
    output_asm_insn (AS1 (fstp,%y0), operands);

  return output_fp_cc0_set (insn);
}
}

static char *
output_12 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (CONSTANT_P (operands[0]) || GET_CODE (operands[1]) == MEM)
    {
      cc_status.flags |= CC_REVERSED;
      return AS2 (cmp%L0,%0,%1);
    }
  return AS2 (cmp%L0,%1,%0);
}
}

static char *
output_14 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (CONSTANT_P (operands[0]) || GET_CODE (operands[1]) == MEM)
    {
      cc_status.flags |= CC_REVERSED;
      return AS2 (cmp%W0,%0,%1);
    }
  return AS2 (cmp%W0,%1,%0);
}
}

static char *
output_16 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (CONSTANT_P (operands[0]) || GET_CODE (operands[1]) == MEM)
    {
      cc_status.flags |= CC_REVERSED;
      return AS2 (cmp%B0,%0,%1);
    }
  return AS2 (cmp%B0,%1,%0);
}
}

static char *
output_18 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_float_compare (insn, operands);
}

static char *
output_19 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_float_compare (insn, operands);
}

static char *
output_20 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_float_compare (insn, operands);
}

static char *
output_21 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_float_compare (insn, operands);
}

static char *
output_22 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_float_compare (insn, operands);
}

static char *
output_23 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_float_compare (insn, operands);
}

static char *
output_24 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_float_compare (insn, operands);
}

static char *
output_25 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_float_compare (insn, operands);
}

static char *
output_26 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_float_compare (insn, operands);
}

static char *
output_27 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_float_compare (insn, operands);
}

static char *
output_28 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_float_compare (insn, operands);
}

static char *
output_29 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_float_compare (insn, operands);
}

static char *
output_30 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_float_compare (insn, operands);
}

static char *
output_31 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_float_compare (insn, operands);
}

static char *
output_32 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_float_compare (insn, operands);
}

static char *
output_33 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_float_compare (insn, operands);
}

static char *
output_34 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_float_compare (insn, operands);
}

static char *
output_35 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_float_compare (insn, operands);
}

static char *
output_45 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  /* For small integers, we may actually use testb. */
  if (GET_CODE (operands[1]) == CONST_INT
      && ! (GET_CODE (operands[0]) == MEM && MEM_VOLATILE_P (operands[0]))
      && (! REG_P (operands[0]) || QI_REG_P (operands[0])))
    {
      /* We may set the sign bit spuriously.  */

      if ((INTVAL (operands[1]) & ~0xff) == 0)
        {
	  cc_status.flags |= CC_NOT_NEGATIVE;
	  return AS2 (test%B0,%1,%b0);
	}

      if ((INTVAL (operands[1]) & ~0xff00) == 0)
        {
	  cc_status.flags |= CC_NOT_NEGATIVE;
	  operands[1] = GEN_INT (INTVAL (operands[1]) >> 8);

	  if (QI_REG_P (operands[0]))
	    return AS2 (test%B0,%1,%h0);
	  else
	    {
	      operands[0] = adj_offsettable_operand (operands[0], 1);
	      return AS2 (test%B0,%1,%b0);
	    }
	}

      if (GET_CODE (operands[0]) == MEM
	  && (INTVAL (operands[1]) & ~0xff0000) == 0)
        {
	  cc_status.flags |= CC_NOT_NEGATIVE;
	  operands[1] = GEN_INT (INTVAL (operands[1]) >> 16);
	  operands[0] = adj_offsettable_operand (operands[0], 2);
	  return AS2 (test%B0,%1,%b0);
	}

      if (GET_CODE (operands[0]) == MEM
	  && (INTVAL (operands[1]) & ~0xff000000) == 0)
        {
	  operands[1] = GEN_INT ((INTVAL (operands[1]) >> 24) & 0xff);
	  operands[0] = adj_offsettable_operand (operands[0], 3);
	  return AS2 (test%B0,%1,%b0);
	}
    }

  if (CONSTANT_P (operands[1]) || GET_CODE (operands[0]) == MEM)
    return AS2 (test%L0,%1,%0);

  return AS2 (test%L1,%0,%1);
}
}

static char *
output_46 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (GET_CODE (operands[1]) == CONST_INT
      && ! (GET_CODE (operands[0]) == MEM && MEM_VOLATILE_P (operands[0]))
      && (! REG_P (operands[0]) || QI_REG_P (operands[0])))
    {
      if ((INTVAL (operands[1]) & 0xff00) == 0)
	{
	  /* ??? This might not be necessary. */
	  if (INTVAL (operands[1]) & 0xffff0000)
	    operands[1] = GEN_INT (INTVAL (operands[1]) & 0xff);

	  /* We may set the sign bit spuriously.  */
	  cc_status.flags |= CC_NOT_NEGATIVE;
	  return AS2 (test%B0,%1,%b0);
	}

      if ((INTVAL (operands[1]) & 0xff) == 0)
        {
	  operands[1] = GEN_INT ((INTVAL (operands[1]) >> 8) & 0xff);

	  if (QI_REG_P (operands[0]))
	    return AS2 (test%B0,%1,%h0);
	  else
	    {
	      operands[0] = adj_offsettable_operand (operands[0], 1);
	      return AS2 (test%B0,%1,%b0);
	    }
	}
    }

  /* use 32-bit test instruction if there are no sign issues */
  if (GET_CODE (operands[1]) == CONST_INT
      && !(INTVAL (operands[1]) & ~0x7fff)
      && i386_aligned_p (operands[0]))
    return AS2 (test%L0,%1,%k0);

  if (CONSTANT_P (operands[1]) || GET_CODE (operands[0]) == MEM)
    return AS2 (test%W0,%1,%0);

  return AS2 (test%W1,%0,%1);
}
}

static char *
output_47 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (CONSTANT_P (operands[1]) || GET_CODE (operands[0]) == MEM)
    return AS2 (test%B0,%1,%0);

  return AS2 (test%B1,%0,%1);
}
}

static char *
output_52 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx link;
  if (operands[1] == const0_rtx && REG_P (operands[0]))
    return AS2 (xor%L0,%0,%0);

  if (operands[1] == const1_rtx
      && (link = find_reg_note (insn, REG_WAS_0, 0))
      /* Make sure the insn that stored the 0 is still present.  */
      && ! INSN_DELETED_P (XEXP (link, 0))
      && GET_CODE (XEXP (link, 0)) != NOTE
      /* Make sure cross jumping didn't happen here.  */
      && no_labels_between_p (XEXP (link, 0), insn)
      /* Make sure the reg hasn't been clobbered.  */
      && ! reg_set_between_p (operands[0], XEXP (link, 0), insn))
    /* Fastest way to change a 0 to a 1.  */
    return AS1 (inc%L0,%0);

  if (flag_pic && SYMBOLIC_CONST (operands[1]))
    return AS2 (lea%L0,%a1,%0);

  return AS2 (mov%L0,%1,%0);
}
}

static char *
output_57 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx link;
  if (REG_P (operands[0]) && operands[1] == const0_rtx)
    return AS2 (xor%L0,%k0,%k0);

  if (REG_P (operands[0]) && operands[1] == const1_rtx 
      && (link = find_reg_note (insn, REG_WAS_0, 0))
      /* Make sure the insn that stored the 0 is still present.  */
      && ! INSN_DELETED_P (XEXP (link, 0))
      && GET_CODE (XEXP (link, 0)) != NOTE
      /* Make sure cross jumping didn't happen here.  */
      && no_labels_between_p (XEXP (link, 0), insn)
      /* Make sure the reg hasn't been clobbered.  */
      && ! reg_set_between_p (operands[0], XEXP (link, 0), insn))
    /* Fastest way to change a 0 to a 1.  */
    return AS1 (inc%L0,%k0);

  if (REG_P (operands[0]))
    {
      if (i386_aligned_p (operands[1]))
	{
	  operands[1] = i386_sext16_if_const (operands[1]);
	  return AS2 (mov%L0,%k1,%k0);
	}
      if (TARGET_PENTIUMPRO)
	{
	  /* movzwl is faster than movw on the Pentium Pro,
	   * although not as fast as an aligned movl. */
#ifdef INTEL_SYNTAX
	  return AS2 (movzx,%1,%k0);
#else
	  return AS2 (movz%W0%L0,%1,%k0);
#endif
	}
    }

  return AS2 (mov%W0,%1,%0);
}
}

static char *
output_59 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx link;
  if (operands[1] == const0_rtx && REG_P (operands[0]))
    return AS2 (xor%W0,%0,%0);

  if (operands[1] == const1_rtx
      && (link = find_reg_note (insn, REG_WAS_0, 0))
      /* Make sure the insn that stored the 0 is still present.  */
      && ! INSN_DELETED_P (XEXP (link, 0))
      && GET_CODE (XEXP (link, 0)) != NOTE
      /* Make sure cross jumping didn't happen here.  */
      && no_labels_between_p (XEXP (link, 0), insn)
      /* Make sure the reg hasn't been clobbered.  */
      && ! reg_set_between_p (operands[0], XEXP (link, 0), insn))
    /* Fastest way to change a 0 to a 1.  */
    return AS1 (inc%W0,%0);

  return AS2 (mov%W0,%1,%0);
}
}

static char *
output_60 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return AS1 (push%W0,%1);
}

static char *
output_61 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  operands[1] = gen_rtx (REG, HImode, REGNO (operands[1]));
  return AS1 (push%W0,%1);
}
}

static char *
output_62 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  operands[1] = gen_rtx (REG, HImode, REGNO (operands[1]));
  return AS1 (push%W0,%1);
}
}

static char *
output_64 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx link;
  if (operands[1] == const0_rtx && REG_P (operands[0]))
    return AS2 (xor%L0,%k0,%k0);

  if (operands[1] == const1_rtx
      && (link = find_reg_note (insn, REG_WAS_0, 0))
      /* Make sure the insn that stored the 0 is still present.  */
      && ! INSN_DELETED_P (XEXP (link, 0))
      && GET_CODE (XEXP (link, 0)) != NOTE
      /* Make sure cross jumping didn't happen here.  */
      && no_labels_between_p (XEXP (link, 0), insn)
      /* Make sure the reg hasn't been clobbered.  */
      && ! reg_set_between_p (operands[0], XEXP (link, 0), insn))
    /* Fastest way to change a 0 to a 1.  */
    return AS1 (inc%B0,%0);

  /* If mov%B0 isn't allowed for one of these regs, use mov%L0.  */
  if (NON_QI_REG_P (operands[0]) || NON_QI_REG_P (operands[1]))
    return (AS2 (mov%L0,%k1,%k0));

  return (AS2 (mov%B0,%1,%0));
}
}

static char *
output_66 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx link;
  if (operands[1] == const0_rtx && REG_P (operands[0]))
    return AS2 (xor%B0,%0,%0);

  if (operands[1] == const1_rtx
      && (link = find_reg_note (insn, REG_WAS_0, 0))
      /* Make sure the insn that stored the 0 is still present.  */
      && ! INSN_DELETED_P (XEXP (link, 0))
      && GET_CODE (XEXP (link, 0)) != NOTE
      /* Make sure cross jumping didn't happen here.  */
      && no_labels_between_p (XEXP (link, 0), insn)
      /* Make sure the reg hasn't been clobbered.  */
      && ! reg_set_between_p (operands[0], XEXP (link, 0), insn))
    /* Fastest way to change a 0 to a 1.  */
    return AS1 (inc%B0,%0);

  /* If mov%B0 isn't allowed for one of these regs, use mov%L0.  */
  if (NON_QI_REG_P (operands[0]) || NON_QI_REG_P (operands[1]))
    {
      abort ();
      return (AS2 (mov%L0,%k1,%k0));
    }

  return AS2 (mov%B0,%1,%0);
}
}

static char *
output_68 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (STACK_REG_P (operands[1]))
    {
      rtx xops[3];

      if (! STACK_TOP_P (operands[1]))
        abort ();

      xops[0] = AT_SP (SFmode);
      xops[1] = GEN_INT (4);
      xops[2] = stack_pointer_rtx;

      output_asm_insn (AS2 (sub%L2,%1,%2), xops);

      if (find_regno_note (insn, REG_DEAD, FIRST_STACK_REG))
        output_asm_insn (AS1 (fstp%S0,%0), xops);
      else
        output_asm_insn (AS1 (fst%S0,%0), xops);
      RET;
    }
  return AS1 (push%L1,%1);
}
}

static char *
output_69 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (STACK_REG_P (operands[1]))
    {
      rtx xops[3];

      if (! STACK_TOP_P (operands[1]))
        abort ();

      xops[0] = AT_SP (SFmode);
      xops[1] = GEN_INT (4);
      xops[2] = stack_pointer_rtx;

      output_asm_insn (AS2 (sub%L2,%1,%2), xops);

      if (find_regno_note (insn, REG_DEAD, FIRST_STACK_REG))
        output_asm_insn (AS1 (fstp%S0,%0), xops);
      else
        output_asm_insn (AS1 (fst%S0,%0), xops);
      RET;
    }

  else if (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != REG)
    return AS1 (push%L1,%1);

  else
    {
      output_asm_insn (AS2 (mov%L2,%1,%2), operands);
      return AS1 (push%L2,%2);
    }
}
}

static char *
output_70 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  output_asm_insn (AS2 (mov%L2,%1,%2), operands);
  return AS2 (mov%L0,%2,%0);
}
}

static char *
output_71 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  int stack_top_dies = find_regno_note (insn, REG_DEAD, FIRST_STACK_REG) != 0;

  /* First handle a `pop' insn or a `fld %st(0)' */

  if (STACK_TOP_P (operands[0]) && STACK_TOP_P (operands[1]))
    {
      if (stack_top_dies)
	return AS1 (fstp,%y0);
      else
        return AS1 (fld,%y0);
    }

  /* Handle a transfer between the 387 and a 386 register */

  if (STACK_TOP_P (operands[0]) && NON_STACK_REG_P (operands[1]))
    {
      output_op_from_reg (operands[1], AS1 (fld%z0,%y1));
      RET;
    }

  if (STACK_TOP_P (operands[1]) && NON_STACK_REG_P (operands[0]))
    {
      output_to_reg (operands[0], stack_top_dies, 0);
      RET;
    }

  /* Handle other kinds of writes from the 387 */

  if (STACK_TOP_P (operands[1]))
    {
      if (stack_top_dies)
	return AS1 (fstp%z0,%y0);
      else
        return AS1 (fst%z0,%y0);
    }

  /* Handle other kinds of reads to the 387 */

  if (STACK_TOP_P (operands[0]) && GET_CODE (operands[1]) == CONST_DOUBLE)
    return output_move_const_single (operands);

  if (STACK_TOP_P (operands[0]))
    return AS1 (fld%z1,%y1);

  /* Handle all SFmode moves not involving the 387 */

  return singlemove_string (operands);
}
}

static char *
output_72 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (STACK_TOP_P (operands[0]))
    return AS1 (fxch,%1);
  else
    return AS1 (fxch,%0);
}
}

static char *
output_74 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (STACK_REG_P (operands[1]))
    {
      rtx xops[3];

      xops[0] = AT_SP (SFmode);
      xops[1] = GEN_INT (8);
      xops[2] = stack_pointer_rtx;

      output_asm_insn (AS2 (sub%L2,%1,%2), xops);

      if (find_regno_note (insn, REG_DEAD, FIRST_STACK_REG))
        output_asm_insn (AS1 (fstp%Q0,%0), xops);
      else
        output_asm_insn (AS1 (fst%Q0,%0), xops);

      RET;
    }
  else
    return output_move_double (operands);
}
}

static char *
output_75 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (STACK_REG_P (operands[1]))
    {
      rtx xops[3];

      xops[0] = AT_SP (SFmode);
      xops[1] = GEN_INT (8);
      xops[2] = stack_pointer_rtx;

      output_asm_insn (AS2 (sub%L2,%1,%2), xops);

      if (find_regno_note (insn, REG_DEAD, FIRST_STACK_REG))
        output_asm_insn (AS1 (fstp%Q0,%0), xops);
      else
        output_asm_insn (AS1 (fst%Q0,%0), xops);

      RET;
    }

  else if (GET_CODE (operands[1]) != MEM)
    return output_move_double (operands);

  else
    return output_move_pushmem (operands, insn, GET_MODE_SIZE (DFmode), 2, 4);
}
}

static char *
output_76 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_move_memory (operands, insn, GET_MODE_SIZE (DFmode), 2, 4);
}

static char *
output_77 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  int stack_top_dies = find_regno_note (insn, REG_DEAD, FIRST_STACK_REG) != 0;

  /* First handle a `pop' insn or a `fld %st(0)' */

  if (STACK_TOP_P (operands[0]) && STACK_TOP_P (operands[1]))
    {
      if (stack_top_dies)
	return AS1 (fstp,%y0);
      else
        return AS1 (fld,%y0);
    }

  /* Handle a transfer between the 387 and a 386 register */

  if (STACK_TOP_P (operands[0]) && NON_STACK_REG_P (operands[1]))
    {
      output_op_from_reg (operands[1], AS1 (fld%z0,%y1));
      RET;
    }

  if (STACK_TOP_P (operands[1]) && NON_STACK_REG_P (operands[0]))
    {
      output_to_reg (operands[0], stack_top_dies, 0);
      RET;
    }

  /* Handle other kinds of writes from the 387 */

  if (STACK_TOP_P (operands[1]))
    {
      if (stack_top_dies)
	return AS1 (fstp%z0,%y0);
      else
        return AS1 (fst%z0,%y0);
    }

  /* Handle other kinds of reads to the 387 */

  if (STACK_TOP_P (operands[0]) && GET_CODE (operands[1]) == CONST_DOUBLE)
    return output_move_const_single (operands);

  if (STACK_TOP_P (operands[0]))
    return AS1 (fld%z1,%y1);

  /* Handle all DFmode moves not involving the 387 */

  return output_move_double (operands);
}
}

static char *
output_78 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (STACK_TOP_P (operands[0]))
    return AS1 (fxch,%1);
  else
    return AS1 (fxch,%0);
}
}

static char *
output_80 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (STACK_REG_P (operands[1]))
    {
      rtx xops[3];

      xops[0] = AT_SP (SFmode);
      xops[1] = GEN_INT (12);
      xops[2] = stack_pointer_rtx;

      output_asm_insn (AS2 (sub%L2,%1,%2), xops);
      output_asm_insn (AS1 (fstp%T0,%0), xops);
      if (! find_regno_note (insn, REG_DEAD, FIRST_STACK_REG))
	output_asm_insn (AS1 (fld%T0,%0), xops);

      RET;
    }
  else
    return output_move_double (operands);
 }
}

static char *
output_81 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (STACK_REG_P (operands[1]))
    {
      rtx xops[3];

      xops[0] = AT_SP (SFmode);
      xops[1] = GEN_INT (12);
      xops[2] = stack_pointer_rtx;

      output_asm_insn (AS2 (sub%L2,%1,%2), xops);
      output_asm_insn (AS1 (fstp%T0,%0), xops);
      if (! find_regno_note (insn, REG_DEAD, FIRST_STACK_REG))
	output_asm_insn (AS1 (fld%T0,%0), xops);

      RET;
    }

  else if (GET_CODE (operands[1]) != MEM
	   || GET_CODE (operands[2]) != REG)
    return output_move_double (operands);

  else
    return output_move_pushmem (operands, insn, GET_MODE_SIZE (XFmode), 2, 4);
}
}

static char *
output_82 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_move_memory (operands, insn, GET_MODE_SIZE (XFmode), 2, 4);
}

static char *
output_83 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  int stack_top_dies = find_regno_note (insn, REG_DEAD, FIRST_STACK_REG) != 0;

  /* First handle a `pop' insn or a `fld %st(0)' */

  if (STACK_TOP_P (operands[0]) && STACK_TOP_P (operands[1]))
    {
      if (stack_top_dies)
	return AS1 (fstp,%y0);
      else
        return AS1 (fld,%y0);
    }

  /* Handle a transfer between the 387 and a 386 register */

  if (STACK_TOP_P (operands[0]) && NON_STACK_REG_P (operands[1]))
    {
      output_op_from_reg (operands[1], AS1 (fld%z0,%y1));
      RET;
    }

  if (STACK_TOP_P (operands[1]) && NON_STACK_REG_P (operands[0]))
    {
      output_to_reg (operands[0], stack_top_dies, 0);
      RET;
    }

  /* Handle other kinds of writes from the 387 */

  if (STACK_TOP_P (operands[1]))
    {
      output_asm_insn (AS1 (fstp%z0,%y0), operands);
      if (! stack_top_dies)
	return AS1 (fld%z0,%y0);

      RET;
    }

  /* Handle other kinds of reads to the 387 */

  if (STACK_TOP_P (operands[0]) && GET_CODE (operands[1]) == CONST_DOUBLE)
    return output_move_const_single (operands);

  if (STACK_TOP_P (operands[0]))
       return AS1 (fld%z1,%y1);

  /* Handle all XFmode moves not involving the 387 */

  return output_move_double (operands);
}
}

static char *
output_84 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (STACK_TOP_P (operands[0]))
    return AS1 (fxch,%1);
  else
    return AS1 (fxch,%0);
}
}

static char *
output_85 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (GET_CODE (operands[1]) != MEM)
    return output_move_double (operands);

  else
    return output_move_pushmem (operands, insn, GET_MODE_SIZE (DImode), 2, 4);
}
}

static char *
output_86 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx low[2], high[2], xop[6];

  if (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
    return output_move_double (operands);
  else
    return output_move_memory (operands, insn, GET_MODE_SIZE (DImode), 2, 4);
}
}

static char *
output_87 (operands, insn)
     rtx *operands;
     rtx insn;
{

  {
  rtx xops[2];

  if ((TARGET_ZERO_EXTEND_WITH_AND || REGNO (operands[0]) == 0) 
      && REG_P (operands[1]) && REGNO (operands[0]) == REGNO (operands[1]))
    {
      xops[0] = operands[0];
      xops[1] = GEN_INT (0xffff);
      output_asm_insn (AS2 (and%L0,%1,%k0), xops);
      RET;
    }
  if (TARGET_ZERO_EXTEND_WITH_AND && !reg_overlap_mentioned_p (operands[0], operands[1]))
    {
      output_asm_insn (AS2 (xor%L0,%0,%0),operands);
      output_asm_insn (AS2 (mov%W0,%1,%w0),operands);
      RET;
    }

  if (TARGET_ZERO_EXTEND_WITH_AND)
    {
      xops[0] = operands[0];
      xops[1] = gen_rtx (CONST_INT, VOIDmode, 0xffff);
      if (i386_aligned_p (operands[1]))
	output_asm_insn (AS2 (mov%L0,%k1,%k0),operands);
      else
	output_asm_insn (AS2 (mov%W0,%1,%w0),operands);
      output_asm_insn (AS2 (and%L0,%1,%k0), xops);
      RET;
    }

#ifdef INTEL_SYNTAX
  return AS2 (movzx,%1,%0);
#else
  return AS2 (movz%W0%L0,%1,%0);
#endif
}
}

static char *
output_90 (operands, insn)
     rtx *operands;
     rtx insn;
{

  {
  rtx xops[2];

  if ((TARGET_ZERO_EXTEND_WITH_AND || REGNO (operands[0]) == 0)
      && REG_P (operands[1]) 
      && REGNO (operands[0]) == REGNO (operands[1]))
    {
      xops[0] = operands[0];
      xops[1] = GEN_INT (0xff);
      output_asm_insn (AS2 (and%L0,%1,%k0), xops);
      RET;
    }
  if (TARGET_ZERO_EXTEND_WITH_AND && QI_REG_P (operands[0]))
    {
      if(!reg_overlap_mentioned_p(operands[0],operands[1]))
	{
	  output_asm_insn (AS2 (xor%L0,%k0,%k0), operands);
	  output_asm_insn (AS2 (mov%B0,%1,%b0), operands);
	}
      else
	{
	  xops[0] = operands[0];
	  xops[1] = gen_rtx (CONST_INT, VOIDmode, 0xff);
	  output_asm_insn (AS2 (mov%B0,%1,%b0),operands);
	  output_asm_insn (AS2 (and%L0,%1,%k0), xops);
	}
      RET;
    }
  
#ifdef INTEL_SYNTAX
  return AS2 (movzx,%1,%0);
#else
  return AS2 (movz%B0%W0,%1,%0);
#endif
}
}

static char *
output_94 (operands, insn)
     rtx *operands;
     rtx insn;
{

  {
  rtx xops[2];

  if ((TARGET_ZERO_EXTEND_WITH_AND || REGNO (operands[0]) == 0)
      && REG_P (operands[1]) 
      && REGNO (operands[0]) == REGNO (operands[1]))
    {
      xops[0] = operands[0];
      xops[1] = GEN_INT (0xff);
      output_asm_insn (AS2 (and%L0,%1,%k0), xops);
      RET;
    }
  if (TARGET_ZERO_EXTEND_WITH_AND && QI_REG_P (operands[0]))
    {
      if(!reg_overlap_mentioned_p (operands[0], operands[1]))
	{
	  output_asm_insn (AS2 (xor%L0,%0,%0),operands);
	  output_asm_insn (AS2 (mov%B0,%1,%b0),operands);
	}
      else
	{
	  xops[0] = operands[0];
	  xops[1] = gen_rtx (CONST_INT, VOIDmode, 0xff);
	  output_asm_insn (AS2 (mov%B0,%1,%b0), operands);
	  output_asm_insn (AS2 (and%L0,%1,%k0), xops);
	}
      RET;
    }

  if (TARGET_ZERO_EXTEND_WITH_AND && GET_CODE (operands[1]) == REG)
    {
      xops[0] = operands[0];
      xops[1] = gen_rtx (CONST_INT, VOIDmode, 0xff);
      operands[1] = gen_rtx (REG, SImode, REGNO (operands[1]));
      output_asm_insn (AS2 (mov%L0,%1,%0), operands);
      output_asm_insn (AS2 (and%L0,%1,%k0), xops);
      RET;
    }

#ifdef INTEL_SYNTAX
  return AS2 (movzx,%1,%0);
#else
  return AS2 (movz%B0%L0,%1,%0);
#endif
}
}

static char *
output_98 (operands, insn)
     rtx *operands;
     rtx insn;
{

  {
  rtx high[2], low[2], xops[4];

  if (REG_P (operands[0]) && REG_P (operands[1])
      && REGNO (operands[0]) == REGNO (operands[1]))
    {
      operands[0] = gen_rtx (REG, SImode, REGNO (operands[0]) + 1);
      return AS2 (xor%L0,%0,%0);
    }

  split_di (operands, 1, low, high);
  xops[0] = low[0];
  xops[1] = operands[1];
  xops[2] = high[0];
  xops[3] = const0_rtx;

  output_asm_insn (AS2 (mov%L0,%1,%0), xops);
  if (GET_CODE (low[0]) == MEM)
    output_asm_insn (AS2 (mov%L2,%3,%2), xops);
  else
    output_asm_insn (AS2 (xor%L2,%2,%2), xops);

  RET;
}
}

static char *
output_99 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REGNO (operands[0]) == 0)
    {
      /* This used to be cwtl, but that extends HI to SI somehow.  */
#ifdef INTEL_SYNTAX
      return "cdq";
#else
      return "cltd";
#endif
    }

  operands[1] = gen_rtx (REG, SImode, REGNO (operands[0]) + 1);
  output_asm_insn (AS2 (mov%L0,%0,%1), operands);

  operands[0] = GEN_INT (31);
  return AS2 (sar%L1,%0,%1);
}
}

static char *
output_100 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REGNO (operands[0]) == 0
      && REG_P (operands[1]) && REGNO (operands[1]) == 0)
#ifdef INTEL_SYNTAX
    return "cwde";
#else
    return "cwtl";
#endif

#ifdef INTEL_SYNTAX
  return AS2 (movsx,%1,%0);
#else
  return AS2 (movs%W0%L0,%1,%0);
#endif
}
}

static char *
output_101 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REGNO (operands[0]) == 0
      && REG_P (operands[1]) && REGNO (operands[1]) == 0)
    return "cbtw";

#ifdef INTEL_SYNTAX
  return AS2 (movsx,%1,%0);
#else
  return AS2 (movs%B0%W0,%1,%0);
#endif
}
}

static char *
output_102 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
#ifdef INTEL_SYNTAX
  return AS2 (movsx,%1,%0);
#else
  return AS2 (movs%B0%L0,%1,%0);
#endif
}
}

static char *
output_104 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx low[2], high[2], xops[2];

  split_di (&operands[1], 1, low, high);
  xops[0] = operands[0];
  xops[1] = low[0];
  if (!rtx_equal_p (xops[0], xops[1]))
    output_asm_insn (AS2 (mov%L0,%1,%0), xops);

  RET;
}
}

static char *
output_105 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx low[2], high[2], xops[2];

  split_di (&operands[1], 1, low, high);
  xops[0] = operands[0];
  xops[1] = high[0];
  if (!rtx_equal_p (xops[0], xops[1]))
    output_asm_insn (AS2 (mov%L0,%1,%0), xops);

  RET;
}
}

static char *
output_106 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  int stack_top_dies = find_regno_note (insn, REG_DEAD, FIRST_STACK_REG) != 0;

  if (NON_STACK_REG_P (operands[1]))
    {
      output_op_from_reg (operands[1], AS1 (fld%z0,%y1));
      RET;
    }

  if (NON_STACK_REG_P (operands[0]))
    {
      output_to_reg (operands[0], stack_top_dies, 0);
      RET;
    }

  if (STACK_TOP_P (operands[0]))
    return AS1 (fld%z1,%y1);

  if (GET_CODE (operands[0]) == MEM)
    {
      if (stack_top_dies)
	return AS1 (fstp%z0,%y0);
      else
        return AS1 (fst%z0,%y0);
    }

  abort ();
}
}

static char *
output_107 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  int stack_top_dies = find_regno_note (insn, REG_DEAD, FIRST_STACK_REG) != 0;

  if (NON_STACK_REG_P (operands[1]))
    {
      output_op_from_reg (operands[1], AS1 (fld%z0,%y1));
      RET;
    }

  if (NON_STACK_REG_P (operands[0]))
    {
      output_to_reg (operands[0], stack_top_dies, 0);
      RET;
    }

  if (STACK_TOP_P (operands[0]))
    return AS1 (fld%z1,%y1);

  if (GET_CODE (operands[0]) == MEM)
    {
      output_asm_insn (AS1 (fstp%z0,%y0), operands);
      if (! stack_top_dies)
	return AS1 (fld%z0,%y0);
      RET;
    }

  abort ();
}
}

static char *
output_108 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  int stack_top_dies = find_regno_note (insn, REG_DEAD, FIRST_STACK_REG) != 0;

  if (NON_STACK_REG_P (operands[1]))
    {
      output_op_from_reg (operands[1], AS1 (fld%z0,%y1));
      RET;
    }

  if (NON_STACK_REG_P (operands[0]))
    {
      output_to_reg (operands[0], stack_top_dies, 0);
      RET;
    }

  if (STACK_TOP_P (operands[0]))
    return AS1 (fld%z1,%y1);

  if (GET_CODE (operands[0]) == MEM)
    {
      output_asm_insn (AS1 (fstp%z0,%y0), operands);
      if (! stack_top_dies)
	return AS1 (fld%z0,%y0);
      RET;
    }

  abort ();
}
}

static char *
output_110 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  int stack_top_dies = find_regno_note (insn, REG_DEAD, FIRST_STACK_REG) != 0;

  if (GET_CODE (operands[0]) == MEM)
    {
      if (stack_top_dies)
	return AS1 (fstp%z0,%0);
      else
        return AS1 (fst%z0,%0);
    }
  else if (STACK_TOP_P (operands[0]))
    {
      output_asm_insn (AS1 (fstp%z2,%y2), operands);
      return AS1 (fld%z2,%y2);
    }
  else
    abort ();
}
}

static char *
output_111 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  int stack_top_dies = find_regno_note (insn, REG_DEAD, FIRST_STACK_REG) != 0;

  if (NON_STACK_REG_P (operands[0]))
    {
      if (stack_top_dies == 0)
	{
	  output_asm_insn (AS1 (fld,%y1), operands);
	  stack_top_dies = 1;
	}
      output_to_reg (operands[0], stack_top_dies, 0);
      RET;
    }
  else if (GET_CODE (operands[0]) == MEM)
    {
      if (stack_top_dies)
	return AS1 (fstp%z0,%0);
      else
	{
	  output_asm_insn (AS1 (fld,%y1), operands);
	  return AS1 (fstp%z0,%0);
	}
    }
  else
    abort ();
}
}

static char *
output_112 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  int stack_top_dies = find_regno_note (insn, REG_DEAD, FIRST_STACK_REG) != 0;

  if (NON_STACK_REG_P (operands[0]))
    {
      if (stack_top_dies == 0)
	{
	  output_asm_insn (AS1 (fld,%y1), operands);
	  stack_top_dies = 1;
	}
      output_to_reg (operands[0], stack_top_dies, 0);
      RET;
    }
  else if (GET_CODE (operands[0]) == MEM)
    {
      if (stack_top_dies)
	return AS1 (fstp%z0,%0);
      else
	{
	  output_asm_insn (AS1 (fld,%y1), operands);
	  return AS1 (fstp%z0,%0);
	}
    }
  else
    abort ();
}
}

static char *
output_119 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_fix_trunc (insn, operands);
}

static char *
output_120 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_fix_trunc (insn, operands);
}

static char *
output_121 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_fix_trunc (insn, operands);
}

static char *
output_125 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_fix_trunc (insn, operands);
}

static char *
output_126 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_fix_trunc (insn, operands);
}

static char *
output_127 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_fix_trunc (insn, operands);
}

static char *
output_134 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (NON_STACK_REG_P (operands[1]))
    {
      output_op_from_reg (operands[1], AS1 (fild%z0,%1));
      RET;
    }
  else if (GET_CODE (operands[1]) == MEM)
    return AS1 (fild%z1,%1);
  else
    abort ();
}
}

static char *
output_135 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (NON_STACK_REG_P (operands[1]))
    {
      output_op_from_reg (operands[1], AS1 (fild%z0,%1));
      RET;
    }
  else if (GET_CODE (operands[1]) == MEM)
    return AS1 (fild%z1,%1);
  else
    abort ();
}
}

static char *
output_136 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (NON_STACK_REG_P (operands[1]))
    {
      output_op_from_reg (operands[1], AS1 (fild%z0,%1));
      RET;
    }
  else if (GET_CODE (operands[1]) == MEM)
    return AS1 (fild%z1,%1);
  else
    abort ();
}
}

static char *
output_137 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (NON_STACK_REG_P (operands[1]))
    {
      output_op_from_reg (operands[1], AS1 (fild%z0,%1));
      RET;
    }
  else if (GET_CODE (operands[1]) == MEM)
    return AS1 (fild%z1,%1);
  else
    abort ();
}
}

static char *
output_138 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (NON_STACK_REG_P (operands[1]))
    {
      output_op_from_reg (operands[1], AS1 (fild%z0,%1));
      RET;
    }
  else if (GET_CODE (operands[1]) == MEM)
    return AS1 (fild%z1,%1);
  else
    abort ();
}
}

static char *
output_139 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (NON_STACK_REG_P (operands[1]))
    {
      output_op_from_reg (operands[1], AS1 (fild%z0,%1));
      RET;
    }
  else if (GET_CODE (operands[1]) == MEM)
    return AS1 (fild%z1,%1);
  else
    abort ();
}
}

static char *
output_140 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx low[3], high[3], xops[7], temp;

  CC_STATUS_INIT;

  split_di (operands, 2, low, high);
  high[2] = const0_rtx;
  low[2]  = operands[2];

  if (!rtx_equal_p (operands[0], operands[1]))
    {
      xops[0] = high[0];
      xops[1] = low[0];
      xops[2] = high[1];
      xops[3] = low[1];

      if (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
	{
	  output_asm_insn (AS2 (mov%L1,%3,%1), xops);
	  output_asm_insn (AS2 (mov%L0,%2,%0), xops);
	}
      else
	{
	  xops[4] = high[2];
	  xops[5] = low[2];
	  xops[6] = operands[3];
	  output_asm_insn (AS2 (mov%L6,%3,%6), xops);
	  output_asm_insn (AS2 (add%L6,%5,%6), xops);
	  output_asm_insn (AS2 (mov%L1,%6,%1), xops);
	  output_asm_insn (AS2 (mov%L6,%2,%6), xops);
	  output_asm_insn (AS2 (adc%L6,%4,%6), xops);
	  output_asm_insn (AS2 (mov%L0,%6,%0), xops);
	  RET;
	}
    }

  output_asm_insn (AS2 (add%L0,%2,%0), low);
  output_asm_insn (AS2 (adc%L0,%2,%0), high);
  RET;
}
}

static char *
output_141 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx low[3], high[3], xops[7], temp;

  CC_STATUS_INIT;

  split_di (operands, 2, low, high);
  high[2] = const0_rtx;
  low[2]  = operands[2];

  if (!rtx_equal_p (operands[0], operands[1]))
    {
      xops[0] = high[0];
      xops[1] = low[0];
      xops[2] = high[1];
      xops[3] = low[1];

      if (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
	{
	  if (rtx_equal_p (low[0], operands[2]))
	    {
	      output_asm_insn (AS2 (mov%L0,%2,%0), high);
	      output_asm_insn (AS2 (add%L0,%1,%0), low);
	      output_asm_insn (AS2 (adc%L0,%1,%0), high);
	      RET;
	    }
	  if (rtx_equal_p (high[0], operands[2]))
	    {
	      if (GET_CODE (operands[0]) != MEM)
		{
		  output_asm_insn (AS2 (mov%L0,%2,%0), low);
		  output_asm_insn (AS2 (mov%L0,%2,%0), high);
		  output_asm_insn (AS2 (add%L0,%1,%0), low);
		  output_asm_insn (AS2 (adc%L0,%1,%0), high);
		}
	      else
		{
		  /* It's too late to ask for a scratch now - but this
		     will probably not happen too often.  */
		  output_asm_insn (AS2 (add%L1,%2,%1), low);
		  output_asm_insn (AS2 (mov%L0,%1,%0), low);
		  output_asm_insn (AS2 (mov%L1,%2,%1), low);
		  output_asm_insn (AS2 (mov%L0,%2,%0), high);
		  output_asm_insn (AS2 (adc%L0,%1,%0), high);
		  output_asm_insn (AS2 (sub%L1,%0,%1), low);
		  output_asm_insn (AS1 (neg%L1,%1), low);
		}
	      RET;
	    }
	  output_asm_insn (AS2 (mov%L1,%3,%1), xops);
	  output_asm_insn (AS2 (mov%L0,%2,%0), xops);
	}
      else
	{
	  xops[4] = high[2];
	  xops[5] = low[2];
	  xops[6] = operands[3];
	  output_asm_insn (AS2 (mov%L6,%3,%6), xops);
	  output_asm_insn (AS2 (add%L6,%5,%6), xops);
	  output_asm_insn (AS2 (mov%L1,%6,%1), xops);
	  output_asm_insn (AS2 (mov%L6,%2,%6), xops);
	  output_asm_insn (AS2 (adc%L6,%4,%6), xops);
	  output_asm_insn (AS2 (mov%L0,%6,%0), xops);
	  RET;
	}
    }

  output_asm_insn (AS2 (add%L0,%2,%0), low);
  output_asm_insn (AS2 (adc%L0,%2,%0), high);
  RET;
}
}

static char *
output_142 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx low[3], high[3], xops[7], temp;

  CC_STATUS_INIT;

  if (rtx_equal_p (operands[0], operands[2]))
    {
      temp = operands[1];
      operands[1] = operands[2];
      operands[2] = temp;
    }

  split_di (operands, 3, low, high);
  if (!rtx_equal_p (operands[0], operands[1]))
    {
      xops[0] = high[0];
      xops[1] = low[0];
      xops[2] = high[1];
      xops[3] = low[1];

      if (GET_CODE (operands[0]) != MEM)
	{
	  output_asm_insn (AS2 (mov%L1,%3,%1), xops);
	  output_asm_insn (AS2 (mov%L0,%2,%0), xops);
	}
      else
	{
	  xops[4] = high[2];
	  xops[5] = low[2];
	  xops[6] = operands[3];
	  output_asm_insn (AS2 (mov%L6,%3,%6), xops);
	  output_asm_insn (AS2 (add%L6,%5,%6), xops);
	  output_asm_insn (AS2 (mov%L1,%6,%1), xops);
	  output_asm_insn (AS2 (mov%L6,%2,%6), xops);
	  output_asm_insn (AS2 (adc%L6,%4,%6), xops);
	  output_asm_insn (AS2 (mov%L0,%6,%0), xops);
	  RET;
	}
    }

  if (GET_CODE (operands[3]) == REG && GET_CODE (operands[2]) != REG)
    {
      xops[0] = high[0];
      xops[1] = low[0];
      xops[2] = high[2];
      xops[3] = low[2];
      xops[4] = operands[3];

      output_asm_insn (AS2 (mov%L4,%3,%4), xops);
      output_asm_insn (AS2 (add%L1,%4,%1), xops);
      output_asm_insn (AS2 (mov%L4,%2,%4), xops);
      output_asm_insn (AS2 (adc%L0,%4,%0), xops);
    }

  else if (GET_CODE (low[2]) != CONST_INT || INTVAL (low[2]) != 0)
    {
      output_asm_insn (AS2 (add%L0,%2,%0), low);
      output_asm_insn (AS2 (adc%L0,%2,%0), high);
    }

  else
    output_asm_insn (AS2 (add%L0,%2,%0), high);

  RET;
}
}

static char *
output_144 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REG_P (operands[0]) && REG_P (operands[1])
      && (REG_P (operands[2]) || GET_CODE (operands[2]) == CONST_INT)
      && REGNO (operands[0]) != REGNO (operands[1]))
    {
      if (REG_P (operands[2]) && REGNO (operands[0]) == REGNO (operands[2]))
	return AS2 (add%L0,%1,%0);

      if (operands[2] == stack_pointer_rtx)
	{
	  rtx temp;

	  temp = operands[1];
	  operands[1] = operands[2];
	  operands[2] = temp;
	}

      if (operands[2] != stack_pointer_rtx)
	{
	  CC_STATUS_INIT;
	  operands[1] = SET_SRC (PATTERN (insn));
	  return AS2 (lea%L0,%a1,%0);
	}
    }

  if (!rtx_equal_p (operands[0], operands[1]))
    output_asm_insn (AS2 (mov%L0,%1,%0), operands);

  if (operands[2] == const1_rtx)
    return AS1 (inc%L0,%0);

  if (operands[2] == constm1_rtx)
    return AS1 (dec%L0,%0);

  /* subl $-128,%ebx is smaller than addl $128,%ebx. */
  if (GET_CODE (operands[2]) == CONST_INT
      && INTVAL (operands[2]) == 128)
    {
      /* This doesn't compute the carry bit in the same way
       * as add%L0, but we use inc and dec above and they
       * don't set the carry bit at all.  If inc/dec don't need
       * a CC_STATUS_INIT, this doesn't either... */
      operands[2] = GEN_INT (-128);
      return AS2 (sub%L0,%2,%0);
    }

  return AS2 (add%L0,%2,%0);
}
}

static char *
output_145 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  /* Adding a constant to a register is faster with an add.  */
  /* ??? can this ever happen? */
  if (GET_CODE (operands[1]) == PLUS
      && GET_CODE (XEXP (operands[1], 1)) == CONST_INT
      && rtx_equal_p (operands[0], XEXP (operands[1], 0)))
    {
      operands[1] = XEXP (operands[1], 1);

      if (operands[1] == const1_rtx)
        return AS1 (inc%L0,%0);

      if (operands[1] == constm1_rtx)
        return AS1 (dec%L0,%0);

      return AS2 (add%L0,%1,%0);
    }

  CC_STATUS_INIT;
  return AS2 (lea%L0,%a1,%0);
}
}

static char *
output_147 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  /* ??? what about offsettable memory references? */
  if (!TARGET_PENTIUMPRO /* partial stalls are just too painful to risk. */
      && QI_REG_P (operands[0])
      && GET_CODE (operands[2]) == CONST_INT
      && (INTVAL (operands[2]) & 0xff) == 0
      && i386_cc_probably_useless_p (insn))
    {
      int byteval = (INTVAL (operands[2]) >> 8) & 0xff;
      CC_STATUS_INIT;

      if (byteval == 1)
	return AS1 (inc%B0,%h0);
      else if (byteval == 255)
	return AS1 (dec%B0,%h0);

      operands[2] = GEN_INT (byteval);
      return AS2 (add%B0,%2,%h0);
    }

  /* Use a 32-bit operation when possible, to avoid the prefix penalty. */
  if (REG_P (operands[0])
      && i386_aligned_p (operands[2])
      && i386_cc_probably_useless_p (insn))
    {
      CC_STATUS_INIT;

      if (GET_CODE (operands[2]) == CONST_INT)
	{
	  HOST_WIDE_INT intval = 0xffff & INTVAL (operands[2]);

	  if (intval == 1)
	    return AS1 (inc%L0,%k0);

	  if (intval == 0xffff)
	    return AS1 (dec%L0,%k0);

	  operands[2] = i386_sext16_if_const (operands[2]);
	}
      return AS2 (add%L0,%k2,%k0);
    }

  if (operands[2] == const1_rtx)
    return AS1 (inc%W0,%0);

  if (operands[2] == constm1_rtx
      || (GET_CODE (operands[2]) == CONST_INT
	  && INTVAL (operands[2]) == 65535))
    return AS1 (dec%W0,%0);

  return AS2 (add%W0,%2,%0);
}
}

static char *
output_149 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (operands[2] == const1_rtx)
    return AS1 (inc%B0,%0);

  if (operands[2] == constm1_rtx
      || (GET_CODE (operands[2]) == CONST_INT
	  && INTVAL (operands[2]) == 255))
    return AS1 (dec%B0,%0);

  return AS2 (add%B0,%2,%0);
}
}

static char *
output_153 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx low[3], high[3], xops[7];

  CC_STATUS_INIT;

  split_di (operands, 2, low, high);
  high[2] = const0_rtx;
  low[2]  = operands[2];

  if (!rtx_equal_p (operands[0], operands[1]))
    {
      xops[0] = high[0];
      xops[1] = low[0];
      xops[2] = high[1];
      xops[3] = low[1];

      if (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
	{
	  output_asm_insn (AS2 (mov%L1,%3,%1), xops);
	  output_asm_insn (AS2 (mov%L0,%2,%0), xops);
	}
      else
	{
	  xops[4] = high[2];
	  xops[5] = low[2];
	  xops[6] = operands[3];
	  output_asm_insn (AS2 (mov%L6,%3,%6), xops);
	  output_asm_insn (AS2 (sub%L6,%5,%6), xops);
	  output_asm_insn (AS2 (mov%L1,%6,%1), xops);
	  output_asm_insn (AS2 (mov%L6,%2,%6), xops);
	  output_asm_insn (AS2 (sbb%L6,%4,%6), xops);
	  output_asm_insn (AS2 (mov%L0,%6,%0), xops);
	  RET;
	}
    }

  output_asm_insn (AS2 (sub%L0,%2,%0), low);
  output_asm_insn (AS2 (sbb%L0,%2,%0), high);
  RET;
}
}

static char *
output_154 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx low[3], high[3], xops[7];

  CC_STATUS_INIT;

  split_di (operands, 3, low, high);

  if (!rtx_equal_p (operands[0], operands[1]))
    {
      xops[0] = high[0];
      xops[1] = low[0];
      xops[2] = high[1];
      xops[3] = low[1];

      if (GET_CODE (operands[0]) != MEM)
	{
	  output_asm_insn (AS2 (mov%L1,%3,%1), xops);
	  output_asm_insn (AS2 (mov%L0,%2,%0), xops);
	}
      else
	{
	  xops[4] = high[2];
	  xops[5] = low[2];
	  xops[6] = operands[3];
	  output_asm_insn (AS2 (mov%L6,%3,%6), xops);
	  output_asm_insn (AS2 (sub%L6,%5,%6), xops);
	  output_asm_insn (AS2 (mov%L1,%6,%1), xops);
	  output_asm_insn (AS2 (mov%L6,%2,%6), xops);
	  output_asm_insn (AS2 (sbb%L6,%4,%6), xops);
	  output_asm_insn (AS2 (mov%L0,%6,%0), xops);
	  RET;
	}
    }

  if (GET_CODE (operands[3]) == REG)
    {
      xops[0] = high[0];
      xops[1] = low[0];
      xops[2] = high[2];
      xops[3] = low[2];
      xops[4] = operands[3];

      output_asm_insn (AS2 (mov%L4,%3,%4), xops);
      output_asm_insn (AS2 (sub%L1,%4,%1), xops);
      output_asm_insn (AS2 (mov%L4,%2,%4), xops);
      output_asm_insn (AS2 (sbb%L0,%4,%0), xops);
    }

  else if (GET_CODE (low[2]) != CONST_INT || INTVAL (low[2]) != 0)
    {
      output_asm_insn (AS2 (sub%L0,%2,%0), low);
      output_asm_insn (AS2 (sbb%L0,%2,%0), high);
    }

  else
    output_asm_insn (AS2 (sub%L0,%2,%0), high);

  RET;
}
}

static char *
output_156 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return AS2 (sub%L0,%2,%0);
}

static char *
output_158 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REG_P (operands[0])
      && i386_aligned_p (operands[2])
      && i386_cc_probably_useless_p (insn))
    {
      CC_STATUS_INIT;
      operands[2] = i386_sext16_if_const (operands[2]);
      return AS2 (sub%L0,%k2,%k0);
    }
 return AS2 (sub%W0,%2,%0);
}
}

static char *
output_160 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return AS2 (sub%B0,%2,%0);
}

static char *
output_164 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (GET_CODE (operands[1]) == REG
      && REGNO (operands[1]) == REGNO (operands[0])
      && (GET_CODE (operands[2]) == MEM || GET_CODE (operands[2]) == REG))
    /* Assembler has weird restrictions.  */
    return AS2 (imul%W0,%2,%0);
  return AS3 (imul%W0,%2,%1,%0);
}
}

static char *
output_165 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (GET_CODE (operands[1]) == REG
      && REGNO (operands[1]) == REGNO (operands[0])
      && (GET_CODE (operands[2]) == MEM || GET_CODE (operands[2]) == REG))
    /* Assembler has weird restrictions.  */
    return AS2 (imul%L0,%2,%0);
  return AS3 (imul%L0,%2,%1,%0);
}
}

static char *
output_180 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
#ifdef INTEL_SYNTAX
  output_asm_insn ("cdq", operands);
#else
  output_asm_insn ("cltd", operands);
#endif
  return AS1 (idiv%L0,%2);
}
}

static char *
output_182 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  output_asm_insn (AS2 (xor%L3,%3,%3), operands);
  return AS1 (div%L0,%2);
}
}

static char *
output_183 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  output_asm_insn (AS2 (xor%W0,%3,%3), operands);
  return AS1 (div%W0,%2);
}
}

static char *
output_184 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  HOST_WIDE_INT intval;
  if (!rtx_equal_p (operands[0], operands[1])
      && rtx_equal_p (operands[0], operands[2]))
    {
      rtx tmp;
      tmp = operands[1];
      operands[1] = operands[2];
      operands[2] = tmp;
    }
  switch (GET_CODE (operands[2]))
    {
    case CONST_INT:
      if (GET_CODE (operands[0]) == MEM && MEM_VOLATILE_P (operands[0]))
	break;
      intval = INTVAL (operands[2]);
      /* zero-extend 16->32? */
      if (intval == 0xffff && REG_P (operands[0])
	  && (! REG_P (operands[1])
	      || REGNO (operands[0]) != 0 || REGNO (operands[1]) != 0)
	  && (!TARGET_ZERO_EXTEND_WITH_AND || ! rtx_equal_p (operands[0], operands[1])))
	{
	  /* ??? tege: Should forget CC_STATUS only if we clobber a
	     remembered operand.  Fix that later.  */
	  CC_STATUS_INIT;
#ifdef INTEL_SYNTAX
	  return AS2 (movzx,%w1,%0);
#else
	  return AS2 (movz%W0%L0,%w1,%0);
#endif
	}

      /* zero extend 8->32? */
      if (intval == 0xff && REG_P (operands[0])
	  && !(REG_P (operands[1]) && NON_QI_REG_P (operands[1]))
	  && (! REG_P (operands[1])
	      || REGNO (operands[0]) != 0 || REGNO (operands[1]) != 0)
	  && (!TARGET_ZERO_EXTEND_WITH_AND || ! rtx_equal_p (operands[0], operands[1])))
	{
	  /* ??? tege: Should forget CC_STATUS only if we clobber a
	     remembered operand.  Fix that later.  */
	  CC_STATUS_INIT;
#ifdef INTEL_SYNTAX
	  return AS2 (movzx,%b1,%0);
#else
	  return AS2 (movz%B0%L0,%b1,%0);
#endif
	}

      /* Check partial bytes.. non-QI-regs are not available */
      if (REG_P (operands[0]) && ! QI_REG_P (operands[0]))
	break;

      /* only low byte has zero bits? */
      if (~(intval | 0xff) == 0)
	{
	  intval &= 0xff;
	  if (REG_P (operands[0]))
	    {
	      if (intval == 0)
		{
		  CC_STATUS_INIT;
		  return AS2 (xor%B0,%b0,%b0);
		}

	      /* we're better off with the 32-bit version if reg != EAX */
	      /* the value is sign-extended in 8 bits */
	      if (REGNO (operands[0]) != 0 && (intval & 0x80))
		break;
	    }

	  CC_STATUS_INIT;

	  operands[2] = GEN_INT (intval);

	  if (intval == 0)
	    return AS2 (mov%B0,%2,%b0);

	  return AS2 (and%B0,%2,%b0);
	}

      /* only second byte has zero? */
      if (~(intval | 0xff00) == 0)
	{
	  CC_STATUS_INIT;

	  intval = (intval >> 8) & 0xff;
	  operands[2] = GEN_INT (intval);
	  if (intval == 0)
	    {
	      if (REG_P (operands[0]))
		return AS2 (xor%B0,%h0,%h0);
	      operands[0] = adj_offsettable_operand (operands[0], 1);
	      return AS2 (mov%B0,%2,%b0);
	    }

	  if (REG_P (operands[0]))
	    return AS2 (and%B0,%2,%h0);

	  operands[0] = adj_offsettable_operand (operands[0], 1);
	  return AS2 (and%B0,%2,%b0);
	}

      if (REG_P (operands[0]))
	break;

      /* third byte has zero bits? */
      if (~(intval | 0xff0000) == 0)
	{
	  intval = (intval >> 16) & 0xff;
	  operands[0] = adj_offsettable_operand (operands[0], 2);
byte_and_operation:
	  CC_STATUS_INIT;
	  operands[2] = GEN_INT (intval);
	  if (intval == 0)
	    return AS2 (mov%B0,%2,%b0);
	  return AS2 (and%B0,%2,%b0);
	}

      /* fourth byte has zero bits? */
      if (~(intval | 0xff000000) == 0)
	{
	  intval = (intval >> 24) & 0xff;
	  operands[0] = adj_offsettable_operand (operands[0], 3);
	  goto byte_and_operation;
	}

      /* Low word is zero? */
      if (intval == 0xffff0000)
        {
word_zero_and_operation:
	  CC_STATUS_INIT;
	  operands[2] = const0_rtx;
	  return AS2 (mov%W0,%2,%w0);
	}

      /* High word is zero? */
      if (intval == 0x0000ffff)
        {
	  operands[0] = adj_offsettable_operand (operands[0], 2);
	  goto word_zero_and_operation;
	}
    }

  return AS2 (and%L0,%2,%0);
}
}

static char *
output_185 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (GET_CODE (operands[2]) == CONST_INT
      && ! (GET_CODE (operands[0]) == MEM && MEM_VOLATILE_P (operands[0])))
    {
      /* Can we ignore the upper byte? */
      if ((! REG_P (operands[0]) || QI_REG_P (operands[0]))
	  && (INTVAL (operands[2]) & 0xff00) == 0xff00)
	{
	  CC_STATUS_INIT;

	  if ((INTVAL (operands[2]) & 0xff) == 0)
	    {
	      operands[2] = const0_rtx;
	      return AS2 (mov%B0,%2,%b0);
	    }

	  operands[2] = GEN_INT (INTVAL (operands[2]) & 0xff);
	  return AS2 (and%B0,%2,%b0);
	}

      /* Can we ignore the lower byte? */
      /* ??? what about offsettable memory references? */
      if (QI_REG_P (operands[0]) && (INTVAL (operands[2]) & 0xff) == 0xff)
	{
	  CC_STATUS_INIT;

	  if ((INTVAL (operands[2]) & 0xff00) == 0)
	    {
	      operands[2] = const0_rtx;
	      return AS2 (mov%B0,%2,%h0);
	    }

	  operands[2] = GEN_INT ((INTVAL (operands[2]) >> 8) & 0xff);
	  return AS2 (and%B0,%2,%h0);
	}

      /* use 32-bit ops on registers when there are no sign issues.. */
      if (REG_P (operands[0]))
	{
	  if (!(INTVAL (operands[2]) & ~0x7fff))
	    return AS2 (and%L0,%2,%k0);
	}
    }

  if (REG_P (operands[0])
      && i386_aligned_p (operands[2]))
    {
      CC_STATUS_INIT;
      /* If op[2] is constant, we should zero-extend it and */
      /* make a note that op[0] has been zero-extended, so  */
      /* that we could use 32-bit ops on it forthwith, but  */
      /* there is no such reg-note available. Instead we do */
      /* a sign extension as that can result in shorter asm */
      operands[2] = i386_sext16_if_const (operands[2]);
      return AS2 (and%L0,%k2,%k0);
    }

  /* Use a 32-bit word with the upper bits set, invalidate CC */
  if (GET_CODE (operands[2]) == CONST_INT
      && i386_aligned_p (operands[0]))
    {
      HOST_WIDE_INT val = INTVAL (operands[2]);
      CC_STATUS_INIT;
      val |= ~0xffff;
      if (val != INTVAL (operands[2]))
	operands[2] = GEN_INT (val);
      return AS2 (and%L0,%k2,%k0);
    }

  return AS2 (and%W0,%2,%0);
}
}

static char *
output_186 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return AS2 (and%B0,%2,%0);
}

static char *
output_187 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  HOST_WIDE_INT intval;
  switch (GET_CODE (operands[2]))
    {
    case CONST_INT:

      if (REG_P (operands[0]) && ! QI_REG_P (operands[0]))
	break;

      /* don't try to optimize volatile accesses */
      if (GET_CODE (operands[0]) == MEM && MEM_VOLATILE_P (operands[0]))
	break;

      intval = INTVAL (operands[2]);
      if ((intval & ~0xff) == 0)
        {
	  if (REG_P (operands[0]))
	    {
	      /* Do low byte access only for %eax or when high bit is set */
	      if (REGNO (operands[0]) != 0 && !(intval & 0x80))
	        break;
	    }

byte_or_operation:
	    CC_STATUS_INIT;

	    if (intval != INTVAL (operands[2]))
	      operands[2] = GEN_INT (intval);

	    if (intval == 0xff)
	      return AS2 (mov%B0,%2,%b0);

	    return AS2 (or%B0,%2,%b0);
	}

      /* second byte? */
      if ((intval & ~0xff00) == 0)
	{
	  intval >>= 8;

	  if (REG_P (operands[0]))
	    {
	      CC_STATUS_INIT;
	      operands[2] = GEN_INT (intval);
	      if (intval == 0xff)
		return AS2 (mov%B0,%2,%h0);

	      return AS2 (or%B0,%2,%h0);
	    }

	  operands[0] = adj_offsettable_operand (operands[0], 1);
	  goto byte_or_operation;
	}

      if (REG_P (operands[0]))
	break;

      /* third byte? */
      if ((intval & ~0xff0000) == 0)
	{
	  intval >>= 16;
	  operands[0] = adj_offsettable_operand (operands[0], 2);
	  goto byte_or_operation;
	}

      /* fourth byte? */
      if ((intval & ~0xff000000) == 0)
	{
	  intval = (intval >> 24) & 0xff;
	  operands[0] = adj_offsettable_operand (operands[0], 3);
	  goto byte_or_operation;
	}
    }

  return AS2 (or%L0,%2,%0);
}
}

static char *
output_188 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  HOST_WIDE_INT intval;
  switch (GET_CODE (operands[2]))
    {
    case CONST_INT:

      if (REG_P (operands[0]) && ! QI_REG_P (operands[0]))
	break;

      /* don't try to optimize volatile accesses */
      if (GET_CODE (operands[0]) == MEM && MEM_VOLATILE_P (operands[0]))
	break;

      intval = 0xffff & INTVAL (operands[2]);

      if ((intval & 0xff00) == 0)
        {
	  if (REG_P (operands[0]))
	    {
	      /* Do low byte access only for %eax or when high bit is set */
	      if (REGNO (operands[0]) != 0 && !(intval & 0x80))
	        break;
	    }

byte_or_operation:
	    CC_STATUS_INIT;

	    if (intval == 0xff)
	      return AS2 (mov%B0,%2,%b0);

	    return AS2 (or%B0,%2,%b0);
	}

      /* high byte? */
      if ((intval & 0xff) == 0)
	{
	  intval >>= 8;
	  operands[2] = GEN_INT (intval);

	  if (REG_P (operands[0]))
	    {
	      CC_STATUS_INIT;
	      if (intval == 0xff)
		return AS2 (mov%B0,%2,%h0);

	      return AS2 (or%B0,%2,%h0);
	    }

	  operands[0] = adj_offsettable_operand (operands[0], 1);

	  goto byte_or_operation;
	}
    }

  if (REG_P (operands[0])
      && i386_aligned_p (operands[2]))
    {
      CC_STATUS_INIT;
      operands[2] = i386_sext16_if_const (operands[2]);
      return AS2 (or%L0,%k2,%k0);
    }

  if (GET_CODE (operands[2]) == CONST_INT
      && i386_aligned_p (operands[0]))
    {
      CC_STATUS_INIT;
      intval = 0xffff & INTVAL (operands[2]);
      if (intval != INTVAL (operands[2]))
	operands[2] = GEN_INT (intval);
      return AS2 (or%L0,%2,%k0);
    }

  return AS2 (or%W0,%2,%0);
}
}

static char *
output_189 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return AS2 (or%B0,%2,%0);
}

static char *
output_190 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  HOST_WIDE_INT intval;
  switch (GET_CODE (operands[2]))
    {
    case CONST_INT:

      if (REG_P (operands[0]) && ! QI_REG_P (operands[0]))
	break;

      /* don't try to optimize volatile accesses */
      if (GET_CODE (operands[0]) == MEM && MEM_VOLATILE_P (operands[0]))
	break;

      intval = INTVAL (operands[2]);
      if ((intval & ~0xff) == 0)
        {
	  if (REG_P (operands[0]))
	    {
	      /* Do low byte access only for %eax or when high bit is set */
	      if (REGNO (operands[0]) != 0 && !(intval & 0x80))
	        break;
	    }

byte_xor_operation:
	    CC_STATUS_INIT;
	      
	    if (intval == 0xff)
	      return AS1 (not%B0,%b0);

	    if (intval != INTVAL (operands[2]))
	      operands[2] = GEN_INT (intval);
	    return AS2 (xor%B0,%2,%b0);
	}

      /* second byte? */
      if ((intval & ~0xff00) == 0)
	{
	  intval >>= 8;

	  if (REG_P (operands[0]))
	    {
	      CC_STATUS_INIT;
	      if (intval == 0xff)
		return AS1 (not%B0,%h0);

	      operands[2] = GEN_INT (intval);
	      return AS2 (xor%B0,%2,%h0);
	    }

	  operands[0] = adj_offsettable_operand (operands[0], 1);

	  goto byte_xor_operation;
	}

      if (REG_P (operands[0]))
	break;

      /* third byte? */
      if ((intval & ~0xff0000) == 0)
	{
	  intval >>= 16;
	  operands[0] = adj_offsettable_operand (operands[0], 2);
	  goto byte_xor_operation;
	}

      /* fourth byte? */
      if ((intval & ~0xff000000) == 0)
	{
	  intval = (intval >> 24) & 0xff;
	  operands[0] = adj_offsettable_operand (operands[0], 3);
	  goto byte_xor_operation;
	}
    }

  return AS2 (xor%L0,%2,%0);
}
}

static char *
output_191 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (GET_CODE (operands[2]) == CONST_INT
      && ! (GET_CODE (operands[0]) == MEM && MEM_VOLATILE_P (operands[0])))
    {
      /* Can we ignore the upper byte? */
      if ((! REG_P (operands[0]) || QI_REG_P (operands[0]))
	  && (INTVAL (operands[2]) & 0xff00) == 0)
	{
	  CC_STATUS_INIT;
	  if (INTVAL (operands[2]) & 0xffff0000)
	    operands[2] = GEN_INT (INTVAL (operands[2]) & 0xffff);

	  if (INTVAL (operands[2]) == 0xff)
	    return AS1 (not%B0,%b0);

	  return AS2 (xor%B0,%2,%b0);
	}

      /* Can we ignore the lower byte? */
      /* ??? what about offsettable memory references? */
      if (QI_REG_P (operands[0])
	  && (INTVAL (operands[2]) & 0xff) == 0)
	{
	  CC_STATUS_INIT;
	  operands[2] = GEN_INT ((INTVAL (operands[2]) >> 8) & 0xff);

	  if (INTVAL (operands[2]) == 0xff)
	    return AS1 (not%B0,%h0);

	  return AS2 (xor%B0,%2,%h0);
	}
    }

  if (REG_P (operands[0])
      && i386_aligned_p (operands[2]))
    {
      CC_STATUS_INIT;
      operands[2] = i386_sext16_if_const (operands[2]);
      return AS2 (xor%L0,%k2,%k0);
    }

  if (GET_CODE (operands[2]) == CONST_INT
      && i386_aligned_p (operands[0]))
    {
      HOST_WIDE_INT intval;
      CC_STATUS_INIT;
      intval = 0xffff & INTVAL (operands[2]);
      if (intval != INTVAL (operands[2]))
	operands[2] = GEN_INT (intval);
      return AS2 (xor%L0,%2,%k0);
    }

  return AS2 (xor%W0,%2,%0);
}
}

static char *
output_192 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return AS2 (xor%B0,%2,%0);
}

static char *
output_193 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx xops[2], low[1], high[1];

  CC_STATUS_INIT;

  split_di (operands, 1, low, high);
  xops[0] = const0_rtx;
  xops[1] = high[0];

  output_asm_insn (AS1 (neg%L0,%0), low);
  output_asm_insn (AS2 (adc%L1,%0,%1), xops);
  output_asm_insn (AS1 (neg%L0,%0), high);
  RET;
}
}

static char *
output_225 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx xops[4], low[1], high[1];

  CC_STATUS_INIT;

  split_di (operands, 1, low, high);
  xops[0] = operands[2];
  xops[1] = const1_rtx;
  xops[2] = low[0];
  xops[3] = high[0];

  if (INTVAL (xops[0]) > 31)
    {
      output_asm_insn (AS2 (mov%L3,%2,%3), xops);	/* Fast shift by 32 */
      output_asm_insn (AS2 (xor%L2,%2,%2), xops);

      if (INTVAL (xops[0]) > 32)
        {
	  xops[0] = GEN_INT (INTVAL (xops[0]) - 32);
	  output_asm_insn (AS2 (sal%L3,%0,%3), xops); /* Remaining shift */
	}
    }
  else
    {
      output_asm_insn (AS3 (shld%L3,%0,%2,%3), xops);
      output_asm_insn (AS2 (sal%L2,%0,%2), xops);
    }
  RET;
}
}

static char *
output_226 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx xops[4], low[1], high[1];
  static HOST_WIDE_INT ashldi_label_number;

  CC_STATUS_INIT;

  split_di (operands, 1, low, high);
  xops[0] = operands[2];
  xops[1] = GEN_INT (32);
  xops[2] = low[0];
  xops[3] = high[0];

  output_asm_insn (AS3_SHIFT_DOUBLE (shld%L3,%0,%2,%3), xops);
  output_asm_insn (AS2 (sal%L2,%0,%2), xops);
  output_asm_insn (AS2 (test%B0,%1,%b0), xops);
  asm_fprintf (asm_out_file, "\tje %LLASHLDI%d\n", ashldi_label_number);
  output_asm_insn (AS2 (mov%L3,%2,%3), xops);	/* Fast shift by 32 */
  output_asm_insn (AS2 (xor%L2,%2,%2), xops);
  asm_fprintf (asm_out_file, "%LLASHLDI%d:\n", ashldi_label_number++);

  RET;
}
}

static char *
output_227 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REG_P (operands[0]) && REGNO (operands[0]) != REGNO (operands[1]))
    {
      if (TARGET_DOUBLE_WITH_ADD && INTVAL (operands[2]) == 1)
	{
	  output_asm_insn (AS2 (mov%L0,%1,%0), operands);
	  return AS2 (add%L0,%1,%0);
	}
      else
        {
          CC_STATUS_INIT;

	  if (operands[1] == stack_pointer_rtx)
	    {
	      output_asm_insn (AS2 (mov%L0,%1,%0), operands);
	      operands[1] = operands[0];
	    }
          operands[1] = gen_rtx (MULT, SImode, operands[1],
				 GEN_INT (1 << INTVAL (operands[2])));
	  return AS2 (lea%L0,%a1,%0);
	}
    }

  if (REG_P (operands[2]))
    return AS2 (sal%L0,%b2,%0);

  if (REG_P (operands[0]) && operands[2] == const1_rtx)
    return AS2 (add%L0,%0,%0);

  return AS2 (sal%L0,%2,%0);
}
}

static char *
output_228 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REG_P (operands[2]))
    return AS2 (sal%W0,%b2,%0);

  if (REG_P (operands[0]) && operands[2] == const1_rtx)
    return AS2 (add%W0,%0,%0);

  return AS2 (sal%W0,%2,%0);
}
}

static char *
output_229 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REG_P (operands[2]))
    return AS2 (sal%B0,%b2,%0);

  if (REG_P (operands[0]) && operands[2] == const1_rtx)
    return AS2 (add%B0,%0,%0);

  return AS2 (sal%B0,%2,%0);
}
}

static char *
output_231 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx low[2], high[2], xops[4];

  split_di (operands, 2, low, high);
  xops[0] = high[0];
  xops[1] = low[1];
  xops[2] = low[0];
  xops[3] = const0_rtx;
  if (!rtx_equal_p (xops[0], xops[1]))
    output_asm_insn (AS2 (mov%L0,%1,%0), xops);

  if (GET_CODE (low[0]) == MEM)
    output_asm_insn (AS2 (mov%L2,%3,%2), xops);
  else
    output_asm_insn (AS2 (xor%L2,%2,%2), xops);

  RET;
}
}

static char *
output_232 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx xops[4], low[1], high[1];

  CC_STATUS_INIT;

  split_di (operands, 1, low, high);
  xops[0] = operands[2];
  xops[1] = const1_rtx;
  xops[2] = low[0];
  xops[3] = high[0];

  if (INTVAL (xops[0]) > 31)
    {
      xops[1] = GEN_INT (31);
      output_asm_insn (AS2 (mov%L2,%3,%2), xops);
      output_asm_insn (AS2 (sar%L3,%1,%3), xops);	/* shift by 32 */

      if (INTVAL (xops[0]) > 32)
        {
	  xops[0] = GEN_INT (INTVAL (xops[0]) - 32);
	  output_asm_insn (AS2 (sar%L2,%0,%2), xops); /* Remaining shift */
	}
    }
  else
    {
      output_asm_insn (AS3 (shrd%L2,%0,%3,%2), xops);
      output_asm_insn (AS2 (sar%L3,%0,%3), xops);
    }

  RET;
}
}

static char *
output_233 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx xops[4], low[1], high[1];
  static HOST_WIDE_INT ashrdi_label_number;

  CC_STATUS_INIT;

  split_di (operands, 1, low, high);
  xops[0] = operands[2];
  xops[1] = GEN_INT (32);
  xops[2] = low[0];
  xops[3] = high[0];

  output_asm_insn (AS3_SHIFT_DOUBLE (shrd%L2,%0,%3,%2), xops);
  output_asm_insn (AS2 (sar%L3,%0,%3), xops);
  output_asm_insn (AS2 (test%B0,%1,%b0), xops);
  asm_fprintf (asm_out_file, "\tje %LLASHRDI%d\n", ashrdi_label_number);
  xops[1] = GEN_INT (31);
  output_asm_insn (AS2 (mov%L2,%3,%2), xops);
  output_asm_insn (AS2 (sar%L3,%1,%3), xops);	/* shift by 32 */
  asm_fprintf (asm_out_file, "%LLASHRDI%d:\n", ashrdi_label_number++);

  RET;
}
}

static char *
output_234 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REG_P (operands[2]))
    return AS2 (sar%L0,%b2,%0);
  else
    return AS2 (sar%L0,%2,%0);
}
}

static char *
output_235 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REG_P (operands[2]))
    return AS2 (sar%W0,%b2,%0);
  else
    return AS2 (sar%W0,%2,%0);
}
}

static char *
output_236 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REG_P (operands[2]))
    return AS2 (sar%B0,%b2,%0);
  else
    return AS2 (sar%B0,%2,%0);
}
}

static char *
output_238 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx low[2], high[2], xops[4];

  split_di (operands, 2, low, high);
  xops[0] = low[0];
  xops[1] = high[1];
  xops[2] = high[0];
  xops[3] = const0_rtx;
  if (!rtx_equal_p (xops[0], xops[1]))
    output_asm_insn (AS2 (mov%L0,%1,%0), xops);

  if (GET_CODE (low[0]) == MEM)
    output_asm_insn (AS2 (mov%L2,%3,%2), xops);
  else
    output_asm_insn (AS2 (xor%L2,%2,%2), xops);

  RET;
}
}

static char *
output_239 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx xops[4], low[1], high[1];

  CC_STATUS_INIT;

  split_di (operands, 1, low, high);
  xops[0] = operands[2];
  xops[1] = const1_rtx;
  xops[2] = low[0];
  xops[3] = high[0];

  if (INTVAL (xops[0]) > 31)
    {
      output_asm_insn (AS2 (mov%L2,%3,%2), xops);	/* Fast shift by 32 */
      output_asm_insn (AS2 (xor%L3,%3,%3), xops);

      if (INTVAL (xops[0]) > 32)
        {
	  xops[0] = GEN_INT (INTVAL (xops[0]) - 32);
	  output_asm_insn (AS2 (shr%L2,%0,%2), xops); /* Remaining shift */
	}
    }
  else
    {
      output_asm_insn (AS3 (shrd%L2,%0,%3,%2), xops);
      output_asm_insn (AS2 (shr%L3,%0,%3), xops);
    }

  RET;
}
}

static char *
output_240 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx xops[4], low[1], high[1];
  static HOST_WIDE_INT lshrdi_label_number;

  CC_STATUS_INIT;

  split_di (operands, 1, low, high);
  xops[0] = operands[2];
  xops[1] = GEN_INT (32);
  xops[2] = low[0];
  xops[3] = high[0];

  output_asm_insn (AS3_SHIFT_DOUBLE (shrd%L2,%0,%3,%2), xops);
  output_asm_insn (AS2 (shr%L3,%0,%3), xops);
  output_asm_insn (AS2 (test%B0,%1,%b0), xops);
  asm_fprintf (asm_out_file, "\tje %LLLSHRDI%d\n", lshrdi_label_number);
  output_asm_insn (AS2 (mov%L2,%3,%2), xops);	/* Fast shift by 32 */
  output_asm_insn (AS2 (xor%L3,%3,%3), xops);
  asm_fprintf (asm_out_file, "%LLLSHRDI%d:\n", lshrdi_label_number++);

  RET;
}
}

static char *
output_241 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REG_P (operands[2]))
    return AS2 (shr%L0,%b2,%0);
  else
    return AS2 (shr%L0,%2,%1);
}
}

static char *
output_242 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REG_P (operands[2]))
    return AS2 (shr%W0,%b2,%0);
  else
    return AS2 (shr%W0,%2,%0);
}
}

static char *
output_243 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REG_P (operands[2]))
    return AS2 (shr%B0,%b2,%0);
  else
    return AS2 (shr%B0,%2,%0);
}
}

static char *
output_244 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REG_P (operands[2]))
    return AS2 (rol%L0,%b2,%0);
  else
    return AS2 (rol%L0,%2,%0);
}
}

static char *
output_245 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REG_P (operands[2]))
    return AS2 (rol%W0,%b2,%0);
  else
    return AS2 (rol%W0,%2,%0);
}
}

static char *
output_246 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REG_P (operands[2]))
    return AS2 (rol%B0,%b2,%0);
  else
    return AS2 (rol%B0,%2,%0);
}
}

static char *
output_247 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REG_P (operands[2]))
    return AS2 (ror%L0,%b2,%0);
  else
    return AS2 (ror%L0,%2,%0);
}
}

static char *
output_248 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REG_P (operands[2]))
    return AS2 (ror%W0,%b2,%0);
  else
    return AS2 (ror%W0,%2,%0);
}
}

static char *
output_249 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (REG_P (operands[2]))
    return AS2 (ror%B0,%b2,%0);
  else
    return AS2 (ror%B0,%2,%0);
}
}

static char *
output_250 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  CC_STATUS_INIT;

  if (INTVAL (operands[3]) == 1)
    return AS2 (bts%L0,%2,%0);
  else
    return AS2 (btr%L0,%2,%0);
}
}

static char *
output_251 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  CC_STATUS_INIT;

  return AS2 (btc%L0,%1,%0);
}
}

static char *
output_252 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  CC_STATUS_INIT;

  return AS2 (btc%L0,%2,%0);
}
}

static char *
output_253 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  cc_status.flags |= CC_Z_IN_NOT_C;
  return AS2 (bt%L0,%1,%0);
}
}

static char *
output_254 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  unsigned int mask;

  mask = ((1 << INTVAL (operands[1])) - 1) << INTVAL (operands[2]);
  operands[1] = GEN_INT (mask);

  if (QI_REG_P (operands[0]))
    {
      if ((mask & ~0xff) == 0)
        {
	  cc_status.flags |= CC_NOT_NEGATIVE;
	  return AS2 (test%B0,%1,%b0);
	}

      if ((mask & ~0xff00) == 0)
        {
	  cc_status.flags |= CC_NOT_NEGATIVE;
	  operands[1] = GEN_INT (mask >> 8);
	  return AS2 (test%B0,%1,%h0);
	}
    }

  return AS2 (test%L0,%1,%0);
}
}

static char *
output_255 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  unsigned int mask;

  mask = ((1 << INTVAL (operands[1])) - 1) << INTVAL (operands[2]);
  operands[1] = GEN_INT (mask);

  if (! REG_P (operands[0]) || QI_REG_P (operands[0]))
    {
      if ((mask & ~0xff) == 0)
        {
	  cc_status.flags |= CC_NOT_NEGATIVE;
	  return AS2 (test%B0,%1,%b0);
	}

      if ((mask & ~0xff00) == 0)
        {
	  cc_status.flags |= CC_NOT_NEGATIVE;
	  operands[1] = GEN_INT (mask >> 8);

	  if (QI_REG_P (operands[0]))
	    return AS2 (test%B0,%1,%h0);
	  else
	    {
	      operands[0] = adj_offsettable_operand (operands[0], 1);
	      return AS2 (test%B0,%1,%b0);
	    }
	}

      if (GET_CODE (operands[0]) == MEM && (mask & ~0xff0000) == 0)
        {
	  cc_status.flags |= CC_NOT_NEGATIVE;
	  operands[1] = GEN_INT (mask >> 16);
	  operands[0] = adj_offsettable_operand (operands[0], 2);
	  return AS2 (test%B0,%1,%b0);
	}

      if (GET_CODE (operands[0]) == MEM && (mask & ~0xff000000) == 0)
        {
	  cc_status.flags |= CC_NOT_NEGATIVE;
	  operands[1] = GEN_INT (mask >> 24);
	  operands[0] = adj_offsettable_operand (operands[0], 3);
	  return AS2 (test%B0,%1,%b0);
	}
    }

  if (CONSTANT_P (operands[1]) || GET_CODE (operands[0]) == MEM)
    return AS2 (test%L0,%1,%0);

  return AS2 (test%L1,%0,%1);
}
}

static char *
output_257 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (cc_prev_status.flags & CC_Z_IN_NOT_C)
    return AS1 (setnb,%0);
  else
    return AS1 (sete,%0);
}
}

static char *
output_259 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (cc_prev_status.flags & CC_Z_IN_NOT_C)
    return AS1 (setb,%0);
  else
    return AS1 (setne,%0);
}

}

static char *
output_261 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (TARGET_IEEE_FP && (cc_prev_status.flags & CC_IN_80387)
      && ! (cc_prev_status.flags & CC_FCOMI))
    return AS1 (sete,%0);

  OUTPUT_JUMP ("setg %0", "seta %0", NULL_PTR);
}
}

static char *
output_263 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return "seta %0"; 
}

static char *
output_265 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (TARGET_IEEE_FP && (cc_prev_status.flags & CC_IN_80387)
      && ! (cc_prev_status.flags & CC_FCOMI))
    return AS1 (sete,%0);

  OUTPUT_JUMP ("setl %0", "setb %0", "sets %0");
}
}

static char *
output_267 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return "setb %0"; 
}

static char *
output_269 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (TARGET_IEEE_FP && (cc_prev_status.flags & CC_IN_80387)
      && ! (cc_prev_status.flags & CC_FCOMI))
    return AS1 (sete,%0);

  OUTPUT_JUMP ("setge %0", "setae %0", "setns %0");
}
}

static char *
output_271 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return "setae %0"; 
}

static char *
output_273 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (TARGET_IEEE_FP && (cc_prev_status.flags & CC_IN_80387)
      && ! (cc_prev_status.flags & CC_FCOMI))
    return AS1 (setb,%0);

  OUTPUT_JUMP ("setle %0", "setbe %0", NULL_PTR);
}
}

static char *
output_275 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return "setbe %0"; 
}

static char *
output_277 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (cc_prev_status.flags & CC_Z_IN_NOT_C)
    return "jnc %l0";
  else
  if (cc_prev_status.flags & CC_TEST_AX)
    {
      operands[1] = gen_rtx (REG, SImode, 0);
      operands[2] = GEN_INT (0x4000);
      output_asm_insn (AS2 (testl,%2,%1), operands);
      return AS1 (jne,%l0);
    }

    return "je %l0";
}
}

static char *
output_279 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (cc_prev_status.flags & CC_Z_IN_NOT_C)
    return "jc %l0";
  else
  if (cc_prev_status.flags & CC_TEST_AX)
    {
      operands[1] = gen_rtx (REG, SImode, 0);
      operands[2] = GEN_INT (0x4000);
      output_asm_insn (AS2 (testl,%2,%1), operands);
      return AS1 (je,%l0);
    }

    return "jne %l0";
}
}

static char *
output_281 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (TARGET_IEEE_FP && (cc_prev_status.flags & CC_IN_80387)
      && ! (cc_prev_status.flags & CC_FCOMI))
    return AS1 (je,%l0);

  if (cc_prev_status.flags & CC_TEST_AX)
    {
      operands[1] = gen_rtx (REG, SImode, 0);
      operands[2] = GEN_INT (0x4100);
      output_asm_insn (AS2 (testl,%2,%1), operands);
      return AS1 (je,%l0);
    }
  OUTPUT_JUMP ("jg %l0", "ja %l0", NULL_PTR);
}
}

static char *
output_285 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (TARGET_IEEE_FP && (cc_prev_status.flags & CC_IN_80387)
      && ! (cc_prev_status.flags & CC_FCOMI))
    return AS1 (je,%l0);

  if (cc_prev_status.flags & CC_TEST_AX)
    {
      operands[1] = gen_rtx (REG, SImode, 0);
      operands[2] = GEN_INT (0x100);
      output_asm_insn (AS2 (testl,%2,%1), operands);
      return AS1 (jne,%l0);
    }
  OUTPUT_JUMP ("jl %l0", "jb %l0", "js %l0");
}
}

static char *
output_289 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (TARGET_IEEE_FP && (cc_prev_status.flags & CC_IN_80387)
      && ! (cc_prev_status.flags & CC_FCOMI))
    return AS1 (je,%l0);
  if (cc_prev_status.flags & CC_TEST_AX)
    {
      operands[1] = gen_rtx (REG, SImode, 0);
      operands[2] = GEN_INT (0x100);
      output_asm_insn (AS2 (testl,%2,%1), operands);
      return AS1 (je,%l0);
    }
  OUTPUT_JUMP ("jge %l0", "jae %l0", "jns %l0");
}
}

static char *
output_293 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (TARGET_IEEE_FP && (cc_prev_status.flags & CC_IN_80387)
      && ! (cc_prev_status.flags & CC_FCOMI))
    return AS1 (jb,%l0);
  if (cc_prev_status.flags & CC_TEST_AX)
    {
      operands[1] = gen_rtx (REG, SImode, 0);
      operands[2] = GEN_INT (0x4100);
      output_asm_insn (AS2 (testl,%2,%1), operands);
      return AS1 (jne,%l0);
    }

  OUTPUT_JUMP ("jle %l0", "jbe %l0", NULL_PTR);
}
}

static char *
output_296 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (cc_prev_status.flags & CC_Z_IN_NOT_C)
    return "jc %l0";
  else
  if (cc_prev_status.flags & CC_TEST_AX)
    {
      operands[1] = gen_rtx (REG, SImode, 0);
      operands[2] = GEN_INT (0x4000);
      output_asm_insn (AS2 (testl,%2,%1), operands);
      return AS1 (je,%l0);
    }
    return "jne %l0";
}
}

static char *
output_297 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (cc_prev_status.flags & CC_Z_IN_NOT_C)
    return "jnc %l0";
  else
  if (cc_prev_status.flags & CC_TEST_AX)
    {
      operands[1] = gen_rtx (REG, SImode, 0);
      operands[2] = GEN_INT (0x4000);
      output_asm_insn (AS2 (testl,%2,%1), operands);
      return AS1 (jne,%l0);
    }
    return "je %l0";
}
}

static char *
output_298 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (TARGET_IEEE_FP && (cc_prev_status.flags & CC_IN_80387)
      && ! (cc_prev_status.flags & CC_FCOMI))
    return AS1 (jne,%l0);
  if (cc_prev_status.flags & CC_TEST_AX)
    {
      operands[1] = gen_rtx (REG, SImode, 0);
      operands[2] = GEN_INT (0x4100);
      output_asm_insn (AS2 (testl,%2,%1), operands);
      return AS1 (jne,%l0);
    }
  OUTPUT_JUMP ("jle %l0", "jbe %l0", NULL_PTR);
}
}

static char *
output_300 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (TARGET_IEEE_FP && (cc_prev_status.flags & CC_IN_80387)
      && ! (cc_prev_status.flags & CC_FCOMI))
    return AS1 (jne,%l0);
  if (cc_prev_status.flags & CC_TEST_AX)
    {
      operands[1] = gen_rtx (REG, SImode, 0);
      operands[2] = GEN_INT (0x100);
      output_asm_insn (AS2 (testl,%2,%1), operands);
      return AS1 (je,%l0);
    }

  OUTPUT_JUMP ("jge %l0", "jae %l0", "jns %l0");
}
}

static char *
output_302 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (TARGET_IEEE_FP && (cc_prev_status.flags & CC_IN_80387)
      && ! (cc_prev_status.flags & CC_FCOMI))
    return AS1 (jne,%l0);
  if (cc_prev_status.flags & CC_TEST_AX)
    {
      operands[1] = gen_rtx (REG, SImode, 0);
      operands[2] = GEN_INT (0x100);
      output_asm_insn (AS2 (testl,%2,%1), operands);
      return AS1 (jne,%l0);
    }
  OUTPUT_JUMP ("jl %l0", "jb %l0", "js %l0");
}
}

static char *
output_304 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (TARGET_IEEE_FP && (cc_prev_status.flags & CC_IN_80387)
      && ! (cc_prev_status.flags & CC_FCOMI))
    return AS1 (jae,%l0);

  if (cc_prev_status.flags & CC_TEST_AX)
    {
      operands[1] = gen_rtx (REG, SImode, 0);
      operands[2] = GEN_INT (0x4100);
      output_asm_insn (AS2 (testl,%2,%1), operands);
      return AS1 (je,%l0);
    }
  OUTPUT_JUMP ("jg %l0", "ja %l0", NULL_PTR);
}
}

static char *
output_307 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  CC_STATUS_INIT;

  return AS1 (jmp,%*%0);
}
}

static char *
output_309 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  CC_STATUS_INIT;
  if (operands[2] == constm1_rtx)
    output_asm_insn (AS1 (dec%L1,%1), operands);

  else if (operands[2] == const1_rtx)
    output_asm_insn (AS1 (inc%L1,%1), operands);

  else
    output_asm_insn (AS2 (add%L1,%2,%1), operands);

  return AS1 (%J0,%l3);
}
}

static char *
output_310 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  CC_STATUS_INIT;
  if (operands[2] == const1_rtx)
    output_asm_insn (AS1 (dec%L1,%1), operands);

  else if (operands[1] == constm1_rtx)
    output_asm_insn (AS1 (inc%L1,%1), operands);

  else
    output_asm_insn (AS2 (sub%L1,%2,%1), operands);

  return AS1 (%J0,%l3);
}
}

static char *
output_311 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  CC_STATUS_INIT;
  operands[2] = const1_rtx;
  output_asm_insn (AS2 (sub%L0,%2,%0), operands);
  return "jnc %l1";
}
}

static char *
output_312 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  CC_STATUS_INIT;
  operands[2] = const1_rtx;
  output_asm_insn (AS2 (sub%L0,%2,%0), operands);
  return "jc %l1";
}
}

static char *
output_313 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  CC_STATUS_INIT;
  output_asm_insn (AS1 (dec%L0,%0), operands);
  return "jnz %l1";
}
}

static char *
output_314 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  CC_STATUS_INIT;
  output_asm_insn (AS1 (dec%L0,%0), operands);
  return "jz %l1";
}
}

static char *
output_315 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  CC_STATUS_INIT;
  output_asm_insn (AS1 (inc%L0,%0), operands);
  return "jnz %l1";
}
}

static char *
output_316 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  CC_STATUS_INIT;
  output_asm_insn (AS1 (inc%L0,%0), operands);
  return "jz %l1";
}
}

static char *
output_318 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx xops[4];

  xops[0] = operands[0];
  xops[1] = operands[1];
  xops[2] = operands[2];
  xops[3] = pic_offset_table_rtx;

  output_asm_insn (AS2 (mov%L2,%3,%2), xops);
  output_asm_insn ("sub%L2 %l1@GOTOFF(%3,%0,4),%2", xops);
  output_asm_insn (AS1 (jmp,%*%2), xops);
  ASM_OUTPUT_ALIGN_CODE (asm_out_file);
  RET;
}
}

static char *
output_319 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  CC_STATUS_INIT;

  return AS1 (jmp,%*%0);
}
}

static char *
output_321 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (GET_CODE (operands[0]) == MEM
      && ! CONSTANT_ADDRESS_P (XEXP (operands[0], 0)))
    {
      operands[0] = XEXP (operands[0], 0);
      return AS1 (call,%*%0);
    }
  else
    return AS1 (call,%P0);
}
}

static char *
output_324 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (GET_CODE (operands[0]) == MEM
      && ! CONSTANT_ADDRESS_P (XEXP (operands[0], 0)))
    {
      operands[0] = XEXP (operands[0], 0);
      return AS1 (call,%*%0);
    }
  else
    return AS1 (call,%P0);
}
}

static char *
output_327 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (GET_CODE (operands[1]) == MEM
      && ! CONSTANT_ADDRESS_P (XEXP (operands[1], 0)))
    {
      operands[1] = XEXP (operands[1], 0);
      output_asm_insn (AS1 (call,%*%1), operands);
    }
  else
    output_asm_insn (AS1 (call,%P1), operands);

  RET;
}
}

static char *
output_330 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  if (GET_CODE (operands[1]) == MEM
      && ! CONSTANT_ADDRESS_P (XEXP (operands[1], 0)))
    {
      operands[1] = XEXP (operands[1], 0);
      output_asm_insn (AS1 (call,%*%1), operands);
    }
  else
    output_asm_insn (AS1 (call,%P1), operands);

  RET;
}
}

static char *
output_339 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx xops [2];

  xops[0] = operands[0];
  xops[1] = stack_pointer_rtx;
  output_asm_insn (AS2 (sub%L1,%0,%1), xops);
  RET;
}
}

static char *
output_340 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  char buffer[64];

  if (TARGET_DEEP_BRANCH_PREDICTION) 
    {
      sprintf (buffer, "addl %s,%%0", XSTR (operands[1], 0));
      output_asm_insn (buffer, operands);
    }
  else  
    {
      sprintf (buffer, "addl %s+[.-%%P2],%%0", XSTR (operands[1], 0));
      output_asm_insn (buffer, operands);
    }    
  RET;
}
}

static char *
output_341 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  char buffer[64];

  output_asm_insn (AS1 (call,%P1), operands);
  if (! TARGET_DEEP_BRANCH_PREDICTION) 
    {
      ASM_OUTPUT_INTERNAL_LABEL (asm_out_file, "L", CODE_LABEL_NUMBER (operands[1]));
    }    
  RET;
}
}

static char *
output_342 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  operands[1] = gen_label_rtx ();
  output_asm_insn (AS1 (call,%P1), operands);
  ASM_OUTPUT_INTERNAL_LABEL (asm_out_file, "L",
			     CODE_LABEL_NUMBER (operands[1]));
  output_asm_insn (AS1 (pop%L0,%0), operands);
  output_asm_insn ("addl $_GLOBAL_OFFSET_TABLE_+[.-%P1],%0", operands);
  RET;
}
}

static char *
output_344 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx xops [2];

    xops[0] = frame_pointer_rtx;
    xops[1] = stack_pointer_rtx;
    output_asm_insn (AS2 (mov%L0,%0,%1), xops);
    RET;
}
}

static char *
output_346 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
    output_asm_insn (AS1 (pop%L0,%P0), operands);
    RET;
}
}

static char *
output_348 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx xops[2];

  output_asm_insn ("cld", operands);
  if (GET_CODE (operands[2]) == CONST_INT)
    {
      if (INTVAL (operands[2]) & ~0x03)
	{
	  xops[0] = GEN_INT ((INTVAL (operands[2]) >> 2) & 0x3fffffff);
	  xops[1] = operands[4];

	  output_asm_insn (AS2 (mov%L1,%0,%1), xops);
#ifdef INTEL_SYNTAX
	  output_asm_insn ("rep movsd", xops);
#else
	  output_asm_insn ("rep\n\tmovsl", xops);
#endif
	}
      if (INTVAL (operands[2]) & 0x02)
	output_asm_insn ("movsw", operands);
      if (INTVAL (operands[2]) & 0x01)
	output_asm_insn ("movsb", operands);
    }
  else
    abort ();
  RET;
}
}

static char *
output_350 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx xops[2];

  output_asm_insn ("cld", operands);
  if (GET_CODE (operands[1]) == CONST_INT)
    {
      if (INTVAL (operands[1]) & ~0x03)
	{
	  xops[0] = GEN_INT ((INTVAL (operands[1]) >> 2) & 0x3fffffff);
	  xops[1] = operands[4];

	  output_asm_insn (AS2 (mov%L1,%0,%1), xops);
#ifdef INTEL_SYNTAX
	  output_asm_insn ("rep stosd", xops);
#else
	  output_asm_insn ("rep\n\tstosl", xops);
#endif
	}
      if (INTVAL (operands[1]) & 0x02)
	output_asm_insn ("stosw", operands);
      if (INTVAL (operands[1]) & 0x01)
	output_asm_insn ("stosb", operands);
    }
  else
    abort ();
  RET;
}
}

static char *
output_352 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx xops[2], label;

  label = gen_label_rtx ();

  output_asm_insn ("cld", operands);
  output_asm_insn (AS2 (xor%L0,%0,%0), operands);
  output_asm_insn ("repz\n\tcmps%B2", operands);
  output_asm_insn ("je %l0", &label);

  xops[0] = operands[0];
  xops[1] = const1_rtx;
  output_asm_insn (AS2 (sbb%L0,%0,%0), xops);
  if (QI_REG_P (xops[0]))
     output_asm_insn (AS2 (or%B0,%1,%b0), xops);
  else
     output_asm_insn (AS2 (or%L0,%1,%0), xops);
	
  ASM_OUTPUT_INTERNAL_LABEL (asm_out_file, "L", CODE_LABEL_NUMBER (label));
  RET;
}
}

static char *
output_353 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx xops[2];

  cc_status.flags |= CC_NOT_SIGNED;

  xops[0] = gen_rtx (REG, QImode, 0);
  xops[1] = CONST0_RTX (QImode);

  output_asm_insn ("cld", operands);
  output_asm_insn (AS2 (test%B0,%1,%0), xops);
  return "repz\n\tcmps%B2";
}
}

static char *
output_355 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx xops[3];
  static int ffssi_label_number;
  char buffer[30];

  xops[0] = operands[0];
  xops[1] = operands[1];
  xops[2] = constm1_rtx;
  output_asm_insn (AS2 (bsf%L0,%1,%0), xops);
#ifdef LOCAL_LABEL_PREFIX
  sprintf (buffer, "jnz %sLFFSSI%d",
	   LOCAL_LABEL_PREFIX, ffssi_label_number);
#else
  sprintf (buffer, "jnz %sLFFSSI%d",
	   "", ffssi_label_number);
#endif
  output_asm_insn (buffer, xops);
  output_asm_insn (AS2 (mov%L0,%2,%0), xops);
#ifdef LOCAL_LABEL_PREFIX
  sprintf (buffer, "%sLFFSSI%d:",
	   LOCAL_LABEL_PREFIX, ffssi_label_number);
#else
  sprintf (buffer, "%sLFFSSI%d:",
	   "", ffssi_label_number);
#endif
  output_asm_insn (buffer, xops);

  ffssi_label_number++;
  CC_STATUS_INIT;
  return "";
}
}

static char *
output_357 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx xops[3];
  static int ffshi_label_number;
  char buffer[30];

  xops[0] = operands[0];
  xops[1] = operands[1];
  xops[2] = constm1_rtx;
  output_asm_insn (AS2 (bsf%W0,%1,%0), xops);
#ifdef LOCAL_LABEL_PREFIX
  sprintf (buffer, "jnz %sLFFSHI%d",
	   LOCAL_LABEL_PREFIX, ffshi_label_number);
#else
  sprintf (buffer, "jnz %sLFFSHI%d",
	   "", ffshi_label_number);
#endif
  output_asm_insn (buffer, xops);
  output_asm_insn (AS2 (mov%W0,%2,%0), xops);
#ifdef LOCAL_LABEL_PREFIX
  sprintf (buffer, "%sLFFSHI%d:",
	   LOCAL_LABEL_PREFIX, ffshi_label_number);
#else
  sprintf (buffer, "%sLFFSHI%d:",
	   "", ffshi_label_number);
#endif
  output_asm_insn (buffer, xops);

  ffshi_label_number++;
  CC_STATUS_INIT;
  return "";
}
}

static char *
output_358 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_387_binary_op (insn, operands);
}

static char *
output_359 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_387_binary_op (insn, operands);
}

static char *
output_360 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_387_binary_op (insn, operands);
}

static char *
output_361 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_387_binary_op (insn, operands);
}

static char *
output_362 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_387_binary_op (insn, operands);
}

static char *
output_363 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_387_binary_op (insn, operands);
}

static char *
output_364 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_387_binary_op (insn, operands);
}

static char *
output_365 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_387_binary_op (insn, operands);
}

static char *
output_366 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_387_binary_op (insn, operands);
}

static char *
output_367 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_387_binary_op (insn, operands);
}

static char *
output_368 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_387_binary_op (insn, operands);
}

static char *
output_369 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_387_binary_op (insn, operands);
}

static char *
output_370 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_387_binary_op (insn, operands);
}

static char *
output_372 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  rtx xops[2];

  xops[0] = operands[0];
  xops[1] = constm1_rtx;
  output_asm_insn ("cld", operands);
  output_asm_insn (AS2 (mov%L0,%1,%0), xops);
  return "repnz\n\tscas%B2";
}
}

static char *
output_375 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  switch (which_alternative)
    {
    case 0:
      /* r <- cond ? arg : r */
      output_asm_insn (AS2 (cmov%C1,%2,%0), operands);
      break;

    case 1:
      /* r <- cond ? r : arg */
      output_asm_insn (AS2 (cmov%c1,%3,%0), operands);
      break;

    case 2:
      /* r <- cond ? arg1 : arg2 */
      output_asm_insn (AS2 (cmov%C1,%2,%0), operands);
      output_asm_insn (AS2 (cmov%c1,%3,%0), operands);
      break;
    }

  RET;
}
}

static char *
output_376 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  switch (which_alternative)
    {
    case 0:
      /* r <- cond ? arg : r */
      output_asm_insn (AS2 (cmov%C1,%2,%0), operands);
      break;

    case 1:
      /* r <- cond ? r : arg */
      output_asm_insn (AS2 (cmov%c1,%3,%0), operands);
      break;

    case 2:
      /* r <- cond ? arg1 : arg2 */
      output_asm_insn (AS2 (cmov%C1,%2,%0), operands);
      output_asm_insn (AS2 (cmov%c1,%3,%0), operands);
      break;
    }

  RET;
}
}

static char *
output_380 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  switch (which_alternative)
    {
    case 0:
      /* r <- cond ? arg : r */
      output_asm_insn (AS2 (fcmov%f1,%3,%0), operands);
      break;

    case 1:
      /* r <- cond ? r : arg */
      output_asm_insn (AS2 (fcmov%F1,%2,%0), operands);
      break;

    case 2:
      /* r <- cond ? r : arg */
      output_asm_insn (AS2 (fcmov%F1,%2,%0), operands);
      output_asm_insn (AS2 (fcmov%f1,%3,%0), operands);
      break;
    }

  RET;
}
}

static char *
output_381 (operands, insn)
     rtx *operands;
     rtx insn;
{

{
  switch (which_alternative)
    {
    case 0:
      /* r <- cond ? arg : r */
      output_asm_insn (AS2 (fcmov%f1,%3,%0), operands);
      break;

    case 1:
      /* r <- cond ? r : arg */
      output_asm_insn (AS2 (fcmov%F1,%2,%0), operands);
      break;

    case 2:
      /* r <- cond ? r : arg */
      output_asm_insn (AS2 (fcmov%F1,%2,%0), operands);
      output_asm_insn (AS2 (fcmov%f1,%3,%0), operands);
      break;
    }

  RET;
}
}

static char *
output_382 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_strlen_unroll (operands);
}

static char *
output_383 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_strlen_unroll (operands);
}

static char *
output_384 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return output_strlen_unroll (operands);
}

static char *
output_385 (operands, insn)
     rtx *operands;
     rtx insn;
{
 return AS1(call,__alloca);
}

char * const insn_template[] =
  {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "push%L0 %1",
    "push%L0 %1",
    "push%L0 %1",
    0,
    0,
    "push%W0 %1",
    "push%W0 %1",
    "push%W0 %1",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "mul%B0 %2",
    "imul%B0 %2",
    "mul%L0 %2",
    "imul%L0 %2",
    "mul%L0 %2",
    "imul%L0 %2",
    0,
    0,
    0,
    "idiv%B0 %2",
    "div%B0 %2",
    0,
    0,
    0,
    0,
    "cwtd\n\tidiv%W0 %2",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "neg%L0 %0",
    "neg%W0 %0",
    "neg%B0 %0",
    "fchs",
    "fchs",
    "fchs",
    "fchs",
    "fchs",
    "fabs",
    "fabs",
    "fabs",
    "fabs",
    "fabs",
    "fsqrt",
    "fsqrt",
    "fsqrt",
    "fsqrt",
    "fsqrt",
    "fsqrt",
    "fsin",
    "fsin",
    "fsin",
    "fsin",
    "fcos",
    "fcos",
    "fcos",
    "fcos",
    "not%L0 %0",
    "not%W0 %0",
    "not%B0 %0",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "ja %l0",
    0,
    0,
    0,
    "jb %l0",
    0,
    0,
    0,
    "jae %l0",
    0,
    0,
    0,
    "jbe %l0",
    0,
    0,
    0,
    "jbe %l0",
    0,
    "jae %l0",
    0,
    "jb %l0",
    0,
    "ja %l0",
    "jmp %l0",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "call %P0",
    0,
    0,
    "call %P0",
    0,
    0,
    "call %P1",
    0,
    0,
    "call %P1",
    0,
    "",
    0,
    "ret",
    "ret %0",
    "nop",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "leave",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
  };

char *(*const insn_outfun[])() =
  {
    output_0,
    0,
    output_2,
    0,
    output_4,
    0,
    output_6,
    0,
    output_8,
    0,
    output_10,
    0,
    output_12,
    0,
    output_14,
    0,
    output_16,
    0,
    output_18,
    output_19,
    output_20,
    output_21,
    output_22,
    output_23,
    output_24,
    output_25,
    output_26,
    output_27,
    output_28,
    output_29,
    output_30,
    output_31,
    output_32,
    output_33,
    output_34,
    output_35,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    output_45,
    output_46,
    output_47,
    0,
    0,
    0,
    0,
    output_52,
    0,
    0,
    0,
    0,
    output_57,
    0,
    output_59,
    output_60,
    output_61,
    output_62,
    0,
    output_64,
    0,
    output_66,
    0,
    output_68,
    output_69,
    output_70,
    output_71,
    output_72,
    0,
    output_74,
    output_75,
    output_76,
    output_77,
    output_78,
    0,
    output_80,
    output_81,
    output_82,
    output_83,
    output_84,
    output_85,
    output_86,
    output_87,
    0,
    0,
    output_90,
    0,
    0,
    0,
    output_94,
    0,
    0,
    0,
    output_98,
    output_99,
    output_100,
    output_101,
    output_102,
    0,
    output_104,
    output_105,
    output_106,
    output_107,
    output_108,
    0,
    output_110,
    output_111,
    output_112,
    0,
    0,
    0,
    0,
    0,
    0,
    output_119,
    output_120,
    output_121,
    0,
    0,
    0,
    output_125,
    output_126,
    output_127,
    0,
    0,
    0,
    0,
    0,
    0,
    output_134,
    output_135,
    output_136,
    output_137,
    output_138,
    output_139,
    output_140,
    output_141,
    output_142,
    0,
    output_144,
    output_145,
    0,
    output_147,
    0,
    output_149,
    0,
    0,
    0,
    output_153,
    output_154,
    0,
    output_156,
    0,
    output_158,
    0,
    output_160,
    0,
    0,
    0,
    output_164,
    output_165,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    output_180,
    0,
    output_182,
    output_183,
    output_184,
    output_185,
    output_186,
    output_187,
    output_188,
    output_189,
    output_190,
    output_191,
    output_192,
    output_193,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    output_225,
    output_226,
    output_227,
    output_228,
    output_229,
    0,
    output_231,
    output_232,
    output_233,
    output_234,
    output_235,
    output_236,
    0,
    output_238,
    output_239,
    output_240,
    output_241,
    output_242,
    output_243,
    output_244,
    output_245,
    output_246,
    output_247,
    output_248,
    output_249,
    output_250,
    output_251,
    output_252,
    output_253,
    output_254,
    output_255,
    0,
    output_257,
    0,
    output_259,
    0,
    output_261,
    0,
    output_263,
    0,
    output_265,
    0,
    output_267,
    0,
    output_269,
    0,
    output_271,
    0,
    output_273,
    0,
    output_275,
    0,
    output_277,
    0,
    output_279,
    0,
    output_281,
    0,
    0,
    0,
    output_285,
    0,
    0,
    0,
    output_289,
    0,
    0,
    0,
    output_293,
    0,
    0,
    output_296,
    output_297,
    output_298,
    0,
    output_300,
    0,
    output_302,
    0,
    output_304,
    0,
    0,
    output_307,
    0,
    output_309,
    output_310,
    output_311,
    output_312,
    output_313,
    output_314,
    output_315,
    output_316,
    0,
    output_318,
    output_319,
    0,
    output_321,
    0,
    0,
    output_324,
    0,
    0,
    output_327,
    0,
    0,
    output_330,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    output_339,
    output_340,
    output_341,
    output_342,
    0,
    output_344,
    0,
    output_346,
    0,
    output_348,
    0,
    output_350,
    0,
    output_352,
    output_353,
    0,
    output_355,
    0,
    output_357,
    output_358,
    output_359,
    output_360,
    output_361,
    output_362,
    output_363,
    output_364,
    output_365,
    output_366,
    output_367,
    output_368,
    output_369,
    output_370,
    0,
    output_372,
    0,
    0,
    output_375,
    output_376,
    0,
    0,
    0,
    output_380,
    output_381,
    output_382,
    output_383,
    output_384,
    output_385,
    0,
    0,
  };

rtx (*const insn_gen_function[]) () =
  {
    gen_tstsi_1,
    gen_tstsi,
    gen_tsthi_1,
    gen_tsthi,
    gen_tstqi_1,
    gen_tstqi,
    gen_tstsf_cc,
    gen_tstsf,
    gen_tstdf_cc,
    gen_tstdf,
    gen_tstxf_cc,
    gen_tstxf,
    gen_cmpsi_1,
    gen_cmpsi,
    gen_cmphi_1,
    gen_cmphi,
    gen_cmpqi_1,
    gen_cmpqi,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    gen_cmpsf_cc_1,
    0,
    0,
    0,
    gen_cmpxf,
    gen_cmpdf,
    gen_cmpsf,
    gen_cmpxf_cc,
    gen_cmpxf_ccfpeq,
    gen_cmpdf_cc,
    gen_cmpdf_ccfpeq,
    gen_cmpsf_cc,
    gen_cmpsf_ccfpeq,
    0,
    0,
    0,
    0,
    0,
    0,
    gen_movsi,
    0,
    0,
    0,
    0,
    gen_movhi,
    0,
    gen_movstricthi,
    0,
    0,
    0,
    0,
    gen_movqi,
    0,
    gen_movstrictqi,
    0,
    gen_movsf,
    gen_movsf_push_nomove,
    gen_movsf_push,
    gen_movsf_mem,
    gen_movsf_normal,
    gen_swapsf,
    gen_movdf,
    gen_movdf_push_nomove,
    gen_movdf_push,
    gen_movdf_mem,
    0,
    gen_swapdf,
    gen_movxf,
    gen_movxf_push_nomove,
    gen_movxf_push,
    gen_movxf_mem,
    0,
    gen_swapxf,
    0,
    gen_movdi,
    gen_zero_extendhisi2,
    0,
    0,
    gen_zero_extendqihi2,
    0,
    0,
    0,
    gen_zero_extendqisi2,
    0,
    0,
    0,
    gen_zero_extendsidi2,
    gen_extendsidi2,
    gen_extendhisi2,
    gen_extendqihi2,
    gen_extendqisi2,
    gen_truncdisi2,
    0,
    0,
    gen_extendsfdf2,
    gen_extenddfxf2,
    gen_extendsfxf2,
    gen_truncdfsf2,
    0,
    gen_truncxfsf2,
    gen_truncxfdf2,
    gen_fixuns_truncxfsi2,
    gen_fixuns_truncdfsi2,
    gen_fixuns_truncsfsi2,
    gen_fix_truncxfdi2,
    gen_fix_truncdfdi2,
    gen_fix_truncsfdi2,
    0,
    0,
    0,
    gen_fix_truncxfsi2,
    gen_fix_truncdfsi2,
    gen_fix_truncsfsi2,
    0,
    0,
    0,
    gen_floatsisf2,
    gen_floatdisf2,
    gen_floatsidf2,
    gen_floatdidf2,
    gen_floatsixf2,
    gen_floatdixf2,
    0,
    0,
    0,
    0,
    0,
    0,
    gen_addsidi3_1,
    gen_addsidi3_2,
    gen_adddi3,
    gen_addsi3,
    0,
    gen_movsi_lea,
    gen_addhi3,
    0,
    gen_addqi3,
    0,
    gen_addxf3,
    gen_adddf3,
    gen_addsf3,
    gen_subsidi3,
    gen_subdi3,
    gen_subsi3,
    0,
    gen_subhi3,
    0,
    gen_subqi3,
    0,
    gen_subxf3,
    gen_subdf3,
    gen_subsf3,
    gen_mulhi3,
    gen_mulsi3,
    gen_umulqihi3,
    gen_mulqihi3,
    gen_umulsidi3,
    gen_mulsidi3,
    gen_umulsi3_highpart,
    gen_smulsi3_highpart,
    gen_mulxf3,
    gen_muldf3,
    gen_mulsf3,
    gen_divqi3,
    gen_udivqi3,
    gen_divxf3,
    gen_divdf3,
    gen_divsf3,
    gen_divmodsi4,
    gen_divmodhi4,
    gen_udivmodsi4,
    gen_udivmodhi4,
    gen_andsi3,
    gen_andhi3,
    gen_andqi3,
    gen_iorsi3,
    gen_iorhi3,
    gen_iorqi3,
    gen_xorsi3,
    gen_xorhi3,
    gen_xorqi3,
    gen_negdi2,
    gen_negsi2,
    gen_neghi2,
    gen_negqi2,
    gen_negsf2,
    gen_negdf2,
    0,
    gen_negxf2,
    0,
    gen_abssf2,
    gen_absdf2,
    0,
    gen_absxf2,
    0,
    gen_sqrtsf2,
    gen_sqrtdf2,
    0,
    gen_sqrtxf2,
    0,
    0,
    gen_sindf2,
    gen_sinsf2,
    0,
    gen_sinxf2,
    gen_cosdf2,
    gen_cossf2,
    0,
    gen_cosxf2,
    gen_one_cmplsi2,
    gen_one_cmplhi2,
    gen_one_cmplqi2,
    gen_ashldi3,
    gen_ashldi3_const_int,
    gen_ashldi3_non_const_int,
    gen_ashlsi3,
    gen_ashlhi3,
    gen_ashlqi3,
    gen_ashrdi3,
    gen_ashldi3_32,
    gen_ashrdi3_const_int,
    gen_ashrdi3_non_const_int,
    gen_ashrsi3,
    gen_ashrhi3,
    gen_ashrqi3,
    gen_lshrdi3,
    gen_lshrdi3_32,
    gen_lshrdi3_const_int,
    gen_lshrdi3_non_const_int,
    gen_lshrsi3,
    gen_lshrhi3,
    gen_lshrqi3,
    gen_rotlsi3,
    gen_rotlhi3,
    gen_rotlqi3,
    gen_rotrsi3,
    gen_rotrhi3,
    gen_rotrqi3,
    0,
    0,
    0,
    0,
    0,
    0,
    gen_seq,
    0,
    gen_sne,
    0,
    gen_sgt,
    0,
    gen_sgtu,
    0,
    gen_slt,
    0,
    gen_sltu,
    0,
    gen_sge,
    0,
    gen_sgeu,
    0,
    gen_sle,
    0,
    gen_sleu,
    0,
    gen_beq,
    0,
    gen_bne,
    0,
    gen_bgt,
    0,
    gen_bgtu,
    0,
    gen_blt,
    0,
    gen_bltu,
    0,
    gen_bge,
    0,
    gen_bgeu,
    0,
    gen_ble,
    0,
    gen_bleu,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    gen_jump,
    gen_indirect_jump,
    gen_decrement_and_branch_until_zero,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    gen_casesi,
    0,
    gen_tablejump,
    gen_call_pop,
    0,
    0,
    gen_call,
    0,
    0,
    gen_call_value_pop,
    0,
    0,
    gen_call_value,
    0,
    0,
    gen_untyped_call,
    gen_blockage,
    gen_return,
    gen_return_internal,
    gen_return_pop_internal,
    gen_nop,
    gen_prologue,
    gen_prologue_set_stack_ptr,
    gen_prologue_set_got,
    gen_prologue_get_pc,
    gen_prologue_get_pc_and_set_got,
    gen_epilogue,
    gen_epilogue_set_stack_ptr,
    gen_leave,
    gen_pop,
    gen_movstrsi,
    0,
    gen_clrstrsi,
    0,
    gen_cmpstrsi,
    0,
    0,
    gen_ffssi2,
    0,
    gen_ffshi2,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    gen_strlensi,
    0,
    gen_movsicc,
    gen_movhicc,
    gen_movsicc_1,
    gen_movhicc_1,
    gen_movsfcc,
    gen_movdfcc,
    gen_movxfcc,
    gen_movsfcc_1,
    gen_movdfcc_1,
    gen_strlensi_unroll,
    gen_strlensi_unroll4,
    gen_strlensi_unroll5,
    gen_allocate_stack_worker,
    gen_allocate_stack,
    gen_nonlocal_goto_receiver,
  };

char *insn_name[] =
  {
    "tstsi_1",
    "tstsi",
    "tsthi_1",
    "tsthi",
    "tstqi_1",
    "tstqi",
    "tstsf_cc",
    "tstsf",
    "tstdf_cc",
    "tstdf",
    "tstxf_cc",
    "tstxf",
    "cmpsi_1",
    "cmpsi",
    "cmphi_1",
    "cmphi",
    "cmpqi_1",
    "cmpqi",
    "cmpqi+1",
    "cmpqi+2",
    "cmpqi+3",
    "cmpqi+4",
    "cmpqi+5",
    "cmpqi+6",
    "cmpqi+7",
    "cmpsf_cc_1-7",
    "cmpsf_cc_1-6",
    "cmpsf_cc_1-5",
    "cmpsf_cc_1-4",
    "cmpsf_cc_1-3",
    "cmpsf_cc_1-2",
    "cmpsf_cc_1-1",
    "cmpsf_cc_1",
    "cmpsf_cc_1+1",
    "cmpsf_cc_1+2",
    "cmpxf-1",
    "cmpxf",
    "cmpdf",
    "cmpsf",
    "cmpxf_cc",
    "cmpxf_ccfpeq",
    "cmpdf_cc",
    "cmpdf_ccfpeq",
    "cmpsf_cc",
    "cmpsf_ccfpeq",
    "cmpsf_ccfpeq+1",
    "cmpsf_ccfpeq+2",
    "cmpsf_ccfpeq+3",
    "movsi-3",
    "movsi-2",
    "movsi-1",
    "movsi",
    "movsi+1",
    "movsi+2",
    "movhi-2",
    "movhi-1",
    "movhi",
    "movhi+1",
    "movstricthi",
    "movstricthi+1",
    "movstricthi+2",
    "movqi-2",
    "movqi-1",
    "movqi",
    "movqi+1",
    "movstrictqi",
    "movstrictqi+1",
    "movsf",
    "movsf_push_nomove",
    "movsf_push",
    "movsf_mem",
    "movsf_normal",
    "swapsf",
    "movdf",
    "movdf_push_nomove",
    "movdf_push",
    "movdf_mem",
    "movdf_mem+1",
    "swapdf",
    "movxf",
    "movxf_push_nomove",
    "movxf_push",
    "movxf_mem",
    "movxf_mem+1",
    "swapxf",
    "swapxf+1",
    "movdi",
    "zero_extendhisi2",
    "zero_extendhisi2+1",
    "zero_extendqihi2-1",
    "zero_extendqihi2",
    "zero_extendqihi2+1",
    "zero_extendqihi2+2",
    "zero_extendqisi2-1",
    "zero_extendqisi2",
    "zero_extendqisi2+1",
    "zero_extendqisi2+2",
    "zero_extendsidi2-1",
    "zero_extendsidi2",
    "extendsidi2",
    "extendhisi2",
    "extendqihi2",
    "extendqisi2",
    "truncdisi2",
    "truncdisi2+1",
    "extendsfdf2-1",
    "extendsfdf2",
    "extenddfxf2",
    "extendsfxf2",
    "truncdfsf2",
    "truncdfsf2+1",
    "truncxfsf2",
    "truncxfdf2",
    "fixuns_truncxfsi2",
    "fixuns_truncdfsi2",
    "fixuns_truncsfsi2",
    "fix_truncxfdi2",
    "fix_truncdfdi2",
    "fix_truncsfdi2",
    "fix_truncsfdi2+1",
    "fix_truncsfdi2+2",
    "fix_truncxfsi2-1",
    "fix_truncxfsi2",
    "fix_truncdfsi2",
    "fix_truncsfsi2",
    "fix_truncsfsi2+1",
    "fix_truncsfsi2+2",
    "floatsisf2-1",
    "floatsisf2",
    "floatdisf2",
    "floatsidf2",
    "floatdidf2",
    "floatsixf2",
    "floatdixf2",
    "floatdixf2+1",
    "floatdixf2+2",
    "floatdixf2+3",
    "addsidi3_1-3",
    "addsidi3_1-2",
    "addsidi3_1-1",
    "addsidi3_1",
    "addsidi3_2",
    "adddi3",
    "addsi3",
    "addsi3+1",
    "movsi_lea",
    "addhi3",
    "addhi3+1",
    "addqi3",
    "addqi3+1",
    "addxf3",
    "adddf3",
    "addsf3",
    "subsidi3",
    "subdi3",
    "subsi3",
    "subsi3+1",
    "subhi3",
    "subhi3+1",
    "subqi3",
    "subqi3+1",
    "subxf3",
    "subdf3",
    "subsf3",
    "mulhi3",
    "mulsi3",
    "umulqihi3",
    "mulqihi3",
    "umulsidi3",
    "mulsidi3",
    "umulsi3_highpart",
    "smulsi3_highpart",
    "mulxf3",
    "muldf3",
    "mulsf3",
    "divqi3",
    "udivqi3",
    "divxf3",
    "divdf3",
    "divsf3",
    "divmodsi4",
    "divmodhi4",
    "udivmodsi4",
    "udivmodhi4",
    "andsi3",
    "andhi3",
    "andqi3",
    "iorsi3",
    "iorhi3",
    "iorqi3",
    "xorsi3",
    "xorhi3",
    "xorqi3",
    "negdi2",
    "negsi2",
    "neghi2",
    "negqi2",
    "negsf2",
    "negdf2",
    "negdf2+1",
    "negxf2",
    "negxf2+1",
    "abssf2",
    "absdf2",
    "absdf2+1",
    "absxf2",
    "absxf2+1",
    "sqrtsf2",
    "sqrtdf2",
    "sqrtdf2+1",
    "sqrtxf2",
    "sqrtxf2+1",
    "sindf2-1",
    "sindf2",
    "sinsf2",
    "sinsf2+1",
    "sinxf2",
    "cosdf2",
    "cossf2",
    "cossf2+1",
    "cosxf2",
    "one_cmplsi2",
    "one_cmplhi2",
    "one_cmplqi2",
    "ashldi3",
    "ashldi3_const_int",
    "ashldi3_non_const_int",
    "ashlsi3",
    "ashlhi3",
    "ashlqi3",
    "ashrdi3",
    "ashldi3_32",
    "ashrdi3_const_int",
    "ashrdi3_non_const_int",
    "ashrsi3",
    "ashrhi3",
    "ashrqi3",
    "lshrdi3",
    "lshrdi3_32",
    "lshrdi3_const_int",
    "lshrdi3_non_const_int",
    "lshrsi3",
    "lshrhi3",
    "lshrqi3",
    "rotlsi3",
    "rotlhi3",
    "rotlqi3",
    "rotrsi3",
    "rotrhi3",
    "rotrqi3",
    "rotrqi3+1",
    "rotrqi3+2",
    "rotrqi3+3",
    "seq-3",
    "seq-2",
    "seq-1",
    "seq",
    "seq+1",
    "sne",
    "sne+1",
    "sgt",
    "sgt+1",
    "sgtu",
    "sgtu+1",
    "slt",
    "slt+1",
    "sltu",
    "sltu+1",
    "sge",
    "sge+1",
    "sgeu",
    "sgeu+1",
    "sle",
    "sle+1",
    "sleu",
    "sleu+1",
    "beq",
    "beq+1",
    "bne",
    "bne+1",
    "bgt",
    "bgt+1",
    "bgtu",
    "bgtu+1",
    "blt",
    "blt+1",
    "bltu",
    "bltu+1",
    "bge",
    "bge+1",
    "bgeu",
    "bgeu+1",
    "ble",
    "ble+1",
    "bleu",
    "bleu+1",
    "bleu+2",
    "bleu+3",
    "bleu+4",
    "bleu+5",
    "bleu+6",
    "jump-5",
    "jump-4",
    "jump-3",
    "jump-2",
    "jump-1",
    "jump",
    "indirect_jump",
    "decrement_and_branch_until_zero",
    "decrement_and_branch_until_zero+1",
    "decrement_and_branch_until_zero+2",
    "decrement_and_branch_until_zero+3",
    "decrement_and_branch_until_zero+4",
    "casesi-4",
    "casesi-3",
    "casesi-2",
    "casesi-1",
    "casesi",
    "casesi+1",
    "tablejump",
    "call_pop",
    "call_pop+1",
    "call-1",
    "call",
    "call+1",
    "call_value_pop-1",
    "call_value_pop",
    "call_value_pop+1",
    "call_value-1",
    "call_value",
    "call_value+1",
    "untyped_call-1",
    "untyped_call",
    "blockage",
    "return",
    "return_internal",
    "return_pop_internal",
    "nop",
    "prologue",
    "prologue_set_stack_ptr",
    "prologue_set_got",
    "prologue_get_pc",
    "prologue_get_pc_and_set_got",
    "epilogue",
    "epilogue_set_stack_ptr",
    "leave",
    "pop",
    "movstrsi",
    "movstrsi+1",
    "clrstrsi",
    "clrstrsi+1",
    "cmpstrsi",
    "cmpstrsi+1",
    "ffssi2-1",
    "ffssi2",
    "ffssi2+1",
    "ffshi2",
    "ffshi2+1",
    "ffshi2+2",
    "ffshi2+3",
    "ffshi2+4",
    "ffshi2+5",
    "ffshi2+6",
    "ffshi2+7",
    "strlensi-7",
    "strlensi-6",
    "strlensi-5",
    "strlensi-4",
    "strlensi-3",
    "strlensi-2",
    "strlensi-1",
    "strlensi",
    "strlensi+1",
    "movsicc",
    "movhicc",
    "movsicc_1",
    "movhicc_1",
    "movsfcc",
    "movdfcc",
    "movxfcc",
    "movsfcc_1",
    "movdfcc_1",
    "strlensi_unroll",
    "strlensi_unroll4",
    "strlensi_unroll5",
    "allocate_stack_worker",
    "allocate_stack",
    "nonlocal_goto_receiver",
  };
char **insn_name_ptr = insn_name;

const int insn_n_operands[] =
  {
    1,
    1,
    1,
    1,
    1,
    1,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    4,
    4,
    4,
    4,
    4,
    4,
    3,
    4,
    4,
    4,
    4,
    4,
    4,
    3,
    4,
    4,
    4,
    3,
    2,
    2,
    2,
    3,
    3,
    3,
    3,
    3,
    3,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    3,
    3,
    2,
    2,
    2,
    2,
    4,
    4,
    2,
    2,
    2,
    2,
    4,
    4,
    2,
    2,
    4,
    4,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    3,
    2,
    2,
    8,
    8,
    8,
    6,
    6,
    6,
    5,
    5,
    5,
    5,
    5,
    5,
    5,
    5,
    5,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    4,
    4,
    4,
    3,
    3,
    2,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    4,
    4,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    4,
    4,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    4,
    4,
    4,
    4,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    2,
    3,
    3,
    3,
    3,
    3,
    3,
    2,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    4,
    3,
    3,
    2,
    3,
    3,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    2,
    4,
    4,
    2,
    2,
    2,
    2,
    2,
    2,
    8,
    3,
    2,
    4,
    4,
    4,
    2,
    2,
    2,
    5,
    5,
    5,
    3,
    3,
    3,
    3,
    0,
    0,
    0,
    1,
    0,
    0,
    1,
    3,
    2,
    1,
    0,
    0,
    0,
    1,
    5,
    5,
    5,
    5,
    5,
    5,
    4,
    2,
    2,
    2,
    2,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    1,
    2,
    0,
  };

const int insn_n_dups[] =
  {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    2,
    0,
    0,
    0,
    0,
    0,
    2,
    0,
    0,
    0,
    0,
    0,
    2,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    7,
    7,
    7,
    5,
    5,
    5,
    1,
    1,
    1,
    2,
    2,
    2,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    2,
    2,
    2,
    2,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    2,
    3,
    3,
    2,
    2,
    2,
    2,
    2,
    2,
    5,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    2,
    2,
    3,
    1,
    3,
    3,
    3,
    2,
    0,
    2,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    5,
    1,
    1,
    1,
    0,
    0,
    1,
    1,
    1,
    0,
    0,
    0,
    1,
    1,
    2,
    1,
    0,
  };

char *const insn_operand_constraint[][MAX_RECOG_OPERANDS] =
  {
    { "rm", },
    { "", },
    { "rm", },
    { "", },
    { "qm", },
    { "", },
    { "f", "=a", },
    { "", "", },
    { "f", "=a", },
    { "", "", },
    { "f", "=a", },
    { "", "", },
    { "mr,r", "ri,mr", },
    { "", "", },
    { "mr,r", "ri,mr", },
    { "", "", },
    { "q,mq", "qm,nq", },
    { "", "", },
    { "f", "f", "", "=a", },
    { "f", "rm", "", "=a", },
    { "rm", "f", "", "=a", },
    { "f", "fm", "", "=a", },
    { "f", "fm", "", "=a", },
    { "f", "fm", "", "=a", },
    { "f", "f", "=a", },
    { "f,fm", "fm,f", "", "=a,a", },
    { "f", "rm", "", "=a", },
    { "rm", "f", "", "=a", },
    { "f", "fm", "", "=a", },
    { "fm", "f", "", "=a", },
    { "f", "fm", "", "=a", },
    { "f", "f", "=a", },
    { "f,fm", "fm,f", "", "=a,a", },
    { "f", "rm", "", "=a", },
    { "rm", "f", "", "=a", },
    { "f", "f", "=a", },
    { "", "", },
    { "", "", },
    { "", "", },
    { "", "", "", },
    { "", "", "", },
    { "", "", "", },
    { "", "", "", },
    { "", "", "", },
    { "", "", "", },
    { "%ro", "ri", },
    { "%ro", "ri", },
    { "%qm", "qi", },
    { "=<", "g", },
    { "=<", "ri", },
    { "=<", "ri", },
    { "", "", },
    { "=g,r", "ri,m", },
    { "=<", "g", },
    { "=<", "ri", },
    { "=<", "ri", },
    { "", "", },
    { "=g,r", "ri,m", },
    { "", "", },
    { "+g,r", "ri,m", },
    { "=<", "n", },
    { "=<", "q", },
    { "=<", "q", },
    { "", "", },
    { "=q,*r,qm", "*g,r,qn", },
    { "", "", },
    { "+qm,q", "*qn,m", },
    { "", "", },
    { "=<,<", "gF,f", },
    { "=<,<,<,<", "rF,f,m,m", "=X,X,r,X", },
    { "=m", "m", "=&r", },
    { "=*rfm,*rf,f,!*rm", "*rf,*rfm,fG,fF", },
    { "f", "f", },
    { "", "", },
    { "=<,<", "gF,f", },
    { "=<,<,<,<,<", "rF,f,o,o,o", "=X,X,&r,&r,X", "=X,X,&r,X,X", },
    { "=o,o", "o,o", "=&r,&r", "=&r,X", },
    { "=f,fm,!*rf,!*rm", "fmG,f,*rfm,*rfF", },
    { "f", "f", },
    { "", "", },
    { "=<,<", "gF,f", },
    { "=<,<,<,<,<", "rF,f,o,o,o", "=X,X,&r,&r,X", "=X,X,&r,X,X", },
    { "=o,o", "o,o", "=&r,&r", "=&r,X", },
    { "=f,fm,!*rf,!*rm", "fmG,f,*rfm,*rfF", },
    { "f", "f", },
    { "=<,<,<,<", "riF,o,o,o", "=X,&r,&r,X", "=X,&r,X,X", },
    { "=o,o,r,rm", "o,o,m,riF", "=&r,&r,X,X", "=&r,X,X,X", },
    { "=r,&r,?r", "0,rm,rm", },
    { "", "", },
    { "", "", },
    { "=q,&q,?r", "0,qm,qm", },
    { "", "", },
    { "", "", },
    { "", "", },
    { "=q,&q,?r", "0,qm,qm", },
    { "", "", },
    { "", "", },
    { "", "", },
    { "=r,?r,?m", "0,rm,r", },
    { "=r", "0", },
    { "=r", "rm", },
    { "=r", "qm", },
    { "=r", "qm", },
    { "=r,m", "ro,r", },
    { "=r,m", "ro,r", },
    { "=r,m", "ro,r", },
    { "=fm,f", "f,fm", },
    { "=fm,f,f,!*r", "f,fm,!*r,f", },
    { "=fm,f,f,!*r", "f,fm,!*r,f", },
    { "", "", },
    { "=f,m", "0,f", "m,m", },
    { "=m,!*r", "f,f", },
    { "=m,!*r", "f,f", },
    { "", "", "", "", "", "", "", "", },
    { "", "", "", "", "", "", "", "", },
    { "", "", "", "", "", "", "", "", },
    { "", "", "", "", "", "", },
    { "", "", "", "", "", "", },
    { "", "", "", "", "", "", },
    { "=rm", "f", "m", "m", "=&q", },
    { "=rm", "f", "m", "m", "=&q", },
    { "=rm", "f", "m", "m", "=&q", },
    { "", "", "", "", "", },
    { "", "", "", "", "", },
    { "", "", "", "", "", },
    { "=rm", "f", "m", "m", "=&q", },
    { "=rm", "f", "m", "m", "=&q", },
    { "=rm", "f", "m", "m", "=&q", },
    { "", "", },
    { "", "", },
    { "", "", },
    { "", "", },
    { "", "", },
    { "", "", },
    { "=f", "rm", },
    { "=f", "rm", },
    { "=f", "rm", },
    { "=f", "rm", },
    { "=f,f", "m,!*r", },
    { "=f", "rm", },
    { "=&r,r,o,!&r,!r,o,!o", "0,0,0,o,riF,riF,o", "o,ri,ri,roi,roi,ri,ri", "=X,X,X,X,X,X,&r", },
    { "=&r,r,o,&r,!&r,&r,o,o,!o", "0,0,0,iF,ro,roiF,riF,o,o", "o,ri,ri,o,o,ri,ri,i,r", "=X,X,X,X,X,X,X,&r,&r", },
    { "=&r,&ro,o,!&r,!o,!o", "%0,0,0iF,or,riF,o", "o,riF,or,or,oriF,o", "=X,X,&r,X,&r,&r", },
    { "", "", "", },
    { "=r,rm,r", "%0,0,r", "rmi,ri,ri", },
    { "=r", "p", },
    { "", "", "", },
    { "=rm,r", "%0,0", "ri,rm", },
    { "", "", "", },
    { "=qm,q", "%0,0", "qn,qmn", },
    { "", "", "", },
    { "", "", "", },
    { "", "", "", },
    { "=&r,&ro,&r,!&r,o,o,!o", "0iF,0,roiF,roiF,riF,o,o", "o,ri,ri,o,ri,i,r", "=X,X,X,X,X,&r,&r", },
    { "=&r,&ro,o,o,!&r,!o", "0,0,0iF,or,roiF,roiF", "or,riF,or,iF,roiF,roiF", "=X,X,&r,&r,X,&r", },
    { "", "", "", },
    { "=rm,r", "0,0", "ri,rm", },
    { "", "", "", },
    { "=rm,r", "0,0", "ri,rm", },
    { "", "", "", },
    { "=qm,q", "0,0", "qn,qmn", },
    { "", "", "", },
    { "", "", "", },
    { "", "", "", },
    { "=r,r", "%0,rm", "g,i", },
    { "=r,r", "%0,rm", "g,i", },
    { "=a", "%0", "qm", },
    { "=a", "%0", "qm", },
    { "=A", "%0", "rm", },
    { "=A", "%0", "rm", },
    { "=d", "%a", "rm", "=a", },
    { "=d", "%a", "rm", "=a", },
    { "", "", "", },
    { "", "", "", },
    { "", "", "", },
    { "=a", "0", "qm", },
    { "=a", "0", "qm", },
    { "", "", "", },
    { "", "", "", },
    { "", "", "", },
    { "=a", "0", "rm", "=&d", },
    { "=a", "0", "rm", "=&d", },
    { "=a", "0", "rm", "=&d", },
    { "=a", "0", "rm", "=&d", },
    { "=rm,r", "%0,0", "ri,rm", },
    { "=rm,r", "%0,0", "ri,rm", },
    { "=qm,q", "%0,0", "qn,qmn", },
    { "=rm,r", "%0,0", "ri,rm", },
    { "=rm,r", "%0,0", "ri,rm", },
    { "=qm,q", "%0,0", "qn,qmn", },
    { "=rm,r", "%0,0", "ri,rm", },
    { "=rm,r", "%0,0", "ri,rm", },
    { "=qm,q", "%0,0", "qn,qm", },
    { "=&ro", "0", },
    { "=rm", "0", },
    { "=rm", "0", },
    { "=qm", "0", },
    { "=f", "0", },
    { "=f", "0", },
    { "=f", "0", },
    { "=f", "0", },
    { "=f", "0", },
    { "=f", "0", },
    { "=f", "0", },
    { "=f", "0", },
    { "=f", "0", },
    { "=f", "0", },
    { "=f", "0", },
    { "=f", "0", },
    { "=f", "0", },
    { "=f", "0", },
    { "=f", "0", },
    { "=f", "0", },
    { "=f", "0", },
    { "=f", "0", },
    { "=f", "0", },
    { "=f", "0", },
    { "=f", "0", },
    { "=f", "0", },
    { "=f", "0", },
    { "=f", "0", },
    { "=rm", "0", },
    { "=rm", "0", },
    { "=qm", "0", },
    { "", "", "", },
    { "=&r", "0", "J", },
    { "=&r", "0", "c", },
    { "=r,rm", "r,0", "M,cI", },
    { "=rm", "0", "cI", },
    { "=qm", "0", "cI", },
    { "", "", "", },
    { "=r,m", "ro,r", },
    { "=&r", "0", "J", },
    { "=&r", "0", "c", },
    { "=rm", "0", "cI", },
    { "=rm", "0", "cI", },
    { "=qm", "0", "cI", },
    { "", "", "", },
    { "=r,m", "ro,r", },
    { "=&r", "0", "J", },
    { "=&r", "0", "c", },
    { "=rm", "0", "cI", },
    { "=rm", "0", "cI", },
    { "=qm", "0", "cI", },
    { "=rm", "0", "cI", },
    { "=rm", "0", "cI", },
    { "=qm", "0", "cI", },
    { "=rm", "0", "cI", },
    { "=rm", "0", "cI", },
    { "=qm", "0", "cI", },
    { "+rm", "", "r", "n", },
    { "=rm", "r", "0", },
    { "=rm", "0", "r", },
    { "r", "r", },
    { "r", "n", "n", },
    { "m", "n", "n", },
    { "", },
    { "=q", },
    { "", },
    { "=q", },
    { "", },
    { "=q", },
    { "", },
    { "=q", },
    { "", },
    { "=q", },
    { "", },
    { "=q", },
    { "", },
    { "=q", },
    { "", },
    { "=q", },
    { "", },
    { "=q", },
    { "", },
    { "=q", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "rm", },
    { "", "", },
    { "", "+r,m", "rmi,ri", "", },
    { "", "+r,m", "rmi,ri", "", },
    { "+g", "", },
    { "+g", "", },
    { "+g", "", },
    { "+g", "", },
    { "+g", "", },
    { "+g", "", },
    { "", "", "", "", "", "", "", "", },
    { "r", "", "=&r", },
    { "rm", "", },
    { "", "", "", "", },
    { "m", "g", "", "i", },
    { "", "g", "", "i", },
    { "", "", },
    { "m", "g", },
    { "", "g", },
    { "", "", "", "", "", },
    { "=rf", "m", "g", "", "i", },
    { "=rf", "", "g", "", "i", },
    { "", "", "", },
    { "=rf", "m", "g", },
    { "=rf", "", "g", },
    { "", "", "", },
    { 0 },
    { 0 },
    { 0 },
    { "", },
    { 0 },
    { 0 },
    { "i", },
    { "", "", "", },
    { "", "", },
    { "", },
    { 0 },
    { 0 },
    { 0 },
    { "r", },
    { "", "", "", "", "", },
    { "D", "S", "n", "i", "=&c", },
    { "", "", "", "", "", },
    { "D", "n", "i", "a", "=&c", },
    { "", "", "", "", "", },
    { "=&r", "S", "D", "c", "i", },
    { "S", "D", "c", "i", },
    { "", "", },
    { "=&r", "rm", },
    { "", "", },
    { "=&r", "rm", },
    { "=f,f", "0,fm", "fm,0", "", },
    { "=f", "rm", "0", "", },
    { "=f,f", "0,f", "f,0", "", },
    { "=f", "rm", "0", "", },
    { "=f,f", "fm,0", "0,f", "", },
    { "=f", "0", "rm", "", },
    { "=f,f", "0,f", "fm,0", "", },
    { "=f,f", "fm,0", "0,f", "", },
    { "=f", "0", "rm", "", },
    { "=f,f", "0,f", "fm,0", "", },
    { "=f,f", "0,fm", "fm,0", "", },
    { "=f", "rm", "0", "", },
    { "=f", "0", "rm", "", },
    { "", "", "", "", },
    { "=&c", "D", "a", "i", },
    { "", "", "", "", },
    { "", "", "", "", },
    { "=r,r,&r", "", "rm,0,rm", "0,rm,rm", },
    { "=r,r,&r", "", "rm,0,rm", "0,rm,rm", },
    { "", "", "", "", },
    { "t", "", "", "", },
    { "", "", "", "", },
    { "=f,f,&f", "", "0,f,f", "f,0,f", },
    { "=f,f,&f", "", "0,f,f", "f,0,f", },
    { "=&r,&r", "r,r", "i,i", "=&q,&r", },
    { "=r,r", "i,i", "+q,!r", "0,0", },
    { "=r", "i", "+q", "0", },
    { "a", },
    { "=r", "", },
    { 0 },
  };

const enum machine_mode insn_operand_mode[][MAX_RECOG_OPERANDS] =
  {
    { SImode, },
    { SImode, },
    { HImode, },
    { HImode, },
    { QImode, },
    { QImode, },
    { SFmode, HImode, },
    { SFmode, HImode, },
    { DFmode, HImode, },
    { DFmode, HImode, },
    { XFmode, HImode, },
    { XFmode, HImode, },
    { SImode, SImode, },
    { SImode, SImode, },
    { HImode, HImode, },
    { HImode, HImode, },
    { QImode, QImode, },
    { QImode, QImode, },
    { XFmode, XFmode, VOIDmode, HImode, },
    { XFmode, SImode, VOIDmode, HImode, },
    { SImode, XFmode, VOIDmode, HImode, },
    { XFmode, DFmode, VOIDmode, HImode, },
    { XFmode, DFmode, VOIDmode, HImode, },
    { XFmode, SFmode, VOIDmode, HImode, },
    { XFmode, XFmode, HImode, },
    { DFmode, DFmode, VOIDmode, HImode, },
    { DFmode, SImode, VOIDmode, HImode, },
    { SImode, DFmode, VOIDmode, HImode, },
    { DFmode, SFmode, VOIDmode, HImode, },
    { SFmode, DFmode, VOIDmode, HImode, },
    { SFmode, DFmode, VOIDmode, HImode, },
    { DFmode, DFmode, HImode, },
    { SFmode, SFmode, VOIDmode, HImode, },
    { SFmode, SImode, VOIDmode, HImode, },
    { SImode, SFmode, VOIDmode, HImode, },
    { SFmode, SFmode, HImode, },
    { XFmode, XFmode, },
    { DFmode, DFmode, },
    { SFmode, SFmode, },
    { XFmode, XFmode, HImode, },
    { XFmode, XFmode, HImode, },
    { DFmode, DFmode, HImode, },
    { DFmode, DFmode, HImode, },
    { SFmode, SFmode, HImode, },
    { SFmode, SFmode, HImode, },
    { SImode, SImode, },
    { HImode, HImode, },
    { QImode, QImode, },
    { SImode, SImode, },
    { SImode, SImode, },
    { SImode, SImode, },
    { SImode, SImode, },
    { SImode, SImode, },
    { HImode, HImode, },
    { HImode, HImode, },
    { HImode, HImode, },
    { HImode, HImode, },
    { HImode, HImode, },
    { HImode, HImode, },
    { HImode, HImode, },
    { QImode, QImode, },
    { QImode, QImode, },
    { QImode, QImode, },
    { QImode, QImode, },
    { QImode, QImode, },
    { QImode, QImode, },
    { QImode, QImode, },
    { SFmode, SFmode, },
    { SFmode, SFmode, },
    { SFmode, SFmode, SImode, },
    { SFmode, SFmode, SImode, },
    { SFmode, SFmode, },
    { SFmode, SFmode, },
    { DFmode, DFmode, },
    { DFmode, DFmode, },
    { DFmode, DFmode, SImode, SImode, },
    { DFmode, DFmode, SImode, SImode, },
    { DFmode, DFmode, },
    { DFmode, DFmode, },
    { XFmode, XFmode, },
    { XFmode, XFmode, },
    { XFmode, XFmode, SImode, SImode, },
    { XFmode, XFmode, SImode, SImode, },
    { XFmode, XFmode, },
    { XFmode, XFmode, },
    { DImode, DImode, SImode, SImode, },
    { DImode, DImode, SImode, SImode, },
    { SImode, HImode, },
    { VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, },
    { HImode, QImode, },
    { VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, },
    { SImode, QImode, },
    { VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, },
    { DImode, SImode, },
    { DImode, SImode, },
    { SImode, HImode, },
    { HImode, QImode, },
    { SImode, QImode, },
    { SImode, DImode, },
    { SImode, DImode, },
    { SImode, DImode, },
    { DFmode, SFmode, },
    { XFmode, DFmode, },
    { XFmode, SFmode, },
    { SFmode, DFmode, },
    { SFmode, DFmode, SFmode, },
    { SFmode, XFmode, },
    { DFmode, XFmode, },
    { SImode, XFmode, VOIDmode, VOIDmode, VOIDmode, VOIDmode, VOIDmode, SImode, },
    { SImode, DFmode, VOIDmode, VOIDmode, VOIDmode, VOIDmode, VOIDmode, SImode, },
    { SImode, SFmode, VOIDmode, VOIDmode, VOIDmode, VOIDmode, VOIDmode, SImode, },
    { DImode, XFmode, VOIDmode, VOIDmode, VOIDmode, SImode, },
    { DImode, DFmode, VOIDmode, VOIDmode, VOIDmode, SImode, },
    { DImode, SFmode, VOIDmode, VOIDmode, VOIDmode, SImode, },
    { DImode, XFmode, SImode, DImode, SImode, },
    { DImode, DFmode, SImode, DImode, SImode, },
    { DImode, SFmode, SImode, DImode, SImode, },
    { SImode, XFmode, VOIDmode, VOIDmode, SImode, },
    { SImode, DFmode, VOIDmode, VOIDmode, SImode, },
    { SImode, SFmode, VOIDmode, VOIDmode, SImode, },
    { SImode, XFmode, SImode, DImode, SImode, },
    { SImode, DFmode, SImode, DImode, SImode, },
    { SImode, SFmode, SImode, DImode, SImode, },
    { SFmode, SImode, },
    { SFmode, DImode, },
    { DFmode, SImode, },
    { DFmode, DImode, },
    { XFmode, SImode, },
    { XFmode, DImode, },
    { XFmode, DImode, },
    { DFmode, DImode, },
    { SFmode, DImode, },
    { DFmode, SImode, },
    { XFmode, SImode, },
    { SFmode, SImode, },
    { DImode, DImode, SImode, SImode, },
    { DImode, DImode, SImode, SImode, },
    { DImode, DImode, DImode, SImode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, SImode, },
    { SImode, QImode, },
    { HImode, HImode, HImode, },
    { HImode, HImode, HImode, },
    { QImode, QImode, QImode, },
    { QImode, QImode, QImode, },
    { XFmode, XFmode, XFmode, },
    { DFmode, DFmode, DFmode, },
    { SFmode, SFmode, SFmode, },
    { DImode, DImode, SImode, SImode, },
    { DImode, DImode, DImode, SImode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, SImode, },
    { HImode, HImode, HImode, },
    { HImode, HImode, HImode, },
    { QImode, QImode, QImode, },
    { QImode, QImode, QImode, },
    { XFmode, XFmode, XFmode, },
    { DFmode, DFmode, DFmode, },
    { SFmode, SFmode, SFmode, },
    { HImode, HImode, HImode, },
    { SImode, SImode, SImode, },
    { HImode, QImode, QImode, },
    { HImode, QImode, QImode, },
    { DImode, SImode, SImode, },
    { DImode, SImode, SImode, },
    { SImode, SImode, SImode, SImode, },
    { SImode, SImode, SImode, SImode, },
    { XFmode, XFmode, XFmode, },
    { DFmode, DFmode, DFmode, },
    { SFmode, SFmode, SFmode, },
    { QImode, HImode, QImode, },
    { QImode, HImode, QImode, },
    { XFmode, XFmode, XFmode, },
    { DFmode, DFmode, DFmode, },
    { SFmode, SFmode, SFmode, },
    { SImode, SImode, SImode, SImode, },
    { HImode, HImode, HImode, HImode, },
    { SImode, SImode, SImode, SImode, },
    { HImode, HImode, HImode, HImode, },
    { SImode, SImode, SImode, },
    { HImode, HImode, HImode, },
    { QImode, QImode, QImode, },
    { SImode, SImode, SImode, },
    { HImode, HImode, HImode, },
    { QImode, QImode, QImode, },
    { SImode, SImode, SImode, },
    { HImode, HImode, HImode, },
    { QImode, QImode, QImode, },
    { DImode, DImode, },
    { SImode, SImode, },
    { HImode, HImode, },
    { QImode, QImode, },
    { SFmode, SFmode, },
    { DFmode, DFmode, },
    { DFmode, SFmode, },
    { XFmode, XFmode, },
    { XFmode, DFmode, },
    { SFmode, SFmode, },
    { DFmode, DFmode, },
    { DFmode, SFmode, },
    { XFmode, XFmode, },
    { XFmode, DFmode, },
    { SFmode, SFmode, },
    { DFmode, DFmode, },
    { DFmode, SFmode, },
    { XFmode, XFmode, },
    { XFmode, DFmode, },
    { XFmode, SFmode, },
    { DFmode, DFmode, },
    { SFmode, SFmode, },
    { DFmode, SFmode, },
    { XFmode, XFmode, },
    { DFmode, DFmode, },
    { SFmode, SFmode, },
    { DFmode, SFmode, },
    { XFmode, XFmode, },
    { SImode, SImode, },
    { HImode, HImode, },
    { QImode, QImode, },
    { DImode, DImode, QImode, },
    { DImode, DImode, QImode, },
    { DImode, DImode, QImode, },
    { SImode, SImode, SImode, },
    { HImode, HImode, HImode, },
    { QImode, QImode, QImode, },
    { DImode, DImode, QImode, },
    { DImode, DImode, },
    { DImode, DImode, QImode, },
    { DImode, DImode, QImode, },
    { SImode, SImode, SImode, },
    { HImode, HImode, HImode, },
    { QImode, QImode, QImode, },
    { DImode, DImode, QImode, },
    { DImode, DImode, },
    { DImode, DImode, QImode, },
    { DImode, DImode, QImode, },
    { SImode, SImode, SImode, },
    { HImode, HImode, HImode, },
    { QImode, QImode, QImode, },
    { SImode, SImode, SImode, },
    { HImode, HImode, HImode, },
    { QImode, QImode, QImode, },
    { SImode, SImode, SImode, },
    { HImode, HImode, HImode, },
    { QImode, QImode, QImode, },
    { SImode, VOIDmode, SImode, SImode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, },
    { SImode, SImode, SImode, },
    { QImode, SImode, SImode, },
    { QImode, },
    { QImode, },
    { QImode, },
    { QImode, },
    { QImode, },
    { QImode, },
    { QImode, },
    { QImode, },
    { QImode, },
    { QImode, },
    { QImode, },
    { QImode, },
    { QImode, },
    { QImode, },
    { QImode, },
    { QImode, },
    { QImode, },
    { QImode, },
    { QImode, },
    { QImode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { SImode, },
    { SImode, VOIDmode, },
    { VOIDmode, SImode, SImode, VOIDmode, },
    { VOIDmode, SImode, SImode, VOIDmode, },
    { SImode, VOIDmode, },
    { SImode, VOIDmode, },
    { SImode, VOIDmode, },
    { SImode, VOIDmode, },
    { SImode, VOIDmode, },
    { SImode, VOIDmode, },
    { SImode, SImode, SImode, VOIDmode, VOIDmode, VOIDmode, VOIDmode, SImode, },
    { SImode, VOIDmode, SImode, },
    { SImode, VOIDmode, },
    { QImode, SImode, VOIDmode, SImode, },
    { QImode, SImode, VOIDmode, SImode, },
    { SImode, SImode, VOIDmode, SImode, },
    { QImode, SImode, },
    { QImode, SImode, },
    { SImode, SImode, },
    { VOIDmode, QImode, SImode, VOIDmode, SImode, },
    { VOIDmode, QImode, SImode, VOIDmode, SImode, },
    { VOIDmode, SImode, SImode, VOIDmode, SImode, },
    { VOIDmode, QImode, SImode, },
    { VOIDmode, QImode, SImode, },
    { VOIDmode, SImode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { VOIDmode },
    { VOIDmode },
    { VOIDmode },
    { SImode, },
    { VOIDmode },
    { VOIDmode },
    { SImode, },
    { SImode, SImode, VOIDmode, },
    { SImode, VOIDmode, },
    { SImode, },
    { VOIDmode },
    { VOIDmode },
    { VOIDmode },
    { SImode, },
    { BLKmode, BLKmode, SImode, SImode, SImode, },
    { SImode, SImode, SImode, SImode, SImode, },
    { BLKmode, SImode, SImode, VOIDmode, SImode, },
    { SImode, SImode, SImode, SImode, SImode, },
    { SImode, BLKmode, BLKmode, SImode, SImode, },
    { SImode, SImode, SImode, SImode, SImode, },
    { SImode, SImode, SImode, SImode, },
    { SImode, SImode, },
    { SImode, SImode, },
    { HImode, HImode, },
    { HImode, SImode, },
    { DFmode, DFmode, DFmode, DFmode, },
    { DFmode, SImode, DFmode, DFmode, },
    { XFmode, XFmode, XFmode, XFmode, },
    { XFmode, SImode, XFmode, XFmode, },
    { XFmode, SFmode, XFmode, XFmode, },
    { XFmode, XFmode, SImode, XFmode, },
    { XFmode, XFmode, SFmode, XFmode, },
    { DFmode, SFmode, DFmode, DFmode, },
    { DFmode, DFmode, SImode, DFmode, },
    { DFmode, DFmode, SFmode, DFmode, },
    { SFmode, SFmode, SFmode, SFmode, },
    { SFmode, SImode, SFmode, SFmode, },
    { SFmode, SFmode, SImode, SFmode, },
    { SImode, BLKmode, QImode, SImode, },
    { SImode, SImode, QImode, SImode, },
    { VOIDmode, VOIDmode, SImode, SImode, },
    { VOIDmode, VOIDmode, HImode, HImode, },
    { SImode, VOIDmode, SImode, SImode, },
    { HImode, VOIDmode, HImode, HImode, },
    { VOIDmode, VOIDmode, SFmode, SFmode, },
    { VOIDmode, VOIDmode, DFmode, DFmode, },
    { VOIDmode, VOIDmode, XFmode, XFmode, },
    { SFmode, VOIDmode, SFmode, SFmode, },
    { DFmode, VOIDmode, DFmode, DFmode, },
    { SImode, SImode, SImode, SImode, },
    { SImode, SImode, SImode, SImode, },
    { SImode, SImode, SImode, SImode, },
    { SImode, },
    { SImode, SImode, },
    { VOIDmode },
  };

const char insn_operand_strict_low[][MAX_RECOG_OPERANDS] =
  {
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 1, 0, },
    { 1, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 1, 0, },
    { 1, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, 0, 0, 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0 },
    { 0 },
    { 0 },
    { 0, },
    { 0 },
    { 0 },
    { 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, },
    { 0 },
    { 0 },
    { 0 },
    { 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, },
    { 0, 0, },
    { 0 },
  };

extern int nonimmediate_operand ();
extern int register_operand ();
extern int scratch_operand ();
extern int general_operand ();
extern int VOIDmode_compare_op ();
extern int nonmemory_operand ();
extern int push_operand ();
extern int const_int_operand ();
extern int memory_operand ();
extern int address_operand ();
extern int arithmetic_comparison_operator ();
extern int indirect_operand ();
extern int immediate_operand ();
extern int call_insn_operand ();
extern int symbolic_operand ();
extern int binary_387_op ();
extern int comparison_operator ();

int (*const insn_operand_predicate[][MAX_RECOG_OPERANDS])() =
  {
    { nonimmediate_operand, },
    { nonimmediate_operand, },
    { nonimmediate_operand, },
    { nonimmediate_operand, },
    { nonimmediate_operand, },
    { nonimmediate_operand, },
    { register_operand, scratch_operand, },
    { register_operand, scratch_operand, },
    { register_operand, scratch_operand, },
    { register_operand, scratch_operand, },
    { register_operand, scratch_operand, },
    { register_operand, scratch_operand, },
    { nonimmediate_operand, general_operand, },
    { nonimmediate_operand, general_operand, },
    { nonimmediate_operand, general_operand, },
    { nonimmediate_operand, general_operand, },
    { nonimmediate_operand, general_operand, },
    { nonimmediate_operand, general_operand, },
    { register_operand, register_operand, VOIDmode_compare_op, scratch_operand, },
    { register_operand, nonimmediate_operand, VOIDmode_compare_op, scratch_operand, },
    { nonimmediate_operand, register_operand, VOIDmode_compare_op, scratch_operand, },
    { register_operand, nonimmediate_operand, VOIDmode_compare_op, scratch_operand, },
    { register_operand, nonimmediate_operand, VOIDmode_compare_op, scratch_operand, },
    { register_operand, nonimmediate_operand, VOIDmode_compare_op, scratch_operand, },
    { register_operand, register_operand, scratch_operand, },
    { nonimmediate_operand, nonimmediate_operand, VOIDmode_compare_op, scratch_operand, },
    { register_operand, nonimmediate_operand, VOIDmode_compare_op, scratch_operand, },
    { nonimmediate_operand, register_operand, VOIDmode_compare_op, scratch_operand, },
    { register_operand, nonimmediate_operand, VOIDmode_compare_op, scratch_operand, },
    { nonimmediate_operand, register_operand, VOIDmode_compare_op, scratch_operand, },
    { register_operand, nonimmediate_operand, VOIDmode_compare_op, scratch_operand, },
    { register_operand, register_operand, scratch_operand, },
    { nonimmediate_operand, nonimmediate_operand, VOIDmode_compare_op, scratch_operand, },
    { register_operand, nonimmediate_operand, VOIDmode_compare_op, scratch_operand, },
    { nonimmediate_operand, register_operand, VOIDmode_compare_op, scratch_operand, },
    { register_operand, register_operand, scratch_operand, },
    { register_operand, register_operand, },
    { register_operand, general_operand, },
    { register_operand, general_operand, },
    { register_operand, register_operand, scratch_operand, },
    { register_operand, register_operand, scratch_operand, },
    { register_operand, register_operand, scratch_operand, },
    { register_operand, register_operand, scratch_operand, },
    { register_operand, register_operand, scratch_operand, },
    { register_operand, register_operand, scratch_operand, },
    { general_operand, nonmemory_operand, },
    { general_operand, nonmemory_operand, },
    { nonimmediate_operand, nonmemory_operand, },
    { push_operand, general_operand, },
    { push_operand, nonmemory_operand, },
    { push_operand, nonmemory_operand, },
    { general_operand, general_operand, },
    { general_operand, general_operand, },
    { push_operand, general_operand, },
    { push_operand, nonmemory_operand, },
    { push_operand, nonmemory_operand, },
    { general_operand, general_operand, },
    { general_operand, general_operand, },
    { general_operand, general_operand, },
    { general_operand, general_operand, },
    { push_operand, const_int_operand, },
    { push_operand, register_operand, },
    { push_operand, register_operand, },
    { general_operand, general_operand, },
    { nonimmediate_operand, general_operand, },
    { general_operand, general_operand, },
    { nonimmediate_operand, general_operand, },
    { general_operand, general_operand, },
    { push_operand, general_operand, },
    { push_operand, general_operand, scratch_operand, },
    { memory_operand, memory_operand, scratch_operand, },
    { nonimmediate_operand, general_operand, },
    { register_operand, register_operand, },
    { general_operand, general_operand, },
    { push_operand, general_operand, },
    { push_operand, general_operand, scratch_operand, scratch_operand, },
    { memory_operand, memory_operand, scratch_operand, scratch_operand, },
    { nonimmediate_operand, general_operand, },
    { register_operand, register_operand, },
    { general_operand, general_operand, },
    { push_operand, general_operand, },
    { push_operand, general_operand, scratch_operand, scratch_operand, },
    { memory_operand, memory_operand, scratch_operand, scratch_operand, },
    { nonimmediate_operand, general_operand, },
    { register_operand, register_operand, },
    { push_operand, general_operand, scratch_operand, scratch_operand, },
    { general_operand, general_operand, scratch_operand, scratch_operand, },
    { register_operand, nonimmediate_operand, },
    { 0, 0, },
    { 0, 0, },
    { register_operand, nonimmediate_operand, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { register_operand, nonimmediate_operand, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { nonimmediate_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, nonimmediate_operand, },
    { nonimmediate_operand, nonimmediate_operand, },
    { nonimmediate_operand, nonimmediate_operand, },
    { nonimmediate_operand, nonimmediate_operand, },
    { nonimmediate_operand, nonimmediate_operand, },
    { nonimmediate_operand, nonimmediate_operand, },
    { nonimmediate_operand, nonimmediate_operand, },
    { nonimmediate_operand, register_operand, },
    { nonimmediate_operand, register_operand, memory_operand, },
    { nonimmediate_operand, register_operand, },
    { nonimmediate_operand, register_operand, },
    { general_operand, register_operand, 0, 0, 0, 0, 0, scratch_operand, },
    { general_operand, register_operand, 0, 0, 0, 0, 0, scratch_operand, },
    { general_operand, register_operand, 0, 0, 0, 0, 0, scratch_operand, },
    { general_operand, register_operand, 0, 0, 0, scratch_operand, },
    { general_operand, register_operand, 0, 0, 0, scratch_operand, },
    { general_operand, register_operand, 0, 0, 0, scratch_operand, },
    { nonimmediate_operand, register_operand, memory_operand, memory_operand, scratch_operand, },
    { nonimmediate_operand, register_operand, memory_operand, memory_operand, scratch_operand, },
    { nonimmediate_operand, register_operand, memory_operand, memory_operand, scratch_operand, },
    { general_operand, register_operand, 0, 0, scratch_operand, },
    { general_operand, register_operand, 0, 0, scratch_operand, },
    { general_operand, register_operand, 0, 0, scratch_operand, },
    { nonimmediate_operand, register_operand, memory_operand, memory_operand, scratch_operand, },
    { nonimmediate_operand, register_operand, memory_operand, memory_operand, scratch_operand, },
    { nonimmediate_operand, register_operand, memory_operand, memory_operand, scratch_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, nonimmediate_operand, },
    { nonimmediate_operand, general_operand, general_operand, scratch_operand, },
    { nonimmediate_operand, general_operand, general_operand, scratch_operand, },
    { general_operand, general_operand, general_operand, scratch_operand, },
    { nonimmediate_operand, nonimmediate_operand, general_operand, },
    { nonimmediate_operand, nonimmediate_operand, general_operand, },
    { register_operand, address_operand, },
    { general_operand, nonimmediate_operand, general_operand, },
    { nonimmediate_operand, nonimmediate_operand, general_operand, },
    { general_operand, general_operand, general_operand, },
    { nonimmediate_operand, nonimmediate_operand, general_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, nonimmediate_operand, nonimmediate_operand, },
    { register_operand, nonimmediate_operand, nonimmediate_operand, },
    { general_operand, general_operand, general_operand, scratch_operand, },
    { general_operand, general_operand, general_operand, scratch_operand, },
    { nonimmediate_operand, nonimmediate_operand, general_operand, },
    { nonimmediate_operand, nonimmediate_operand, general_operand, },
    { general_operand, nonimmediate_operand, general_operand, },
    { nonimmediate_operand, nonimmediate_operand, general_operand, },
    { general_operand, general_operand, general_operand, },
    { nonimmediate_operand, nonimmediate_operand, general_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, nonimmediate_operand, nonimmediate_operand, },
    { register_operand, nonimmediate_operand, nonimmediate_operand, },
    { register_operand, nonimmediate_operand, general_operand, },
    { register_operand, nonimmediate_operand, general_operand, },
    { register_operand, register_operand, nonimmediate_operand, },
    { register_operand, register_operand, nonimmediate_operand, },
    { register_operand, register_operand, nonimmediate_operand, },
    { register_operand, register_operand, nonimmediate_operand, },
    { register_operand, register_operand, nonimmediate_operand, scratch_operand, },
    { register_operand, register_operand, nonimmediate_operand, scratch_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, register_operand, nonimmediate_operand, },
    { register_operand, register_operand, nonimmediate_operand, },
    { register_operand, register_operand, nonimmediate_operand, },
    { register_operand, register_operand, nonimmediate_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, register_operand, nonimmediate_operand, },
    { register_operand, register_operand, nonimmediate_operand, },
    { register_operand, register_operand, nonimmediate_operand, register_operand, },
    { register_operand, register_operand, nonimmediate_operand, register_operand, },
    { register_operand, register_operand, nonimmediate_operand, register_operand, },
    { register_operand, register_operand, nonimmediate_operand, register_operand, },
    { nonimmediate_operand, nonimmediate_operand, general_operand, },
    { nonimmediate_operand, nonimmediate_operand, general_operand, },
    { nonimmediate_operand, nonimmediate_operand, general_operand, },
    { nonimmediate_operand, nonimmediate_operand, general_operand, },
    { nonimmediate_operand, nonimmediate_operand, general_operand, },
    { nonimmediate_operand, nonimmediate_operand, general_operand, },
    { nonimmediate_operand, nonimmediate_operand, general_operand, },
    { nonimmediate_operand, nonimmediate_operand, general_operand, },
    { nonimmediate_operand, nonimmediate_operand, general_operand, },
    { general_operand, general_operand, },
    { nonimmediate_operand, nonimmediate_operand, },
    { nonimmediate_operand, nonimmediate_operand, },
    { nonimmediate_operand, nonimmediate_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, register_operand, },
    { nonimmediate_operand, nonimmediate_operand, },
    { nonimmediate_operand, nonimmediate_operand, },
    { nonimmediate_operand, nonimmediate_operand, },
    { register_operand, register_operand, nonmemory_operand, },
    { register_operand, register_operand, const_int_operand, },
    { register_operand, register_operand, register_operand, },
    { nonimmediate_operand, nonimmediate_operand, nonmemory_operand, },
    { nonimmediate_operand, nonimmediate_operand, nonmemory_operand, },
    { nonimmediate_operand, nonimmediate_operand, nonmemory_operand, },
    { register_operand, register_operand, nonmemory_operand, },
    { nonimmediate_operand, nonimmediate_operand, },
    { register_operand, register_operand, const_int_operand, },
    { register_operand, register_operand, register_operand, },
    { nonimmediate_operand, nonimmediate_operand, nonmemory_operand, },
    { nonimmediate_operand, nonimmediate_operand, nonmemory_operand, },
    { nonimmediate_operand, nonimmediate_operand, nonmemory_operand, },
    { register_operand, register_operand, nonmemory_operand, },
    { nonimmediate_operand, nonimmediate_operand, },
    { register_operand, register_operand, const_int_operand, },
    { register_operand, register_operand, register_operand, },
    { nonimmediate_operand, nonimmediate_operand, nonmemory_operand, },
    { nonimmediate_operand, nonimmediate_operand, nonmemory_operand, },
    { nonimmediate_operand, nonimmediate_operand, nonmemory_operand, },
    { nonimmediate_operand, nonimmediate_operand, nonmemory_operand, },
    { nonimmediate_operand, nonimmediate_operand, nonmemory_operand, },
    { nonimmediate_operand, nonimmediate_operand, nonmemory_operand, },
    { nonimmediate_operand, nonimmediate_operand, nonmemory_operand, },
    { nonimmediate_operand, nonimmediate_operand, nonmemory_operand, },
    { nonimmediate_operand, nonimmediate_operand, nonmemory_operand, },
    { register_operand, 0, register_operand, const_int_operand, },
    { nonimmediate_operand, register_operand, nonimmediate_operand, },
    { nonimmediate_operand, nonimmediate_operand, register_operand, },
    { register_operand, register_operand, },
    { register_operand, const_int_operand, const_int_operand, },
    { memory_operand, const_int_operand, const_int_operand, },
    { register_operand, },
    { register_operand, },
    { register_operand, },
    { register_operand, },
    { register_operand, },
    { register_operand, },
    { register_operand, },
    { register_operand, },
    { register_operand, },
    { register_operand, },
    { register_operand, },
    { register_operand, },
    { register_operand, },
    { register_operand, },
    { register_operand, },
    { register_operand, },
    { register_operand, },
    { register_operand, },
    { register_operand, },
    { register_operand, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { nonimmediate_operand, },
    { general_operand, 0, },
    { arithmetic_comparison_operator, nonimmediate_operand, general_operand, 0, },
    { arithmetic_comparison_operator, nonimmediate_operand, general_operand, 0, },
    { general_operand, 0, },
    { general_operand, 0, },
    { general_operand, 0, },
    { general_operand, 0, },
    { general_operand, 0, },
    { general_operand, 0, },
    { general_operand, general_operand, general_operand, 0, 0, 0, 0, scratch_operand, },
    { register_operand, 0, scratch_operand, },
    { nonimmediate_operand, 0, },
    { indirect_operand, general_operand, 0, immediate_operand, },
    { call_insn_operand, general_operand, 0, immediate_operand, },
    { symbolic_operand, general_operand, 0, immediate_operand, },
    { indirect_operand, general_operand, },
    { call_insn_operand, general_operand, },
    { symbolic_operand, general_operand, },
    { 0, indirect_operand, general_operand, 0, immediate_operand, },
    { 0, call_insn_operand, general_operand, 0, immediate_operand, },
    { 0, symbolic_operand, general_operand, 0, immediate_operand, },
    { 0, indirect_operand, general_operand, },
    { 0, call_insn_operand, general_operand, },
    { 0, symbolic_operand, general_operand, },
    { 0, 0, 0, },
    { 0 },
    { 0 },
    { 0 },
    { const_int_operand, },
    { 0 },
    { 0 },
    { immediate_operand, },
    { 0, symbolic_operand, 0, },
    { 0, 0, },
    { 0, },
    { 0 },
    { 0 },
    { 0 },
    { register_operand, },
    { memory_operand, memory_operand, const_int_operand, const_int_operand, scratch_operand, },
    { address_operand, address_operand, const_int_operand, immediate_operand, scratch_operand, },
    { memory_operand, const_int_operand, const_int_operand, 0, scratch_operand, },
    { address_operand, const_int_operand, immediate_operand, register_operand, scratch_operand, },
    { general_operand, general_operand, general_operand, general_operand, immediate_operand, },
    { register_operand, address_operand, address_operand, register_operand, immediate_operand, },
    { address_operand, address_operand, register_operand, immediate_operand, },
    { general_operand, general_operand, },
    { register_operand, nonimmediate_operand, },
    { general_operand, general_operand, },
    { register_operand, nonimmediate_operand, },
    { register_operand, nonimmediate_operand, nonimmediate_operand, binary_387_op, },
    { register_operand, nonimmediate_operand, register_operand, binary_387_op, },
    { register_operand, register_operand, register_operand, binary_387_op, },
    { register_operand, nonimmediate_operand, register_operand, binary_387_op, },
    { register_operand, nonimmediate_operand, register_operand, binary_387_op, },
    { register_operand, register_operand, nonimmediate_operand, binary_387_op, },
    { register_operand, register_operand, nonimmediate_operand, binary_387_op, },
    { register_operand, nonimmediate_operand, register_operand, binary_387_op, },
    { register_operand, register_operand, nonimmediate_operand, binary_387_op, },
    { register_operand, register_operand, nonimmediate_operand, binary_387_op, },
    { register_operand, nonimmediate_operand, nonimmediate_operand, binary_387_op, },
    { register_operand, nonimmediate_operand, register_operand, binary_387_op, },
    { register_operand, register_operand, nonimmediate_operand, binary_387_op, },
    { register_operand, general_operand, immediate_operand, immediate_operand, },
    { register_operand, address_operand, immediate_operand, immediate_operand, },
    { register_operand, comparison_operator, nonimmediate_operand, nonimmediate_operand, },
    { register_operand, comparison_operator, nonimmediate_operand, nonimmediate_operand, },
    { nonimmediate_operand, comparison_operator, nonimmediate_operand, nonimmediate_operand, },
    { nonimmediate_operand, comparison_operator, nonimmediate_operand, nonimmediate_operand, },
    { register_operand, comparison_operator, register_operand, register_operand, },
    { register_operand, comparison_operator, register_operand, register_operand, },
    { register_operand, comparison_operator, register_operand, register_operand, },
    { general_operand, comparison_operator, register_operand, register_operand, },
    { general_operand, comparison_operator, register_operand, register_operand, },
    { register_operand, address_operand, immediate_operand, scratch_operand, },
    { register_operand, immediate_operand, register_operand, register_operand, },
    { register_operand, immediate_operand, register_operand, register_operand, },
    { register_operand, },
    { register_operand, general_operand, },
    { 0 },
  };

const int insn_n_alternatives[] =
  {
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    2,
    0,
    2,
    0,
    2,
    0,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    2,
    1,
    1,
    1,
    1,
    1,
    1,
    2,
    1,
    1,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    1,
    1,
    1,
    1,
    1,
    0,
    2,
    1,
    1,
    1,
    0,
    2,
    0,
    2,
    1,
    1,
    1,
    0,
    3,
    0,
    2,
    0,
    2,
    4,
    1,
    4,
    1,
    0,
    2,
    5,
    2,
    4,
    1,
    0,
    2,
    5,
    2,
    4,
    1,
    4,
    4,
    3,
    0,
    0,
    3,
    0,
    0,
    0,
    3,
    0,
    0,
    0,
    3,
    1,
    1,
    1,
    1,
    2,
    2,
    2,
    2,
    4,
    4,
    0,
    2,
    2,
    2,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    1,
    1,
    0,
    0,
    0,
    1,
    1,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    1,
    1,
    1,
    2,
    1,
    7,
    9,
    6,
    0,
    3,
    1,
    0,
    2,
    0,
    2,
    0,
    0,
    0,
    7,
    6,
    0,
    2,
    0,
    2,
    0,
    2,
    0,
    0,
    0,
    2,
    2,
    1,
    1,
    1,
    1,
    1,
    1,
    0,
    0,
    0,
    1,
    1,
    0,
    0,
    0,
    1,
    1,
    1,
    1,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    0,
    1,
    1,
    2,
    1,
    1,
    0,
    2,
    1,
    1,
    1,
    1,
    1,
    0,
    2,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    2,
    2,
    1,
    1,
    1,
    1,
    1,
    1,
    0,
    1,
    1,
    0,
    1,
    1,
    0,
    1,
    1,
    0,
    1,
    1,
    0,
    1,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    1,
    0,
    1,
    0,
    1,
    2,
    1,
    2,
    1,
    2,
    1,
    2,
    2,
    1,
    2,
    2,
    1,
    1,
    0,
    1,
    0,
    0,
    3,
    3,
    0,
    1,
    0,
    3,
    3,
    2,
    2,
    1,
    1,
    1,
    0,
  };
