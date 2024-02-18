/* Generated automatically by the program `genattrtab'
from the machine description file `md'.  */

#include "config.h"
#include <stdio.h>
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "insn-attr.h"

#define operands recog_operand

int
result_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 370:
    case 369:
    case 368:
    case 367:
    case 366:
    case 365:
    case 364:
    case 363:
    case 362:
    case 361:
    case 360:
    case 359:
    case 358:
      insn_extract (insn);
      if ((! (is_mul (operands[3], DFmode))) && (is_div (operands[3], DFmode)))
        {
	  return 10 /* 0xa */;
        }
      else if ((is_mul (operands[3], DFmode)) && (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 7;
        }
      else if ((((! (is_mul (operands[3], DFmode))) && (! (is_div (operands[3], DFmode)))) && ((((ix86_cpu) == (CPU_I386))) || (((! ((ix86_cpu) == (CPU_I386))) && ((ix86_cpu) == (CPU_I486)))))) || ((is_mul (operands[3], DFmode)) && (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM))))))))
        {
	  return 5;
        }
      else if (((! (is_mul (operands[3], DFmode))) && (! (is_div (operands[3], DFmode)))) && ((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM))))) || (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM))))))))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 206:
    case 205:
    case 204:
    case 203:
    case 202:
      if ((((ix86_cpu) == (CPU_I386))) || (((! ((ix86_cpu) == (CPU_I386))) && ((ix86_cpu) == (CPU_I486)))))
        {
	  return 5;
        }
      else if ((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM))))) || (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 183:
    case 182:
    case 181:
    case 180:
    case 176:
      if (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 1;
        }

    case 171:
    case 170:
    case 169:
    case 168:
    case 167:
    case 166:
    case 165:
    case 164:
      if (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 6;
        }
      else
        {
	  return 1;
        }

    case 77:
    case 71:
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      if (! (((ix86_cpu) == (CPU_I386))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    }
}

int
integer_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 2;

    }
}

int
fp_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 370:
    case 369:
    case 368:
    case 367:
    case 366:
    case 365:
    case 364:
    case 363:
    case 362:
    case 361:
    case 360:
    case 359:
    case 358:
      insn_extract (insn);
      if ((is_mul (operands[3], DFmode)) && (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 5;
        }
      else if ((is_mul (operands[3], DFmode)) && (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 7;
        }
      else if (((! (is_mul (operands[3], DFmode))) && (! (is_div (operands[3], DFmode)))) && ((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))) || (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 3;
        }
      else if (((! (is_mul (operands[3], DFmode))) && (! (is_div (operands[3], DFmode)))) && ((((! ((ix86_cpu) == (CPU_I386))) && ((ix86_cpu) == (CPU_I486)))) || (((ix86_cpu) == (CPU_I386)))))
        {
	  return 5;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 206:
    case 205:
    case 204:
    case 203:
    case 202:
      if ((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))) || (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 3;
        }
      else if ((((! ((ix86_cpu) == (CPU_I386))) && ((ix86_cpu) == (CPU_I486)))) || (((ix86_cpu) == (CPU_I386))))
        {
	  return 5;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 171:
    case 170:
    case 169:
    case 168:
    case 167:
    case 166:
    case 165:
    case 164:
      if (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 6;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 77:
    case 71:
      if ((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))) || ((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM))))) || ((((! ((ix86_cpu) == (CPU_I386))) && ((ix86_cpu) == (CPU_I486)))) || (((ix86_cpu) == (CPU_I386))))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 10 /* 0xa */;

    }
}

unsigned int
fp_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65546 /* 0x1000a */;

    }
}

int
function_units_used (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 370:
    case 369:
    case 368:
    case 367:
    case 366:
    case 365:
    case 364:
    case 363:
    case 362:
    case 361:
    case 360:
    case 359:
    case 358:
      insn_extract (insn);
      if ((is_mul (operands[3], DFmode)) && ((((! ((ix86_cpu) == (CPU_I386))) && ((ix86_cpu) == (CPU_I486)))) || (((ix86_cpu) == (CPU_I386)))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 0;
        }

    case 183:
    case 182:
    case 181:
    case 180:
    case 176:
    case 171:
    case 170:
    case 169:
    case 168:
    case 167:
    case 166:
    case 165:
    case 164:
      if ((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM))))) || ((((! ((ix86_cpu) == (CPU_I386))) && ((ix86_cpu) == (CPU_I486)))) || (((ix86_cpu) == (CPU_I386)))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 0;
        }

    case 206:
    case 205:
    case 204:
    case 203:
    case 202:
    case 77:
    case 71:
      return 0;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      if ((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))) || ((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM))))) || (((! ((ix86_cpu) == (CPU_I386))) && ((ix86_cpu) == (CPU_I486))))))
        {
	  return 1;
        }
      else if (((ix86_cpu) == (CPU_I386)))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 0;
        }

    }
}

enum attr_cpu
get_attr_cpu ()
{
}

enum attr_type
get_attr_type (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 358:
    case 359:
    case 360:
    case 361:
    case 362:
    case 363:
    case 364:
    case 365:
    case 366:
    case 367:
    case 368:
    case 369:
    case 370:
      insn_extract (insn);
      if (is_mul (operands[3], DFmode))
        {
	  return TYPE_FPMUL;
        }
      else if (is_div (operands[3], DFmode))
        {
	  return TYPE_FPDIV;
        }
      else
        {
	  return TYPE_FPOP;
        }

    case 202:
    case 203:
    case 204:
    case 205:
    case 206:
      return TYPE_FPOP;

    case 71:
    case 77:
      return TYPE_FLD;

    case 164:
    case 165:
    case 166:
    case 167:
    case 168:
    case 169:
    case 170:
    case 171:
      return TYPE_IMUL;

    case 176:
    case 180:
    case 181:
    case 182:
    case 183:
      return TYPE_IDIV;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return TYPE_INTEGER;

    }
}

static int
fp_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 370:
    case 369:
    case 368:
    case 367:
    case 366:
    case 365:
    case 364:
    case 363:
    case 362:
    case 361:
    case 360:
    case 359:
    case 358:
      insn_extract (insn);
      if (((! (is_mul (operands[3], DFmode))) && (! (is_div (operands[3], DFmode)))) && ((((ix86_cpu) == (CPU_I386))) || (((! ((ix86_cpu) == (CPU_I386))) && ((ix86_cpu) == (CPU_I486))))))
        {
	  casenum = 0;
        }
      else if (((! (is_mul (operands[3], DFmode))) && (! (is_div (operands[3], DFmode)))) && ((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM))))) || (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM))))))))
        {
	  casenum = 1;
        }
      else if ((is_mul (operands[3], DFmode)) && (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  casenum = 2;
        }
      else if ((is_mul (operands[3], DFmode)) && (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  casenum = 3;
        }
      else if ((! (is_mul (operands[3], DFmode))) && (is_div (operands[3], DFmode)))
        {
	  casenum = 6;
        }
      else
        {
	  casenum = 7;
        }
      break;

    case 206:
    case 205:
    case 204:
    case 203:
    case 202:
      if ((((ix86_cpu) == (CPU_I386))) || (((! ((ix86_cpu) == (CPU_I386))) && ((ix86_cpu) == (CPU_I486)))))
        {
	  casenum = 0;
        }
      else if ((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM))))) || (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 7;
        }
      break;

    case 183:
    case 182:
    case 181:
    case 180:
    case 176:
      casenum = 4;
      break;

    case 171:
    case 170:
    case 169:
    case 168:
    case 167:
    case 166:
    case 165:
    case 164:
      casenum = 5;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 7;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 5;

    case 1:
      switch (recog_memoized (insn))
	{
        case 370:
        case 369:
        case 368:
        case 367:
        case 366:
        case 365:
        case 364:
        case 363:
        case 362:
        case 361:
        case 360:
        case 359:
        case 358:
	  insn_extract (insn);
	  if (((is_mul (operands[3], DFmode)) && ((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))) || (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM))))))) || ((((! (is_mul (operands[3], DFmode))) && (! (is_div (operands[3], DFmode)))) && ((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))) || (((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM))))) || (((! ((ix86_cpu) == (CPU_I386))) && ((ix86_cpu) == (CPU_I486))))) || (((ix86_cpu) == (CPU_I386)))))) || (((! (is_mul (operands[3], DFmode))) && (is_div (operands[3], DFmode))) && ((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))) || (((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM))))) || (((! ((ix86_cpu) == (CPU_I386))) && ((ix86_cpu) == (CPU_I486))))) || (((ix86_cpu) == (CPU_I386))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 206:
        case 205:
        case 204:
        case 203:
        case 202:
	  if ((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))) || ((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM))))) || ((((! ((ix86_cpu) == (CPU_I386))) && ((ix86_cpu) == (CPU_I486)))) || (((ix86_cpu) == (CPU_I386))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 183:
        case 182:
        case 181:
        case 180:
        case 176:
        case 171:
        case 170:
        case 169:
        case 168:
        case 167:
        case 166:
        case 165:
        case 164:
	  return 1;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 3;

      }

    case 2:
      switch (recog_memoized (insn))
	{
        case 370:
        case 369:
        case 368:
        case 367:
        case 366:
        case 365:
        case 364:
        case 363:
        case 362:
        case 361:
        case 360:
        case 359:
        case 358:
	  insn_extract (insn);
	  if ((is_mul (operands[3], DFmode)) && (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))))
	    {
	      return 3;
	    }
	  else if ((is_mul (operands[3], DFmode)) && (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM))))))
	    {
	      return 1;
	    }
	  else if (((! (is_mul (operands[3], DFmode))) && (! (is_div (operands[3], DFmode)))) && ((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))) || (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM)))))))
	    {
	      return 5;
	    }
	  else if (((! (is_mul (operands[3], DFmode))) && (! (is_div (operands[3], DFmode)))) && ((((! ((ix86_cpu) == (CPU_I386))) && ((ix86_cpu) == (CPU_I486)))) || (((ix86_cpu) == (CPU_I386)))))
	    {
	      return 3;
	    }
	  else if (((! (is_mul (operands[3], DFmode))) && (is_div (operands[3], DFmode))) && (((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))) || (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM)))))) || ((((! ((ix86_cpu) == (CPU_I386))) && ((ix86_cpu) == (CPU_I486)))) || (((ix86_cpu) == (CPU_I386))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 7;
	    }

        case 206:
        case 205:
        case 204:
        case 203:
        case 202:
	  if ((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))) || (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM))))))
	    {
	      return 5;
	    }
	  else if ((((! ((ix86_cpu) == (CPU_I386))) && ((ix86_cpu) == (CPU_I486)))) || (((ix86_cpu) == (CPU_I386))))
	    {
	      return 3;
	    }
	  else
	    {
	      return 7;
	    }

        case 183:
        case 182:
        case 181:
        case 180:
        case 176:
	  return 1;

        case 171:
        case 170:
        case 169:
        case 168:
        case 167:
        case 166:
        case 165:
        case 164:
	  return 2;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 7;

      }

    case 3:
      switch (recog_memoized (insn))
	{
        case 370:
        case 369:
        case 368:
        case 367:
        case 366:
        case 365:
        case 364:
        case 363:
        case 362:
        case 361:
        case 360:
        case 359:
        case 358:
	  insn_extract (insn);
	  if ((is_mul (operands[3], DFmode)) && ((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))) || (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM)))))))
	    {
	      return 1;
	    }
	  else if (((! (is_mul (operands[3], DFmode))) && (! (is_div (operands[3], DFmode)))) && ((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))) || (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM)))))))
	    {
	      return 3;
	    }
	  else if ((((! (is_mul (operands[3], DFmode))) && (! (is_div (operands[3], DFmode)))) && ((((! ((ix86_cpu) == (CPU_I386))) && ((ix86_cpu) == (CPU_I486)))) || (((ix86_cpu) == (CPU_I386))))) || (((! (is_mul (operands[3], DFmode))) && (is_div (operands[3], DFmode))) && (((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))) || (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM)))))) || ((((! ((ix86_cpu) == (CPU_I386))) && ((ix86_cpu) == (CPU_I486)))) || (((ix86_cpu) == (CPU_I386)))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 5;
	    }

        case 206:
        case 205:
        case 204:
        case 203:
        case 202:
	  if ((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))) || (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM))))))
	    {
	      return 3;
	    }
	  else if ((((! ((ix86_cpu) == (CPU_I386))) && ((ix86_cpu) == (CPU_I486)))) || (((ix86_cpu) == (CPU_I386))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 5;
	    }

        case 183:
        case 182:
        case 181:
        case 180:
        case 176:
        case 171:
        case 170:
        case 169:
        case 168:
        case 167:
        case 166:
        case 165:
        case 164:
	  return 1;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 5;

      }

    case 4:
      return 10 /* 0xa */;

    case 5:
      switch (recog_memoized (insn))
	{
        case 370:
        case 369:
        case 368:
        case 367:
        case 366:
        case 365:
        case 364:
        case 363:
        case 362:
        case 361:
        case 360:
        case 359:
        case 358:
	  insn_extract (insn);
	  if ((is_mul (operands[3], DFmode)) && (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))))
	    {
	      return 2;
	    }
	  else if ((is_mul (operands[3], DFmode)) && (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM))))))
	    {
	      return 1;
	    }
	  else if (((! (is_mul (operands[3], DFmode))) && (! (is_div (operands[3], DFmode)))) && ((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))) || (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM)))))))
	    {
	      return 4;
	    }
	  else if (((! (is_mul (operands[3], DFmode))) && (! (is_div (operands[3], DFmode)))) && ((((! ((ix86_cpu) == (CPU_I386))) && ((ix86_cpu) == (CPU_I486)))) || (((ix86_cpu) == (CPU_I386)))))
	    {
	      return 2;
	    }
	  else if (((! (is_mul (operands[3], DFmode))) && (is_div (operands[3], DFmode))) && (((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))) || (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM)))))) || ((((! ((ix86_cpu) == (CPU_I386))) && ((ix86_cpu) == (CPU_I486)))) || (((ix86_cpu) == (CPU_I386))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 6;
	    }

        case 206:
        case 205:
        case 204:
        case 203:
        case 202:
	  if ((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))) || (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM))))))
	    {
	      return 4;
	    }
	  else if ((((! ((ix86_cpu) == (CPU_I386))) && ((ix86_cpu) == (CPU_I486)))) || (((ix86_cpu) == (CPU_I386))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 6;
	    }

        case 183:
        case 182:
        case 181:
        case 180:
        case 176:
        case 171:
        case 170:
        case 169:
        case 168:
        case 167:
        case 166:
        case 165:
        case 164:
	  return 1;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 6;

      }

    case 6:
      return 10 /* 0xa */;

    case 7:
      return 1;

    }
}

static int
fp_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 370:
    case 369:
    case 368:
    case 367:
    case 366:
    case 365:
    case 364:
    case 363:
    case 362:
    case 361:
    case 360:
    case 359:
    case 358:
      insn_extract (insn);
      if (((! (is_mul (operands[3], DFmode))) && (! (is_div (operands[3], DFmode)))) && ((((ix86_cpu) == (CPU_I386))) || (((! ((ix86_cpu) == (CPU_I386))) && ((ix86_cpu) == (CPU_I486))))))
        {
	  casenum = 0;
        }
      else if (((! (is_mul (operands[3], DFmode))) && (! (is_div (operands[3], DFmode)))) && ((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM))))) || (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM))))))))
        {
	  casenum = 1;
        }
      else if ((is_mul (operands[3], DFmode)) && (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  casenum = 2;
        }
      else if ((is_mul (operands[3], DFmode)) && (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  casenum = 3;
        }
      else if ((! (is_mul (operands[3], DFmode))) && (is_div (operands[3], DFmode)))
        {
	  casenum = 6;
        }
      else
        {
	  casenum = 7;
        }
      break;

    case 206:
    case 205:
    case 204:
    case 203:
    case 202:
      if ((((ix86_cpu) == (CPU_I386))) || (((! ((ix86_cpu) == (CPU_I386))) && ((ix86_cpu) == (CPU_I486)))))
        {
	  casenum = 0;
        }
      else if ((((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && ((ix86_cpu) == (CPU_PENTIUM))))) || (((! ((ix86_cpu) == (CPU_I386))) && ((! ((ix86_cpu) == (CPU_I486))) && (! ((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 7;
        }
      break;

    case 183:
    case 182:
    case 181:
    case 180:
    case 176:
      casenum = 4;
      break;

    case 171:
    case 170:
    case 169:
    case 168:
    case 167:
    case 166:
    case 165:
    case 164:
      casenum = 5;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 7;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 5;

    case 1:
      return 1;

    case 2:
      return 1;

    case 3:
      return 1;

    case 4:
      return 10 /* 0xa */;

    case 5:
      return 1;

    case 6:
      return 10 /* 0xa */;

    case 7:
      return 1;

    }
}

struct function_unit_desc function_units[] = {
  {"fp", 1, 1, 0, 0, 10, fp_unit_ready_cost, fp_unit_conflict_cost, 10, fp_unit_blockage_range, fp_unit_blockage}, 
  {"integer", 2, 1, 0, 1, 1, integer_unit_ready_cost, 0, 1, 0, 0}, 
};

