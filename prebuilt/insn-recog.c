/* Generated automatically by the program `genrecog'
from the machine description file `md'.  */

#include "config.h"
#include <stdio.h>
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"

extern rtx gen_split_88 ();
extern rtx gen_split_89 ();
extern rtx gen_split_91 ();
extern rtx gen_split_92 ();
extern rtx gen_split_93 ();
extern rtx gen_split_95 ();
extern rtx gen_split_96 ();
extern rtx gen_split_97 ();

/* `recog' contains a decision tree
   that recognizes whether the rtx X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.
   If the rtx is valid, recog returns a nonnegative number
   which is the insn code number for the pattern that matched.
   This is the same as the order in the machine description of
   the entry that matched.  This number can be used as an index into
   entry that matched.  This number can be used as an index into various
   insn_* tables, such as insn_templates, insn_outfun, and insn_n_operands
   (found in insn-output.c).

   The third argument to recog is an optional pointer to an int.
   If present, recog will accept a pattern if it matches except for
   missing CLOBBER expressions at the end.  In that case, the value
   pointed to by the optional pointer will be set to the number of
   CLOBBERs that need to be added (it should be initialized to zero by
   the caller).  If it is set nonzero, the caller should allocate a
   PARALLEL of the appropriate size, copy the initial entries, and call
   add_clobbers (found in insn-emit.c) to fill in the CLOBBERs.

   The function split_insns returns 0 if the rtl could not
   be split or the split rtl in a SEQUENCE if it can be.*/

rtx recog_operand[MAX_RECOG_OPERANDS];

rtx *recog_operand_loc[MAX_RECOG_OPERANDS];

rtx *recog_dup_loc[MAX_DUP_OPERANDS];

char recog_dup_num[MAX_DUP_OPERANDS];

#define operands recog_operand

int
recog_1 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    default:
      break;
    case SImode:
      if (nonimmediate_operand (x1, SImode))
	{
	  ro[0] = x1;
	  return 0;
	}
      break;
    case HImode:
      if (nonimmediate_operand (x1, HImode))
	{
	  ro[0] = x1;
	  return 2;
	}
      break;
    case QImode:
      if (GET_CODE (x1) == AND && 1)
	goto L322;
      if (nonimmediate_operand (x1, QImode))
	{
	  ro[0] = x1;
	  return 4;
	}
      break;
    case SFmode:
      if (pnum_clobbers != 0 && register_operand (x1, SFmode))
	{
	  ro[0] = x1;
	  if (TARGET_80387 && ! TARGET_IEEE_FP)
	    {
	      *pnum_clobbers = 1;
	      return 6;
	    }
	  }
      break;
    case DFmode:
      if (pnum_clobbers != 0 && register_operand (x1, DFmode))
	{
	  ro[0] = x1;
	  if (TARGET_80387 && ! TARGET_IEEE_FP)
	    {
	      *pnum_clobbers = 1;
	      return 8;
	    }
	  }
      break;
    case XFmode:
      if (pnum_clobbers != 0 && register_operand (x1, XFmode))
	{
	  ro[0] = x1;
	  if (TARGET_80387 && ! TARGET_IEEE_FP)
	    {
	      *pnum_clobbers = 1;
	      return 10;
	    }
	  }
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case COMPARE:
      goto L39;
    case ZERO_EXTRACT:
      goto L1330;
    }
  L61:
  if (VOIDmode_compare_op (x1, VOIDmode))
    {
      ro[2] = x1;
      goto L91;
    }
  L149:
  switch (GET_MODE (x1))
    {
    default:
      break;
    case CCFPEQmode:
      switch (GET_CODE (x1))
	{
	default:
	  break;
	case COMPARE:
	  goto L150;
	}
      break;
    case SImode:
      switch (GET_CODE (x1))
	{
	default:
	  break;
	case AND:
	  goto L312;
	}
      break;
    case HImode:
      if (GET_CODE (x1) == AND && 1)
	goto L317;
    }
  goto ret0;

  L322:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      ro[0] = x2;
      goto L323;
    }
  goto L61;

  L323:
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      ro[1] = x2;
      return 47;
    }
  goto L61;

  L39:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      if (nonimmediate_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L40;
	}
      break;
    case HImode:
      if (nonimmediate_operand (x2, HImode))
	{
	  ro[0] = x2;
	  goto L45;
	}
      break;
    case QImode:
      if (nonimmediate_operand (x2, QImode))
	{
	  ro[0] = x2;
	  goto L50;
	}
    }
  goto L61;

  L40:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      ro[1] = x2;
      if (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
	return 12;
      }
  goto L61;

  L45:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      ro[1] = x2;
      if (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
	return 14;
      }
  goto L61;

  L50:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      ro[1] = x2;
      if (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
	return 16;
      }
  goto L61;

  L1330:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      if (register_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L1331;
	}
      break;
    case QImode:
      if (memory_operand (x2, QImode))
	{
	  ro[0] = x2;
	  goto L1343;
	}
    }
  goto L61;

  L1331:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != CONST_INT)
    {
    goto L61;
    }
  if (XWINT (x2, 0) == 1 && 1)
    goto L1332;
  L1337:
  ro[1] = x2;
  goto L1338;

  L1332:
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      if (GET_CODE (operands[1]) != CONST_INT)
	return 253;
      }
  x2 = XEXP (x1, 1);
  goto L1337;

  L1338:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[2] = x2;
      return 254;
    }
  goto L61;

  L1343:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[1] = x2;
      goto L1344;
    }
  goto L61;

  L1344:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[2] = x2;
      if (GET_CODE (operands[0]) != MEM || ! MEM_VOLATILE_P (operands[0]))
	return 255;
      }
  goto L61;

  L91:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case XFmode:
      switch (GET_CODE (x2))
	{
	default:
	  break;
	case FLOAT:
	  goto L92;
	case FLOAT_EXTEND:
	  goto L122;
	case SUBREG:
	case REG:
	  if (register_operand (x2, XFmode))
	    {
	      ro[0] = x2;
	      goto L77;
	    }
	}
      break;
    case DFmode:
      switch (GET_CODE (x2))
	{
	default:
	  break;
	case FLOAT:
	  goto L193;
	case FLOAT_EXTEND:
	  goto L223;
	case SUBREG:
	case REG:
	case MEM:
	  if (nonimmediate_operand (x2, DFmode))
	    {
	      ro[0] = x2;
	      goto L164;
	    }
	}
    L177:
      if (register_operand (x2, DFmode))
	{
	  ro[0] = x2;
	  goto L178;
	}
      break;
    case SFmode:
      if (GET_CODE (x2) == FLOAT && 1)
	goto L294;
      if (nonimmediate_operand (x2, SFmode))
	{
	  ro[0] = x2;
	  goto L265;
	}
    L278:
      if (register_operand (x2, SFmode))
	{
	  ro[0] = x2;
	  goto L279;
	}
    }
  goto L149;

  L92:
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      ro[0] = x3;
      goto L93;
    }
  goto L149;

  L93:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && register_operand (x2, XFmode))
    {
      ro[1] = x2;
      if (TARGET_80387)
	{
	  *pnum_clobbers = 1;
	  return 20;
	}
      }
  goto L149;

  L122:
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DFmode))
    {
      ro[1] = x3;
      goto L123;
    }
  goto L149;

  L123:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && register_operand (x2, XFmode))
    {
      ro[0] = x2;
      if (TARGET_80387)
	{
	  *pnum_clobbers = 1;
	  return 22;
	}
      }
  goto L149;

  L77:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != XFmode)
    {
      goto L149;
    }
  switch (GET_CODE (x2))
    {
    default:
      break;
    case FLOAT:
      goto L78;
    case FLOAT_EXTEND:
      goto L108;
    case SUBREG:
    case REG:
      if (pnum_clobbers != 0 && register_operand (x2, XFmode))
	{
	  ro[1] = x2;
	  if (TARGET_80387)
	    {
	      *pnum_clobbers = 1;
	      return 18;
	    }
	  }
    }
  goto L149;

  L78:
  x3 = XEXP (x2, 0);
  if (pnum_clobbers != 0 && nonimmediate_operand (x3, SImode))
    {
      ro[1] = x3;
      if (TARGET_80387)
	{
	  *pnum_clobbers = 1;
	  return 19;
	}
      }
  goto L149;

  L108:
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    default:
      break;
    case DFmode:
      if (pnum_clobbers != 0 && nonimmediate_operand (x3, DFmode))
	{
	  ro[1] = x3;
	  if (TARGET_80387)
	    {
	      *pnum_clobbers = 1;
	      return 21;
	    }
	  }
      break;
    case SFmode:
      if (pnum_clobbers != 0 && nonimmediate_operand (x3, SFmode))
	{
	  ro[1] = x3;
	  if (TARGET_80387)
	    {
	      *pnum_clobbers = 1;
	      return 23;
	    }
	  }
    }
  goto L149;

  L193:
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      ro[0] = x3;
      goto L194;
    }
  goto L149;

  L194:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_80387)
	{
	  *pnum_clobbers = 1;
	  return 27;
	}
      }
  goto L149;

  L223:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != SFmode)
    {
      goto L149;
    }
  if (nonimmediate_operand (x3, SFmode))
    {
      ro[0] = x3;
      goto L224;
    }
  L238:
  if (register_operand (x3, SFmode))
    {
      ro[0] = x3;
      goto L239;
    }
  goto L149;

  L224:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_80387)
	{
	  *pnum_clobbers = 1;
	  return 29;
	}
      }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L238;

  L239:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && nonimmediate_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_80387)
	{
	  *pnum_clobbers = 1;
	  return 30;
	}
      }
  goto L149;

  L164:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && nonimmediate_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_80387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
	{
	  *pnum_clobbers = 1;
	  return 25;
	}
      }
  x2 = XEXP (x1, 0);
  goto L177;

  L178:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DFmode)
    {
      goto L149;
    }
  switch (GET_CODE (x2))
    {
    default:
      break;
    case FLOAT:
      goto L179;
    case FLOAT_EXTEND:
      goto L209;
    }
  goto L149;

  L179:
  x3 = XEXP (x2, 0);
  if (pnum_clobbers != 0 && nonimmediate_operand (x3, SImode))
    {
      ro[1] = x3;
      if (TARGET_80387)
	{
	  *pnum_clobbers = 1;
	  return 26;
	}
      }
  goto L149;

  L209:
  x3 = XEXP (x2, 0);
  if (pnum_clobbers != 0 && nonimmediate_operand (x3, SFmode))
    {
      ro[1] = x3;
      if (TARGET_80387)
	{
	  *pnum_clobbers = 1;
	  return 28;
	}
      }
  goto L149;

  L294:
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      ro[0] = x3;
      goto L295;
    }
  goto L149;

  L295:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_80387)
	{
	  *pnum_clobbers = 1;
	  return 34;
	}
      }
  goto L149;

  L265:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && nonimmediate_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_80387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
	{
	  *pnum_clobbers = 1;
	  return 32;
	}
      }
  x2 = XEXP (x1, 0);
  goto L278;

  L279:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode && GET_CODE (x2) == FLOAT && 1)
    goto L280;
  goto L149;

  L280:
  x3 = XEXP (x2, 0);
  if (pnum_clobbers != 0 && nonimmediate_operand (x3, SImode))
    {
      ro[1] = x3;
      if (TARGET_80387)
	{
	  *pnum_clobbers = 1;
	  return 33;
	}
      }
  goto L149;

  L150:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case XFmode:
      if (register_operand (x2, XFmode))
	{
	  ro[0] = x2;
	  goto L151;
	}
      break;
    case DFmode:
      if (register_operand (x2, DFmode))
	{
	  ro[0] = x2;
	  goto L252;
	}
      break;
    case SFmode:
      if (register_operand (x2, SFmode))
	{
	  ro[0] = x2;
	  goto L308;
	}
    }
  goto ret0;

  L151:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && register_operand (x2, XFmode))
    {
      ro[1] = x2;
      if (TARGET_80387)
	{
	  *pnum_clobbers = 1;
	  return 24;
	}
      }
  goto ret0;

  L252:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_80387)
	{
	  *pnum_clobbers = 1;
	  return 31;
	}
      }
  goto ret0;

  L308:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_80387)
	{
	  *pnum_clobbers = 1;
	  return 35;
	}
      }
  goto ret0;

  L312:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L313;
    }
  goto ret0;

  L313:
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      ro[1] = x2;
      return 45;
    }
  goto ret0;

  L317:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, HImode))
    {
      ro[0] = x2;
      goto L318;
    }
  goto ret0;

  L318:
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, HImode))
    {
      ro[1] = x2;
      return 46;
    }
  goto ret0;
 ret0: return -1;
}

int
recog_2 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    default:
      break;
    case EQ:
      goto L1399;
    case NE:
      goto L1408;
    case GT:
      goto L1417;
    case GTU:
      goto L1426;
    case LT:
      goto L1435;
    case LTU:
      goto L1444;
    case GE:
      goto L1453;
    case GEU:
      goto L1462;
    case LE:
      goto L1471;
    case LEU:
      goto L1480;
    }
  goto ret0;

  L1399:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0 && 1)
    goto L1400;
  goto ret0;

  L1400:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1401;
  goto ret0;

  L1401:
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    default:
      break;
    case LABEL_REF:
      goto L1402;
    case PC:
      goto L1492;
    }
  goto ret0;

  L1402:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  goto L1403;

  L1403:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC && 1)
    return 277;
  goto ret0;

  L1492:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1493;
  goto ret0;

  L1493:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  return 296;

  L1408:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0 && 1)
    goto L1409;
  goto ret0;

  L1409:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1410;
  goto ret0;

  L1410:
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    default:
      break;
    case LABEL_REF:
      goto L1411;
    case PC:
      goto L1501;
    }
  goto ret0;

  L1411:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  goto L1412;

  L1412:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC && 1)
    return 279;
  goto ret0;

  L1501:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1502;
  goto ret0;

  L1502:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  return 297;

  L1417:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0 && 1)
    goto L1418;
  goto ret0;

  L1418:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1419;
  goto ret0;

  L1419:
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    default:
      break;
    case LABEL_REF:
      goto L1420;
    case PC:
      goto L1510;
    }
  goto ret0;

  L1420:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  goto L1421;

  L1421:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC && 1)
    return 281;
  goto ret0;

  L1510:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1511;
  goto ret0;

  L1511:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  return 298;

  L1426:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0 && 1)
    goto L1427;
  goto ret0;

  L1427:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1428;
  goto ret0;

  L1428:
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    default:
      break;
    case LABEL_REF:
      goto L1429;
    case PC:
      goto L1519;
    }
  goto ret0;

  L1429:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  goto L1430;

  L1430:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC && 1)
    return 283;
  goto ret0;

  L1519:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1520;
  goto ret0;

  L1520:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  return 299;

  L1435:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0 && 1)
    goto L1436;
  goto ret0;

  L1436:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1437;
  goto ret0;

  L1437:
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    default:
      break;
    case LABEL_REF:
      goto L1438;
    case PC:
      goto L1528;
    }
  goto ret0;

  L1438:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  goto L1439;

  L1439:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC && 1)
    return 285;
  goto ret0;

  L1528:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1529;
  goto ret0;

  L1529:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  return 300;

  L1444:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0 && 1)
    goto L1445;
  goto ret0;

  L1445:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1446;
  goto ret0;

  L1446:
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    default:
      break;
    case LABEL_REF:
      goto L1447;
    case PC:
      goto L1537;
    }
  goto ret0;

  L1447:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  goto L1448;

  L1448:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC && 1)
    return 287;
  goto ret0;

  L1537:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1538;
  goto ret0;

  L1538:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  return 301;

  L1453:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0 && 1)
    goto L1454;
  goto ret0;

  L1454:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1455;
  goto ret0;

  L1455:
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    default:
      break;
    case LABEL_REF:
      goto L1456;
    case PC:
      goto L1546;
    }
  goto ret0;

  L1456:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  goto L1457;

  L1457:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC && 1)
    return 289;
  goto ret0;

  L1546:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1547;
  goto ret0;

  L1547:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  return 302;

  L1462:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0 && 1)
    goto L1463;
  goto ret0;

  L1463:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1464;
  goto ret0;

  L1464:
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    default:
      break;
    case LABEL_REF:
      goto L1465;
    case PC:
      goto L1555;
    }
  goto ret0;

  L1465:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  goto L1466;

  L1466:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC && 1)
    return 291;
  goto ret0;

  L1555:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1556;
  goto ret0;

  L1556:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  return 303;

  L1471:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0 && 1)
    goto L1472;
  goto ret0;

  L1472:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1473;
  goto ret0;

  L1473:
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    default:
      break;
    case LABEL_REF:
      goto L1474;
    case PC:
      goto L1564;
    }
  goto ret0;

  L1474:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  goto L1475;

  L1475:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC && 1)
    return 293;
  goto ret0;

  L1564:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1565;
  goto ret0;

  L1565:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  return 304;

  L1480:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0 && 1)
    goto L1481;
  goto ret0;

  L1481:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1482;
  goto ret0;

  L1482:
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    default:
      break;
    case LABEL_REF:
      goto L1483;
    case PC:
      goto L1573;
    }
  goto ret0;

  L1483:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  goto L1484;

  L1484:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC && 1)
    return 295;
  goto ret0;

  L1573:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1574;
  goto ret0;

  L1574:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  return 305;
 ret0: return -1;
}

int
recog_3 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    default:
      break;
    case SImode:
      switch (GET_CODE (x1))
	{
	default:
	  break;
	case MEM:
	  if (push_operand (x1, SImode))
	    {
	      ro[0] = x1;
	      goto L326;
	    }
	  break;
	case ZERO_EXTRACT:
	  goto L1309;
	}
    L336:
      if (general_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L337;
	}
    L504:
      if (register_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L505;
	}
    L568:
      if (nonimmediate_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L569;
	}
    L821:
      if (register_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L822;
	}
    L862:
      if (nonimmediate_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L863;
	}
      break;
    case HImode:
      if (GET_CODE (x1) == MEM && push_operand (x1, HImode))
	{
	  ro[0] = x1;
	  goto L340;
	}
    L350:
      if (general_operand (x1, HImode))
	{
	  ro[0] = x1;
	  goto L351;
	}
    L516:
      if (register_operand (x1, HImode))
	{
	  ro[0] = x1;
	  goto L517;
	}
    L824:
      if (nonimmediate_operand (x1, HImode))
	{
	  ro[0] = x1;
	  goto L825;
	}
      break;
    case QImode:
      if (GET_CODE (x1) == MEM && push_operand (x1, QImode))
	{
	  ro[0] = x1;
	  goto L361;
	}
    L368:
      if (nonimmediate_operand (x1, QImode))
	{
	  ro[0] = x1;
	  goto L830;
	}
    L961:
      if (register_operand (x1, QImode))
	{
	  ro[0] = x1;
	  goto L962;
	}
      break;
    case SFmode:
      if (GET_CODE (x1) == MEM && push_operand (x1, SFmode))
	{
	  ro[0] = x1;
	  goto L376;
	}
    L395:
      if (memory_operand (x1, SFmode))
	{
	  ro[0] = x1;
	  goto L396;
	}
    L398:
      if (nonimmediate_operand (x1, SFmode))
	{
	  ro[0] = x1;
	  goto L598;
	}
    L757:
      if (register_operand (x1, SFmode))
	{
	  ro[0] = x1;
	  goto L758;
	}
      break;
    case DFmode:
      if (GET_CODE (x1) == MEM && push_operand (x1, DFmode))
	{
	  ro[0] = x1;
	  goto L409;
	}
    L432:
      if (memory_operand (x1, DFmode))
	{
	  ro[0] = x1;
	  goto L433;
	}
    L435:
      if (nonimmediate_operand (x1, DFmode))
	{
	  ro[0] = x1;
	  goto L579;
	}
    L753:
      if (register_operand (x1, DFmode))
	{
	  ro[0] = x1;
	  goto L754;
	}
      break;
    case XFmode:
      if (GET_CODE (x1) == MEM && push_operand (x1, XFmode))
	{
	  ro[0] = x1;
	  goto L446;
	}
    L469:
      if (memory_operand (x1, XFmode))
	{
	  ro[0] = x1;
	  goto L470;
	}
    L472:
      if (nonimmediate_operand (x1, XFmode))
	{
	  ro[0] = x1;
	  goto L583;
	}
    L749:
      if (register_operand (x1, XFmode))
	{
	  ro[0] = x1;
	  goto L750;
	}
      break;
    case DImode:
      if (GET_CODE (x1) == MEM && push_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L491;
	}
    L501:
      if (general_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L812;
	}
    L548:
      if (nonimmediate_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L549;
	}
    L552:
      if (register_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L553;
	}
    L1218:
      if (nonimmediate_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L1219;
	}
    L1253:
      if (register_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L1254;
	}
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case CC0:
      goto L2;
    case STRICT_LOW_PART:
      goto L354;
    case PC:
      goto L1722;
    }
  L1788:
  ro[0] = x1;
  goto L1789;
  L1817:
  switch (GET_MODE (x1))
    {
    default:
      break;
    case SImode:
      ro[0] = x1;
      goto L1818;
    L1928:
      if (register_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L1929;
	}
    L2025:
      if (nonimmediate_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L2026;
	}
    L1841:
      if (GET_CODE (x1) == REG && XINT (x1, 0) == 7 && 1)
	goto L1842;
      break;
    case HImode:
      if (register_operand (x1, HImode))
	{
	  ro[0] = x1;
	  goto L1935;
	}
    L2033:
      if (nonimmediate_operand (x1, HImode))
	{
	  ro[0] = x1;
	  goto L2034;
	}
      break;
    case DFmode:
      if (register_operand (x1, DFmode))
	{
	  ro[0] = x1;
	  goto L1941;
	}
    L2049:
      if (general_operand (x1, DFmode))
	{
	  ro[0] = x1;
	  goto L2050;
	}
      break;
    case XFmode:
      if (register_operand (x1, XFmode))
	{
	  ro[0] = x1;
	  goto L1952;
	}
      break;
    case SFmode:
      if (register_operand (x1, SFmode))
	{
	  ro[0] = x1;
	  goto L1999;
	}
    L2041:
      if (general_operand (x1, SFmode))
	{
	  ro[0] = x1;
	  goto L2042;
	}
    }
  goto ret0;

  L326:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SImode))
    {
      ro[1] = x1;
      if (TARGET_PUSH_MEMORY)
	return 48;
      }
  L329:
  if (nonmemory_operand (x1, SImode))
    goto L333;
  x1 = XEXP (x0, 0);
  goto L336;

  L333:
  ro[1] = x1;
  if (!TARGET_PUSH_MEMORY && TARGET_MOVE)
    return 49;
  L334:
  ro[1] = x1;
  if (!TARGET_PUSH_MEMORY && !TARGET_MOVE)
    return 50;
  x1 = XEXP (x0, 0);
  goto L336;

  L1309:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L1310;
    }
  goto L1788;

  L1310:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 1 && 1)
    goto L1311;
  goto L1788;

  L1311:
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L1312;
    }
  goto L1788;

  L1312:
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CONST_INT && 1)
    {
      ro[3] = x1;
      if (TARGET_USE_BIT_TEST && GET_CODE (operands[2]) != CONST_INT)
	return 250;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L337:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SImode))
    {
      ro[1] = x1;
      if ((!TARGET_MOVE || GET_CODE (operands[0]) != MEM) || (GET_CODE (operands[1]) != MEM))
	return 52;
      }
  x1 = XEXP (x0, 0);
  goto L504;

  L505:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != SImode)
    {
      x1 = XEXP (x0, 0);
      goto L568;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case ZERO_EXTEND:
      goto L506;
    case SIGN_EXTEND:
      goto L558;
    }
  x1 = XEXP (x0, 0);
  goto L568;

  L506:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case HImode:
      if (nonimmediate_operand (x2, HImode))
	{
	  ro[1] = x2;
	  return 87;
	}
      break;
    case QImode:
      if (nonimmediate_operand (x2, QImode))
	{
	  ro[1] = x2;
	  return 94;
	}
    }
  x1 = XEXP (x0, 0);
  goto L568;

  L558:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case HImode:
      if (nonimmediate_operand (x2, HImode))
	{
	  ro[1] = x2;
	  return 100;
	}
      break;
    case QImode:
      if (nonimmediate_operand (x2, QImode))
	{
	  ro[1] = x2;
	  return 102;
	}
    }
  x1 = XEXP (x0, 0);
  goto L568;

  L569:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != SImode)
    {
      x1 = XEXP (x0, 0);
      goto L821;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case TRUNCATE:
      goto L574;
    case PLUS:
      goto L818;
    }
  x1 = XEXP (x0, 0);
  goto L821;

  L574:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DImode)
    {
      x1 = XEXP (x0, 0);
      goto L821;
    }
  if (GET_CODE (x2) == LSHIFTRT && 1)
    goto L575;
  if (nonimmediate_operand (x2, DImode))
    {
      ro[1] = x2;
      if ((!TARGET_MOVE || GET_CODE (operands[0]) != MEM) || (GET_CODE (operands[1]) != MEM))
	return 104;
      }
  x1 = XEXP (x0, 0);
  goto L821;

  L575:
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L576;
    }
  x1 = XEXP (x0, 0);
  goto L821;

  L576:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 32 && 1)
    if ((!TARGET_MOVE || GET_CODE (operands[0]) != MEM) || (GET_CODE (operands[1]) != MEM))
      return 105;
  x1 = XEXP (x0, 0);
  goto L821;

  L818:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L819;
    }
  x1 = XEXP (x0, 0);
  goto L821;

  L819:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      ro[2] = x2;
      if (ix86_binary_operator_ok (PLUS, SImode, operands))
	return 144;
      }
  x1 = XEXP (x0, 0);
  goto L821;

  L822:
  x1 = XEXP (x0, 1);
  if (address_operand (x1, QImode))
    {
      ro[1] = x1;
      return 145;
    }
  L883:
  if (GET_MODE (x1) != SImode)
    {
      x1 = XEXP (x0, 0);
      goto L862;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case MULT:
      goto L884;
    case TRUNCATE:
      goto L930;
    }
  x1 = XEXP (x0, 0);
  goto L862;

  L884:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L885;
    }
  x1 = XEXP (x0, 0);
  goto L862;

  L885:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      ro[2] = x2;
      return 165;
    }
  x1 = XEXP (x0, 0);
  goto L862;

  L930:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == LSHIFTRT && 1)
    goto L931;
  x1 = XEXP (x0, 0);
  goto L862;

  L931:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == MULT && 1)
    goto L932;
  x1 = XEXP (x0, 0);
  goto L862;

  L932:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != DImode)
    {
      x1 = XEXP (x0, 0);
      goto L862;
    }
  switch (GET_CODE (x4))
    {
    default:
      break;
    case ZERO_EXTEND:
      goto L933;
    case SIGN_EXTEND:
      goto L956;
    }
  x1 = XEXP (x0, 0);
  goto L862;

  L933:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L934;
    }
  x1 = XEXP (x0, 0);
  goto L862;

  L934:
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode && GET_CODE (x4) == ZERO_EXTEND && 1)
    goto L935;
  x1 = XEXP (x0, 0);
  goto L862;

  L935:
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L936;
    }
  x1 = XEXP (x0, 0);
  goto L862;

  L936:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 32 && pnum_clobbers != 0 && 1)
    if (TARGET_WIDE_MULTIPLY)
      {
	*pnum_clobbers = 1;
	return 170;
      }
  x1 = XEXP (x0, 0);
  goto L862;

  L956:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L957;
    }
  x1 = XEXP (x0, 0);
  goto L862;

  L957:
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode && GET_CODE (x4) == SIGN_EXTEND && 1)
    goto L958;
  x1 = XEXP (x0, 0);
  goto L862;

  L958:
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L959;
    }
  x1 = XEXP (x0, 0);
  goto L862;

  L959:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 32 && pnum_clobbers != 0 && 1)
    if (TARGET_WIDE_MULTIPLY)
      {
	*pnum_clobbers = 1;
	return 171;
      }
  x1 = XEXP (x0, 0);
  goto L862;

  L863:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != SImode)
    {
      x1 = XEXP (x0, 0);
      goto L1788;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case MINUS:
      goto L864;
    case AND:
      goto L1017;
    case IOR:
      goto L1032;
    case XOR:
      goto L1316;
    case NEG:
      goto L1066;
    case NOT:
      goto L1183;
    case ASHIFT:
      goto L1205;
    case ASHIFTRT:
      goto L1235;
    case LSHIFTRT:
      goto L1265;
    case ROTATE:
      goto L1280;
    case ROTATERT:
      goto L1295;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L864:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L865;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L865:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      ro[2] = x2;
      if (ix86_binary_operator_ok (MINUS, SImode, operands))
	return 156;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1017:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1018;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1018:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      ro[2] = x2;
      return 184;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1032:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1033;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1033:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      ro[2] = x2;
      return 187;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1316:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    {
      x1 = XEXP (x0, 0);
      goto L1788;
    }
  if (GET_CODE (x2) == ASHIFT && 1)
    goto L1317;
  if (nonimmediate_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1324;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1317:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 1 && 1)
    goto L1318;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1318:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1319;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1319:
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_USE_BIT_TEST && GET_CODE (operands[1]) != CONST_INT)
	return 251;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1324:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == ASHIFT && 1)
    goto L1325;
  if (general_operand (x2, SImode))
    {
      ro[2] = x2;
      return 190;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1325:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 1 && 1)
    goto L1326;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1326:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      if (TARGET_USE_BIT_TEST && GET_CODE (operands[2]) != CONST_INT)
	return 252;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1066:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      ro[1] = x2;
      return 194;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1183:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      ro[1] = x2;
      return 221;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1205:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1206;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1206:
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      ro[2] = x2;
      return 227;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1235:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1236;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1236:
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      ro[2] = x2;
      return 234;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1265:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1266;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1266:
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      ro[2] = x2;
      return 241;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1280:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1281;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1281:
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      ro[2] = x2;
      return 244;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1295:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1296;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1296:
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      ro[2] = x2;
      return 247;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L340:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, HImode))
    {
      ro[1] = x1;
      if (TARGET_PUSH_MEMORY)
	return 53;
      }
  L343:
  if (nonmemory_operand (x1, HImode))
    goto L347;
  x1 = XEXP (x0, 0);
  goto L350;

  L347:
  ro[1] = x1;
  if (!TARGET_PUSH_MEMORY && TARGET_MOVE)
    return 54;
  L348:
  ro[1] = x1;
  if (!TARGET_PUSH_MEMORY && !TARGET_MOVE)
    return 55;
  x1 = XEXP (x0, 0);
  goto L350;

  L351:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, HImode))
    {
      ro[1] = x1;
      if ((!TARGET_MOVE || GET_CODE (operands[0]) != MEM) || (GET_CODE (operands[1]) != MEM))
	return 57;
      }
  x1 = XEXP (x0, 0);
  goto L516;

  L517:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != HImode)
    {
      x1 = XEXP (x0, 0);
      goto L824;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case ZERO_EXTEND:
      goto L518;
    case SIGN_EXTEND:
      goto L562;
    case MULT:
      goto L889;
    }
  x1 = XEXP (x0, 0);
  goto L824;

  L518:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      ro[1] = x2;
      return 90;
    }
  x1 = XEXP (x0, 0);
  goto L824;

  L562:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      ro[1] = x2;
      return 101;
    }
  x1 = XEXP (x0, 0);
  goto L824;

  L889:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != HImode)
    {
      x1 = XEXP (x0, 0);
      goto L824;
    }
  switch (GET_CODE (x2))
    {
    default:
      break;
    case ZERO_EXTEND:
      goto L890;
    case SIGN_EXTEND:
      goto L897;
    case SUBREG:
    case REG:
    case MEM:
      if (nonimmediate_operand (x2, HImode))
	{
	  ro[1] = x2;
	  goto L880;
	}
    }
  x1 = XEXP (x0, 0);
  goto L824;

  L890:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      ro[1] = x3;
      goto L891;
    }
  x1 = XEXP (x0, 0);
  goto L824;

  L891:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode && GET_CODE (x2) == ZERO_EXTEND && 1)
    goto L892;
  x1 = XEXP (x0, 0);
  goto L824;

  L892:
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      ro[2] = x3;
      return 166;
    }
  x1 = XEXP (x0, 0);
  goto L824;

  L897:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      ro[1] = x3;
      goto L898;
    }
  x1 = XEXP (x0, 0);
  goto L824;

  L898:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode && GET_CODE (x2) == SIGN_EXTEND && 1)
    goto L899;
  x1 = XEXP (x0, 0);
  goto L824;

  L899:
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, QImode))
    {
      ro[2] = x3;
      return 167;
    }
  x1 = XEXP (x0, 0);
  goto L824;

  L880:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      ro[2] = x2;
      return 164;
    }
  x1 = XEXP (x0, 0);
  goto L824;

  L825:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != HImode)
    {
      x1 = XEXP (x0, 0);
      goto L1788;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case PLUS:
      goto L826;
    case MINUS:
      goto L869;
    case AND:
      goto L1022;
    case IOR:
      goto L1037;
    case XOR:
      goto L1052;
    case NEG:
      goto L1070;
    case NOT:
      goto L1187;
    case ASHIFT:
      goto L1210;
    case ASHIFTRT:
      goto L1240;
    case LSHIFTRT:
      goto L1270;
    case ROTATE:
      goto L1285;
    case ROTATERT:
      goto L1300;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L826:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      ro[1] = x2;
      goto L827;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L827:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      ro[2] = x2;
      if (ix86_binary_operator_ok (PLUS, HImode, operands))
	return 147;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L869:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      ro[1] = x2;
      goto L870;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L870:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      ro[2] = x2;
      if (ix86_binary_operator_ok (MINUS, HImode, operands))
	return 158;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1022:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      ro[1] = x2;
      goto L1023;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1023:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      ro[2] = x2;
      return 185;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1037:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      ro[1] = x2;
      goto L1038;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1038:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      ro[2] = x2;
      return 188;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1052:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      ro[1] = x2;
      goto L1053;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1053:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      ro[2] = x2;
      return 191;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1070:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      ro[1] = x2;
      return 195;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1187:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      ro[1] = x2;
      return 222;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1210:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      ro[1] = x2;
      goto L1211;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1211:
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, HImode))
    {
      ro[2] = x2;
      return 228;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1240:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      ro[1] = x2;
      goto L1241;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1241:
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, HImode))
    {
      ro[2] = x2;
      return 235;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1270:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      ro[1] = x2;
      goto L1271;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1271:
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, HImode))
    {
      ro[2] = x2;
      return 242;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1285:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      ro[1] = x2;
      goto L1286;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1286:
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, HImode))
    {
      ro[2] = x2;
      return 245;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1300:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, HImode))
    {
      ro[1] = x2;
      goto L1301;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1301:
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, HImode))
    {
      ro[2] = x2;
      return 248;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L361:
  x1 = XEXP (x0, 1);
  if (register_operand (x1, QImode))
    goto L365;
  if (GET_CODE (x1) == CONST_INT && 1)
    {
      ro[1] = x1;
      return 60;
    }
  x1 = XEXP (x0, 0);
  goto L368;

  L365:
  ro[1] = x1;
  if (!TARGET_MOVE)
    return 61;
  L366:
  ro[1] = x1;
  if (TARGET_MOVE)
    return 62;
  x1 = XEXP (x0, 0);
  goto L368;

  L830:
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    default:
      break;
    case QImode:
      switch (GET_CODE (x1))
	{
	default:
	  break;
	case PLUS:
	  goto L831;
	case MINUS:
	  goto L874;
	case AND:
	  goto L1027;
	case IOR:
	  goto L1042;
	case XOR:
	  goto L1057;
	case NEG:
	  goto L1074;
	case NOT:
	  goto L1191;
	case ASHIFT:
	  goto L1215;
	case ASHIFTRT:
	  goto L1245;
	case LSHIFTRT:
	  goto L1275;
	case ROTATE:
	  goto L1290;
	case ROTATERT:
	  goto L1305;
	}
    }
  if (general_operand (x1, QImode))
    {
      ro[1] = x1;
      if ((!TARGET_MOVE || GET_CODE (operands[0]) != MEM) || (GET_CODE (operands[1]) != MEM))
	return 64;
      }
  x1 = XEXP (x0, 0);
  goto L961;

  L831:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      ro[1] = x2;
      goto L832;
    }
  x1 = XEXP (x0, 0);
  goto L961;

  L832:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      ro[2] = x2;
      if (ix86_binary_operator_ok (PLUS, QImode, operands))
	return 149;
      }
  x1 = XEXP (x0, 0);
  goto L961;

  L874:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      ro[1] = x2;
      goto L875;
    }
  x1 = XEXP (x0, 0);
  goto L961;

  L875:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      ro[2] = x2;
      if (ix86_binary_operator_ok (MINUS, QImode, operands))
	return 160;
      }
  x1 = XEXP (x0, 0);
  goto L961;

  L1027:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      ro[1] = x2;
      goto L1028;
    }
  x1 = XEXP (x0, 0);
  goto L961;

  L1028:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      ro[2] = x2;
      return 186;
    }
  x1 = XEXP (x0, 0);
  goto L961;

  L1042:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      ro[1] = x2;
      goto L1043;
    }
  x1 = XEXP (x0, 0);
  goto L961;

  L1043:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      ro[2] = x2;
      return 189;
    }
  x1 = XEXP (x0, 0);
  goto L961;

  L1057:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      ro[1] = x2;
      goto L1058;
    }
  x1 = XEXP (x0, 0);
  goto L961;

  L1058:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      ro[2] = x2;
      return 192;
    }
  x1 = XEXP (x0, 0);
  goto L961;

  L1074:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      ro[1] = x2;
      return 196;
    }
  x1 = XEXP (x0, 0);
  goto L961;

  L1191:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      ro[1] = x2;
      return 223;
    }
  x1 = XEXP (x0, 0);
  goto L961;

  L1215:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      ro[1] = x2;
      goto L1216;
    }
  x1 = XEXP (x0, 0);
  goto L961;

  L1216:
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      ro[2] = x2;
      return 229;
    }
  x1 = XEXP (x0, 0);
  goto L961;

  L1245:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      ro[1] = x2;
      goto L1246;
    }
  x1 = XEXP (x0, 0);
  goto L961;

  L1246:
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      ro[2] = x2;
      return 236;
    }
  x1 = XEXP (x0, 0);
  goto L961;

  L1275:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      ro[1] = x2;
      goto L1276;
    }
  x1 = XEXP (x0, 0);
  goto L961;

  L1276:
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      ro[2] = x2;
      return 243;
    }
  x1 = XEXP (x0, 0);
  goto L961;

  L1290:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      ro[1] = x2;
      goto L1291;
    }
  x1 = XEXP (x0, 0);
  goto L961;

  L1291:
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      ro[2] = x2;
      return 246;
    }
  x1 = XEXP (x0, 0);
  goto L961;

  L1305:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, QImode))
    {
      ro[1] = x2;
      goto L1306;
    }
  x1 = XEXP (x0, 0);
  goto L961;

  L1306:
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, QImode))
    {
      ro[2] = x2;
      return 249;
    }
  x1 = XEXP (x0, 0);
  goto L961;

  L962:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != QImode)
    {
      x1 = XEXP (x0, 0);
      goto L1788;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case DIV:
      goto L963;
    case UDIV:
      goto L968;
    case EQ:
      goto L1348;
    case NE:
      goto L1353;
    case GT:
      goto L1358;
    case GTU:
      goto L1363;
    case LT:
      goto L1368;
    case LTU:
      goto L1373;
    case GE:
      goto L1378;
    case GEU:
      goto L1383;
    case LE:
      goto L1388;
    case LEU:
      goto L1393;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L963:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      ro[1] = x2;
      goto L964;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L964:
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, QImode))
    {
      ro[2] = x2;
      return 175;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L968:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      ro[1] = x2;
      goto L969;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L969:
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, QImode))
    {
      ro[2] = x2;
      return 176;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1348:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0 && 1)
    goto L1349;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1349:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    return 257;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1353:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0 && 1)
    goto L1354;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1354:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    return 259;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1358:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0 && 1)
    goto L1359;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1359:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    return 261;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1363:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0 && 1)
    goto L1364;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1364:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    return 263;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1368:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0 && 1)
    goto L1369;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1369:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    return 265;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1373:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0 && 1)
    goto L1374;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1374:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    return 267;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1378:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0 && 1)
    goto L1379;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1379:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    return 269;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1383:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0 && 1)
    goto L1384;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1384:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    return 271;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1388:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0 && 1)
    goto L1389;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1389:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    return 273;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1393:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CC0 && 1)
    goto L1394;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1394:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    return 275;
  x1 = XEXP (x0, 0);
  goto L1788;

  L376:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SFmode))
    goto L386;
  x1 = XEXP (x0, 0);
  goto L395;

  L386:
  ro[1] = x1;
  if (!TARGET_MOVE)
    return 68;
  L387:
  if (pnum_clobbers != 0 && 1)
    {
      ro[1] = x1;
      *pnum_clobbers = 1;
      return 69;
    }
  x1 = XEXP (x0, 0);
  goto L395;

  L396:
  x1 = XEXP (x0, 1);
  if (pnum_clobbers != 0 && memory_operand (x1, SFmode))
    {
      ro[1] = x1;
      *pnum_clobbers = 1;
      return 70;
    }
  x1 = XEXP (x0, 0);
  goto L398;

  L598:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode && GET_CODE (x1) == FLOAT_TRUNCATE && 1)
    goto L599;
  if (general_operand (x1, SFmode))
    {
      ro[1] = x1;
      if ((!TARGET_MOVE || GET_CODE (operands[0]) != MEM) || (GET_CODE (operands[1]) != MEM))
	return 71;
      }
  x1 = XEXP (x0, 0);
  goto L757;

  L599:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, XFmode))
    {
      ro[1] = x2;
      if (TARGET_80387)
	return 111;
      }
  x1 = XEXP (x0, 0);
  goto L757;

  L758:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != SFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1788;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case FLOAT:
      goto L759;
    case NEG:
      goto L1078;
    case ABS:
      goto L1100;
    case SQRT:
      goto L1122;
    case UNSPEC:
      if (XINT (x1, 1) == 1 && XVECLEN (x1, 0) == 1 && 1)
	goto L1153;
      if (XINT (x1, 1) == 2 && XVECLEN (x1, 0) == 1 && 1)
	goto L1170;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L759:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case DImode:
      if (nonimmediate_operand (x2, DImode))
	{
	  ro[1] = x2;
	  if (TARGET_80387)
	    return 136;
	  }
      break;
    case SImode:
      if (nonimmediate_operand (x2, SImode))
	{
	  ro[1] = x2;
	  if (TARGET_80387)
	    return 139;
	  }
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1078:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_80387)
	return 197;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1100:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_80387)
	return 202;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1122:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (! TARGET_NO_FANCY_MATH_387 && TARGET_80387)
	return 207;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1153:
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (! TARGET_NO_FANCY_MATH_387 && TARGET_80387 && flag_fast_math)
	return 214;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1170:
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (! TARGET_NO_FANCY_MATH_387 && TARGET_80387 && flag_fast_math)
	return 218;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L409:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DFmode))
    goto L421;
  x1 = XEXP (x0, 0);
  goto L432;

  L421:
  ro[1] = x1;
  if (!TARGET_MOVE)
    return 74;
  L422:
  if (pnum_clobbers != 0 && 1)
    {
      ro[1] = x1;
      *pnum_clobbers = 2;
      return 75;
    }
  x1 = XEXP (x0, 0);
  goto L432;

  L433:
  x1 = XEXP (x0, 1);
  if (pnum_clobbers != 0 && memory_operand (x1, DFmode))
    {
      ro[1] = x1;
      *pnum_clobbers = 2;
      return 76;
    }
  x1 = XEXP (x0, 0);
  goto L435;

  L579:
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    default:
      break;
    case DFmode:
      switch (GET_CODE (x1))
	{
	default:
	  break;
	case FLOAT_EXTEND:
	  goto L580;
	case FLOAT_TRUNCATE:
	  goto L603;
	}
    }
  if (general_operand (x1, DFmode))
    {
      ro[1] = x1;
      if ((!TARGET_MOVE || GET_CODE (operands[0]) != MEM)
   || (GET_CODE (operands[1]) != MEM))
	return 77;
      }
  x1 = XEXP (x0, 0);
  goto L753;

  L580:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_80387)
	return 106;
      }
  x1 = XEXP (x0, 0);
  goto L753;

  L603:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, XFmode))
    {
      ro[1] = x2;
      if (TARGET_80387)
	return 112;
      }
  x1 = XEXP (x0, 0);
  goto L753;

  L754:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != DFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1788;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case FLOAT:
      goto L755;
    case NEG:
      goto L1086;
    case ABS:
      goto L1108;
    case SQRT:
      goto L1130;
    case UNSPEC:
      if (XINT (x1, 1) == 1 && XVECLEN (x1, 0) == 1 && 1)
	goto L1157;
      if (XINT (x1, 1) == 2 && XVECLEN (x1, 0) == 1 && 1)
	goto L1174;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L755:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case DImode:
      if (nonimmediate_operand (x2, DImode))
	{
	  ro[1] = x2;
	  if (TARGET_80387)
	    return 135;
	  }
      break;
    case SImode:
      if (nonimmediate_operand (x2, SImode))
	{
	  ro[1] = x2;
	  if (TARGET_80387)
	    return 137;
	  }
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1086:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1788;
    }
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L1087;
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_80387)
	return 198;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1087:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      ro[1] = x3;
      if (TARGET_80387)
	return 199;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1108:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1788;
    }
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L1109;
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_80387)
	return 203;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1109:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      ro[1] = x3;
      if (TARGET_80387)
	return 204;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1130:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1788;
    }
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L1131;
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (! TARGET_NO_FANCY_MATH_387 && TARGET_80387
   && (TARGET_IEEE_FP || flag_fast_math) )
	return 208;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1131:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      ro[1] = x3;
      if (! TARGET_NO_FANCY_MATH_387 && TARGET_80387)
	return 209;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1157:
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != DFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1788;
    }
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L1158;
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (! TARGET_NO_FANCY_MATH_387 && TARGET_80387 && flag_fast_math)
	return 213;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1158:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      ro[1] = x3;
      if (! TARGET_NO_FANCY_MATH_387 && TARGET_80387 && flag_fast_math)
	return 215;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1174:
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) != DFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1788;
    }
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L1175;
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (! TARGET_NO_FANCY_MATH_387 && TARGET_80387 && flag_fast_math)
	return 217;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1175:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      ro[1] = x3;
      if (! TARGET_NO_FANCY_MATH_387 && TARGET_80387 && flag_fast_math)
	return 219;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L446:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, XFmode))
    goto L458;
  x1 = XEXP (x0, 0);
  goto L469;

  L458:
  ro[1] = x1;
  if (!TARGET_MOVE)
    return 80;
  L459:
  if (pnum_clobbers != 0 && 1)
    {
      ro[1] = x1;
      *pnum_clobbers = 2;
      return 81;
    }
  x1 = XEXP (x0, 0);
  goto L469;

  L470:
  x1 = XEXP (x0, 1);
  if (pnum_clobbers != 0 && memory_operand (x1, XFmode))
    {
      ro[1] = x1;
      *pnum_clobbers = 2;
      return 82;
    }
  x1 = XEXP (x0, 0);
  goto L472;

  L583:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == XFmode && GET_CODE (x1) == FLOAT_EXTEND && 1)
    goto L584;
  if (general_operand (x1, XFmode))
    {
      ro[1] = x1;
      if ((!TARGET_MOVE || GET_CODE (operands[0]) != MEM)
   || (GET_CODE (operands[1]) != MEM))
	return 83;
      }
  x1 = XEXP (x0, 0);
  goto L749;

  L584:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case DFmode:
      if (nonimmediate_operand (x2, DFmode))
	{
	  ro[1] = x2;
	  if (TARGET_80387)
	    return 107;
	  }
      break;
    case SFmode:
      if (nonimmediate_operand (x2, SFmode))
	{
	  ro[1] = x2;
	  if (TARGET_80387)
	    return 108;
	  }
    }
  x1 = XEXP (x0, 0);
  goto L749;

  L750:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != XFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1788;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case FLOAT:
      goto L751;
    case NEG:
      goto L1095;
    case ABS:
      goto L1117;
    case SQRT:
      goto L1139;
    case UNSPEC:
      if (XINT (x1, 1) == 1 && XVECLEN (x1, 0) == 1 && 1)
	goto L1162;
      if (XINT (x1, 1) == 2 && XVECLEN (x1, 0) == 1 && 1)
	goto L1179;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L751:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case DImode:
      if (nonimmediate_operand (x2, DImode))
	{
	  ro[1] = x2;
	  if (TARGET_80387)
	    return 134;
	  }
      break;
    case SImode:
      if (nonimmediate_operand (x2, SImode))
	{
	  ro[1] = x2;
	  if (TARGET_80387)
	    return 138;
	  }
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1095:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != XFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1788;
    }
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L1096;
  if (register_operand (x2, XFmode))
    {
      ro[1] = x2;
      if (TARGET_80387)
	return 200;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1096:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      ro[1] = x3;
      if (TARGET_80387)
	return 201;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1117:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != XFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1788;
    }
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L1118;
  if (register_operand (x2, XFmode))
    {
      ro[1] = x2;
      if (TARGET_80387)
	return 205;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1118:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      ro[1] = x3;
      if (TARGET_80387)
	return 206;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1139:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != XFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1788;
    }
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L1140;
  if (register_operand (x2, XFmode))
    {
      ro[1] = x2;
      if (! TARGET_NO_FANCY_MATH_387 && TARGET_80387 
   && (TARGET_IEEE_FP || flag_fast_math) )
	return 210;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1140:
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    default:
      break;
    case DFmode:
      if (register_operand (x3, DFmode))
	{
	  ro[1] = x3;
	  if (! TARGET_NO_FANCY_MATH_387 && TARGET_80387)
	    return 211;
	  }
      break;
    case SFmode:
      if (register_operand (x3, SFmode))
	{
	  ro[1] = x3;
	  if (! TARGET_NO_FANCY_MATH_387 && TARGET_80387)
	    return 212;
	  }
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1162:
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      ro[1] = x2;
      if (! TARGET_NO_FANCY_MATH_387 && TARGET_80387 && flag_fast_math)
	return 216;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1179:
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, XFmode))
    {
      ro[1] = x2;
      if (! TARGET_NO_FANCY_MATH_387 && TARGET_80387 && flag_fast_math)
	return 220;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L491:
  x1 = XEXP (x0, 1);
  if (pnum_clobbers != 0 && general_operand (x1, DImode))
    {
      ro[1] = x1;
      *pnum_clobbers = 2;
      return 85;
    }
  x1 = XEXP (x0, 0);
  goto L501;

  L812:
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    default:
      break;
    case DImode:
      switch (GET_CODE (x1))
	{
	default:
	  break;
	case PLUS:
	  goto L813;
	case MINUS:
	  goto L845;
	case NEG:
	  goto L1062;
	}
    }
  if (pnum_clobbers != 0 && general_operand (x1, DImode))
    {
      ro[1] = x1;
      *pnum_clobbers = 2;
      return 86;
    }
  x1 = XEXP (x0, 0);
  goto L548;

  L813:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L814;
    }
  x1 = XEXP (x0, 0);
  goto L548;

  L814:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && general_operand (x2, DImode))
    {
      ro[2] = x2;
      *pnum_clobbers = 1;
      return 142;
    }
  x1 = XEXP (x0, 0);
  goto L548;

  L845:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L846;
    }
  x1 = XEXP (x0, 0);
  goto L548;

  L846:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == ZERO_EXTEND && 1)
    goto L847;
  if (pnum_clobbers != 0 && general_operand (x2, DImode))
    {
      ro[2] = x2;
      *pnum_clobbers = 1;
      return 154;
    }
  x1 = XEXP (x0, 0);
  goto L548;

  L847:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && pnum_clobbers != 0 && general_operand (x3, SImode))
    {
      ro[2] = x3;
      *pnum_clobbers = 1;
      return 153;
    }
  x1 = XEXP (x0, 0);
  goto L548;

  L1062:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, DImode))
    {
      ro[1] = x2;
      return 193;
    }
  x1 = XEXP (x0, 0);
  goto L548;

  L549:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != DImode)
    {
      x1 = XEXP (x0, 0);
      goto L552;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case ZERO_EXTEND:
      goto L550;
    case PLUS:
      goto L799;
    }
  x1 = XEXP (x0, 0);
  goto L552;

  L550:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      return 98;
    }
  x1 = XEXP (x0, 0);
  goto L552;

  L799:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == ZERO_EXTEND && 1)
    goto L800;
  if (general_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L785;
    }
  x1 = XEXP (x0, 0);
  goto L552;

  L800:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && general_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L801;
    }
  x1 = XEXP (x0, 0);
  goto L552;

  L801:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && general_operand (x2, DImode))
    {
      ro[1] = x2;
      *pnum_clobbers = 1;
      return 141;
    }
  x1 = XEXP (x0, 0);
  goto L552;

  L785:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == ZERO_EXTEND && 1)
    goto L786;
  x1 = XEXP (x0, 0);
  goto L552;

  L786:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && pnum_clobbers != 0 && general_operand (x3, SImode))
    {
      ro[2] = x3;
      *pnum_clobbers = 1;
      return 140;
    }
  x1 = XEXP (x0, 0);
  goto L552;

  L553:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != DImode)
    {
      x1 = XEXP (x0, 0);
      goto L1218;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case SIGN_EXTEND:
      goto L554;
    case MULT:
      goto L903;
    case ASHIFT:
      goto L1195;
    case ASHIFTRT:
      goto L1225;
    }
  x1 = XEXP (x0, 0);
  goto L1218;

  L554:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      return 99;
    }
  x1 = XEXP (x0, 0);
  goto L1218;

  L903:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DImode)
    {
      x1 = XEXP (x0, 0);
      goto L1218;
    }
  switch (GET_CODE (x2))
    {
    default:
      break;
    case ZERO_EXTEND:
      goto L904;
    case SIGN_EXTEND:
      goto L911;
    }
  x1 = XEXP (x0, 0);
  goto L1218;

  L904:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L905;
    }
  x1 = XEXP (x0, 0);
  goto L1218;

  L905:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == ZERO_EXTEND && 1)
    goto L906;
  x1 = XEXP (x0, 0);
  goto L1218;

  L906:
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      ro[2] = x3;
      if (TARGET_WIDE_MULTIPLY)
	return 168;
      }
  x1 = XEXP (x0, 0);
  goto L1218;

  L911:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L912;
    }
  x1 = XEXP (x0, 0);
  goto L1218;

  L912:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == SIGN_EXTEND && 1)
    goto L913;
  x1 = XEXP (x0, 0);
  goto L1218;

  L913:
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      ro[2] = x3;
      if (TARGET_WIDE_MULTIPLY)
	return 169;
      }
  x1 = XEXP (x0, 0);
  goto L1218;

  L1195:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1201;
    }
  x1 = XEXP (x0, 0);
  goto L1218;

  L1201:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      ro[2] = x2;
      return 226;
    }
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[2] = x2;
      if (CONST_OK_FOR_LETTER_P (INTVAL (operands[2]), 'J'))
	return 225;
      }
  x1 = XEXP (x0, 0);
  goto L1218;

  L1225:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1231;
    }
  x1 = XEXP (x0, 0);
  goto L1218;

  L1231:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      ro[2] = x2;
      return 233;
    }
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[2] = x2;
      if (CONST_OK_FOR_LETTER_P (INTVAL (operands[2]), 'J'))
	return 232;
      }
  x1 = XEXP (x0, 0);
  goto L1218;

  L1219:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != DImode)
    {
      x1 = XEXP (x0, 0);
      goto L1253;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case ASHIFT:
      goto L1220;
    case LSHIFTRT:
      goto L1250;
    }
  x1 = XEXP (x0, 0);
  goto L1253;

  L1220:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1221;
    }
  x1 = XEXP (x0, 0);
  goto L1253;

  L1221:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 32 && 1)
    return 231;
  x1 = XEXP (x0, 0);
  goto L1253;

  L1250:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1251;
    }
  x1 = XEXP (x0, 0);
  goto L1253;

  L1251:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 32 && 1)
    return 238;
  x1 = XEXP (x0, 0);
  goto L1253;

  L1254:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode && GET_CODE (x1) == LSHIFTRT && 1)
    goto L1255;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1255:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1261;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1261:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, QImode))
    {
      ro[2] = x2;
      return 240;
    }
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[2] = x2;
      if (CONST_OK_FOR_LETTER_P (INTVAL (operands[2]), 'J'))
	return 239;
      }
  x1 = XEXP (x0, 0);
  goto L1788;
 L2:
  tem = recog_1 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  x1 = XEXP (x0, 0);
  goto L1788;

  L354:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case HImode:
      if (general_operand (x2, HImode))
	{
	  ro[0] = x2;
	  goto L355;
	}
      break;
    case QImode:
      if (nonimmediate_operand (x2, QImode))
	{
	  ro[0] = x2;
	  goto L373;
	}
    }
  goto L1788;

  L355:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, HImode))
    {
      ro[1] = x1;
      if ((!TARGET_MOVE || GET_CODE (operands[0]) != MEM) || (GET_CODE (operands[1]) != MEM))
	return 59;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L373:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, QImode))
    {
      ro[1] = x1;
      if ((!TARGET_MOVE || GET_CODE (operands[0]) != MEM) || (GET_CODE (operands[1]) != MEM))
	return 66;
      }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1722:
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    default:
      break;
    case SImode:
      if (GET_CODE (x1) == MINUS && 1)
	goto L1723;
      if (nonimmediate_operand (x1, SImode))
	{
	  ro[0] = x1;
	  return 307;
	}
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case IF_THEN_ELSE:
      goto L1398;
    case LABEL_REF:
      goto L1578;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1723:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 3 && 1)
    goto L1724;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1724:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L1725;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1725:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == PLUS && 1)
    goto L1726;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1726:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode && GET_CODE (x4) == MULT && 1)
    goto L1727;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1727:
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[0] = x5;
      goto L1728;
    }
  x1 = XEXP (x0, 0);
  goto L1788;

  L1728:
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT && XWINT (x5, 0) == 4 && 1)
    goto L1729;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1729:
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == LABEL_REF && 1)
    goto L1730;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1730:
  x5 = XEXP (x4, 0);
  if (pnum_clobbers != 0 && 1)
    {
      ro[1] = x5;
      *pnum_clobbers = 1;
      return 318;
    }
  x1 = XEXP (x0, 0);
  goto L1788;
 L1398:
  tem = recog_2 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  x1 = XEXP (x0, 0);
  goto L1788;

  L1578:
  x2 = XEXP (x1, 0);
  ro[0] = x2;
  return 306;

  L1789:
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CALL && 1)
    goto L1790;
  x1 = XEXP (x0, 0);
  goto L1817;

  L1790:
  x2 = XEXP (x1, 0);
  if (call_insn_operand (x2, QImode))
    {
      ro[1] = x2;
      goto L1791;
    }
  L1795:
  if (GET_MODE (x2) == QImode && GET_CODE (x2) == MEM && 1)
    goto L1796;
  x1 = XEXP (x0, 0);
  goto L1817;

  L1791:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      ro[2] = x2;
      return 330;
    }
  x2 = XEXP (x1, 0);
  goto L1795;

  L1796:
  x3 = XEXP (x2, 0);
  if (symbolic_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1797;
    }
  x1 = XEXP (x0, 0);
  goto L1817;

  L1797:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      ro[2] = x2;
      if (!HALF_PIC_P ())
	return 331;
      }
  x1 = XEXP (x0, 0);
  goto L1817;

  L1818:
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) != UNSPEC_VOLATILE)
    {
      x1 = XEXP (x0, 0);
    goto L1928;
    }
  if (XINT (x1, 1) == 1 && XVECLEN (x1, 0) == 1 && 1)
    goto L1819;
  if (XINT (x1, 1) == 2 && XVECLEN (x1, 0) == 1 && 1)
    goto L1829;
  x1 = XEXP (x0, 0);
  goto L1928;

  L1819:
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L1820;
  x1 = XEXP (x0, 0);
  goto L1928;

  L1820:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L1821;
  x1 = XEXP (x0, 0);
  goto L1928;

  L1821:
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == PLUS && 1)
    goto L1822;
  x1 = XEXP (x0, 0);
  goto L1928;

  L1822:
  x4 = XEXP (x3, 0);
  if (symbolic_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L1823;
    }
  x1 = XEXP (x0, 0);
  goto L1928;

  L1823:
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SImode && GET_CODE (x4) == MINUS && 1)
    goto L1824;
  x1 = XEXP (x0, 0);
  goto L1928;

  L1824:
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) == PC && 1)
    goto L1825;
  x1 = XEXP (x0, 0);
  goto L1928;

  L1825:
  x5 = XEXP (x4, 1);
  ro[2] = x5;
  return 340;

  L1829:
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L1830;
  x1 = XEXP (x0, 0);
  goto L1928;

  L1830:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == PC && 1)
    goto L1831;
  x1 = XEXP (x0, 0);
  goto L1928;

  L1831:
  x3 = XEXP (x2, 1);
  ro[1] = x3;
  return 341;

  L1929:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != SImode)
    {
      x1 = XEXP (x0, 0);
      goto L2025;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case PLUS:
      goto L1930;
    case UNSPEC:
      if (XINT (x1, 1) == 0 && XVECLEN (x1, 0) == 2 && 1)
	goto L2068;
    }
  x1 = XEXP (x0, 0);
  goto L2025;

  L1930:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == FFS && 1)
    goto L1931;
  x1 = XEXP (x0, 0);
  goto L2025;

  L1931:
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1932;
    }
  x1 = XEXP (x0, 0);
  goto L2025;

  L1932:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == -1 && 1)
    return 355;
  x1 = XEXP (x0, 0);
  goto L2025;

  L2068:
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == BLKmode && GET_CODE (x2) == MEM && 1)
    goto L2069;
  x1 = XEXP (x0, 0);
  goto L2025;

  L2069:
  x3 = XEXP (x2, 0);
  if (address_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2070;
    }
  x1 = XEXP (x0, 0);
  goto L2025;

  L2070:
  x2 = XVECEXP (x1, 0, 1);
  if (pnum_clobbers != 0 && immediate_operand (x2, SImode))
    {
      ro[2] = x2;
      if (optimize > 1)
	{
	  *pnum_clobbers = 1;
	  return 382;
	}
      }
  x1 = XEXP (x0, 0);
  goto L2025;

  L2026:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode && GET_CODE (x1) == IF_THEN_ELSE && 1)
    goto L2027;
  x1 = XEXP (x0, 0);
  goto L1841;

  L2027:
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      ro[1] = x2;
      goto L2028;
    }
  x1 = XEXP (x0, 0);
  goto L1841;

  L2028:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0 && 1)
    goto L2029;
  x1 = XEXP (x0, 0);
  goto L1841;

  L2029:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2030;
  x1 = XEXP (x0, 0);
  goto L1841;

  L2030:
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L2031;
    }
  x1 = XEXP (x0, 0);
  goto L1841;

  L2031:
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, SImode))
    {
      ro[3] = x2;
      if (TARGET_CMOVE)
	return 375;
      }
  x1 = XEXP (x0, 0);
  goto L1841;

  L1842:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode && GET_CODE (x1) == REG && XINT (x1, 0) == 6 && pnum_clobbers != 0 && 1)
    {
      *pnum_clobbers = 1;
      return 344;
    }
  goto ret0;

  L1935:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode && GET_CODE (x1) == PLUS && 1)
    goto L1936;
  x1 = XEXP (x0, 0);
  goto L2033;

  L1936:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == HImode && GET_CODE (x2) == FFS && 1)
    goto L1937;
  x1 = XEXP (x0, 0);
  goto L2033;

  L1937:
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1938;
    }
  x1 = XEXP (x0, 0);
  goto L2033;

  L1938:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == -1 && 1)
    return 357;
  x1 = XEXP (x0, 0);
  goto L2033;

  L2034:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode && GET_CODE (x1) == IF_THEN_ELSE && 1)
    goto L2035;
  goto ret0;

  L2035:
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      ro[1] = x2;
      goto L2036;
    }
  goto ret0;

  L2036:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0 && 1)
    goto L2037;
  goto ret0;

  L2037:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2038;
  goto ret0;

  L2038:
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, HImode))
    {
      ro[2] = x2;
      goto L2039;
    }
  goto ret0;

  L2039:
  x2 = XEXP (x1, 2);
  if (nonimmediate_operand (x2, HImode))
    {
      ro[3] = x2;
      if (TARGET_CMOVE)
	return 376;
      }
  goto ret0;

  L1941:
  x1 = XEXP (x0, 1);
  if (binary_387_op (x1, DFmode))
    {
      ro[3] = x1;
      goto L1947;
    }
  x1 = XEXP (x0, 0);
  goto L2049;

  L1947:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DFmode)
    {
      x1 = XEXP (x0, 0);
      goto L2049;
    }
  switch (GET_CODE (x2))
    {
    default:
      break;
    case FLOAT:
      goto L1948;
    case FLOAT_EXTEND:
      goto L1983;
    case SUBREG:
    case REG:
    case MEM:
      if (nonimmediate_operand (x2, DFmode))
	{
	  ro[1] = x2;
	  goto L1943;
	}
    }
  L1988:
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L1989;
    }
  x1 = XEXP (x0, 0);
  goto L2049;

  L1948:
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1949;
    }
  x1 = XEXP (x0, 0);
  goto L2049;

  L1949:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_80387)
	return 359;
      }
  x1 = XEXP (x0, 0);
  goto L2049;

  L1983:
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      ro[1] = x3;
      goto L1984;
    }
  x1 = XEXP (x0, 0);
  goto L2049;

  L1984:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_80387)
	return 365;
      }
  x1 = XEXP (x0, 0);
  goto L2049;

  L1943:
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_80387)
	return 358;
      }
  x2 = XEXP (x1, 0);
  goto L1988;

  L1989:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DFmode)
    {
      x1 = XEXP (x0, 0);
      goto L2049;
    }
  switch (GET_CODE (x2))
    {
    default:
      break;
    case FLOAT:
      goto L1990;
    case FLOAT_EXTEND:
      goto L1996;
    }
  x1 = XEXP (x0, 0);
  goto L2049;

  L1990:
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      ro[2] = x3;
      if (TARGET_80387)
	return 366;
      }
  x1 = XEXP (x0, 0);
  goto L2049;

  L1996:
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      ro[2] = x3;
      if (TARGET_80387)
	return 367;
      }
  x1 = XEXP (x0, 0);
  goto L2049;

  L2050:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode && GET_CODE (x1) == IF_THEN_ELSE && 1)
    goto L2051;
  goto ret0;

  L2051:
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      ro[1] = x2;
      goto L2052;
    }
  goto ret0;

  L2052:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0 && 1)
    goto L2053;
  goto ret0;

  L2053:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2054;
  goto ret0;

  L2054:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      goto L2055;
    }
  goto ret0;

  L2055:
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      ro[3] = x2;
      if (TARGET_CMOVE)
	return 381;
      }
  goto ret0;

  L1952:
  x1 = XEXP (x0, 1);
  if (binary_387_op (x1, XFmode))
    {
      ro[3] = x1;
      goto L1958;
    }
  goto ret0;

  L1958:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != XFmode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case FLOAT:
      goto L1959;
    case FLOAT_EXTEND:
      goto L1965;
    case SUBREG:
    case REG:
      if (register_operand (x2, XFmode))
	{
	  ro[1] = x2;
	  goto L1971;
	}
    }
  goto ret0;

  L1959:
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1960;
    }
  goto ret0;

  L1960:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, XFmode))
    {
      ro[2] = x2;
      if (TARGET_80387)
	return 361;
      }
  goto ret0;

  L1965:
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      ro[1] = x3;
      goto L1966;
    }
  goto ret0;

  L1966:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, XFmode))
    {
      ro[2] = x2;
      if (TARGET_80387)
	return 362;
      }
  goto ret0;

  L1971:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != XFmode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case FLOAT:
      goto L1972;
    case FLOAT_EXTEND:
      goto L1978;
    case SUBREG:
    case REG:
      if (register_operand (x2, XFmode))
	{
	  ro[2] = x2;
	  if (TARGET_80387)
	    return 360;
	  }
    }
  goto ret0;

  L1972:
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      ro[2] = x3;
      if (TARGET_80387)
	return 363;
      }
  goto ret0;

  L1978:
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SFmode))
    {
      ro[2] = x3;
      if (TARGET_80387)
	return 364;
      }
  goto ret0;

  L1999:
  x1 = XEXP (x0, 1);
  if (binary_387_op (x1, SFmode))
    {
      ro[3] = x1;
      goto L2005;
    }
  x1 = XEXP (x0, 0);
  goto L2041;

  L2005:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SFmode)
    {
      x1 = XEXP (x0, 0);
      goto L2041;
    }
  if (GET_CODE (x2) == FLOAT && 1)
    goto L2006;
  if (nonimmediate_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L2001;
    }
  L2011:
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L2012;
    }
  x1 = XEXP (x0, 0);
  goto L2041;

  L2006:
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2007;
    }
  x1 = XEXP (x0, 0);
  goto L2041;

  L2007:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_80387)
	return 369;
      }
  x1 = XEXP (x0, 0);
  goto L2041;

  L2001:
  x2 = XEXP (x1, 1);
  if (nonimmediate_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_80387)
	return 368;
      }
  x2 = XEXP (x1, 0);
  goto L2011;

  L2012:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode && GET_CODE (x2) == FLOAT && 1)
    goto L2013;
  x1 = XEXP (x0, 0);
  goto L2041;

  L2013:
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      ro[2] = x3;
      if (TARGET_80387)
	return 370;
      }
  x1 = XEXP (x0, 0);
  goto L2041;

  L2042:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode && GET_CODE (x1) == IF_THEN_ELSE && 1)
    goto L2043;
  goto ret0;

  L2043:
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      ro[1] = x2;
      goto L2044;
    }
  goto ret0;

  L2044:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0 && 1)
    goto L2045;
  goto ret0;

  L2045:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2046;
  goto ret0;

  L2046:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      goto L2047;
    }
  goto ret0;

  L2047:
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      ro[3] = x2;
      if (TARGET_CMOVE)
	return 380;
      }
  goto ret0;
 ret0: return -1;
}

int
recog_4 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    default:
      break;
    case XFmode:
      switch (GET_CODE (x3))
	{
	default:
	  break;
	case FLOAT:
	  goto L84;
	case FLOAT_EXTEND:
	  goto L114;
	case SUBREG:
	case REG:
	  if (register_operand (x3, XFmode))
	    {
	      ro[0] = x3;
	      goto L69;
	    }
	}
      break;
    case DFmode:
      switch (GET_CODE (x3))
	{
	default:
	  break;
	case FLOAT:
	  goto L185;
	case FLOAT_EXTEND:
	  goto L215;
	case SUBREG:
	case REG:
	case MEM:
	  if (nonimmediate_operand (x3, DFmode))
	    {
	      ro[0] = x3;
	      goto L157;
	    }
	}
    L169:
      if (register_operand (x3, DFmode))
	{
	  ro[0] = x3;
	  goto L170;
	}
      break;
    case SFmode:
      if (GET_CODE (x3) == FLOAT && 1)
	goto L286;
      if (nonimmediate_operand (x3, SFmode))
	{
	  ro[0] = x3;
	  goto L258;
	}
    L270:
      if (register_operand (x3, SFmode))
	{
	  ro[0] = x3;
	  goto L271;
	}
    }
  goto ret0;

  L84:
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      ro[0] = x4;
      goto L85;
    }
  goto ret0;

  L85:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, XFmode))
    {
      ro[1] = x3;
      goto L86;
    }
  goto ret0;

  L86:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L87;
  goto ret0;

  L87:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      ro[3] = x2;
      if (TARGET_80387)
	return 20;
      }
  goto ret0;

  L114:
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, DFmode))
    {
      ro[1] = x4;
      goto L115;
    }
  goto ret0;

  L115:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, XFmode))
    {
      ro[0] = x3;
      goto L116;
    }
  goto ret0;

  L116:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L117;
  goto ret0;

  L117:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      ro[3] = x2;
      if (TARGET_80387)
	return 22;
      }
  goto ret0;

  L69:
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != XFmode)
    goto ret0;
  switch (GET_CODE (x3))
    {
    default:
      break;
    case FLOAT:
      goto L70;
    case FLOAT_EXTEND:
      goto L100;
    case SUBREG:
    case REG:
      if (register_operand (x3, XFmode))
	{
	  ro[1] = x3;
	  goto L57;
	}
    }
  goto ret0;

  L70:
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L71;
    }
  goto ret0;

  L71:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L72;
  goto ret0;

  L72:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      ro[3] = x2;
      if (TARGET_80387)
	return 19;
      }
  goto ret0;

  L100:
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    default:
      break;
    case DFmode:
      if (nonimmediate_operand (x4, DFmode))
	{
	  ro[1] = x4;
	  goto L101;
	}
      break;
    case SFmode:
      if (nonimmediate_operand (x4, SFmode))
	{
	  ro[1] = x4;
	  goto L131;
	}
    }
  goto ret0;

  L101:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L102;
  goto ret0;

  L102:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      ro[3] = x2;
      if (TARGET_80387)
	return 21;
      }
  goto ret0;

  L131:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L132;
  goto ret0;

  L132:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      ro[3] = x2;
      if (TARGET_80387)
	return 23;
      }
  goto ret0;

  L57:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L58;
  goto ret0;

  L58:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      ro[3] = x2;
      if (TARGET_80387)
	return 18;
      }
  goto ret0;

  L185:
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      ro[0] = x4;
      goto L186;
    }
  goto ret0;

  L186:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      ro[1] = x3;
      goto L187;
    }
  goto ret0;

  L187:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L188;
  goto ret0;

  L188:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      ro[3] = x2;
      if (TARGET_80387)
	return 27;
      }
  goto ret0;

  L215:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != SFmode)
    goto ret0;
  if (nonimmediate_operand (x4, SFmode))
    {
      ro[0] = x4;
      goto L216;
    }
  L230:
  if (register_operand (x4, SFmode))
    {
      ro[0] = x4;
      goto L231;
    }
  goto ret0;

  L216:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      ro[1] = x3;
      goto L217;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L230;

  L217:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L218;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L230;

  L218:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      ro[3] = x2;
      if (TARGET_80387)
	return 29;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L230;

  L231:
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      ro[1] = x3;
      goto L232;
    }
  goto ret0;

  L232:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L233;
  goto ret0;

  L233:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      ro[3] = x2;
      if (TARGET_80387)
	return 30;
      }
  goto ret0;

  L157:
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, DFmode))
    {
      ro[1] = x3;
      goto L158;
    }
  x3 = XEXP (x2, 0);
  goto L169;

  L158:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L159;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L169;

  L159:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      ro[3] = x2;
      if (TARGET_80387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
	return 25;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L169;

  L170:
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != DFmode)
    goto ret0;
  switch (GET_CODE (x3))
    {
    default:
      break;
    case FLOAT:
      goto L171;
    case FLOAT_EXTEND:
      goto L201;
    }
  goto ret0;

  L171:
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L172;
    }
  goto ret0;

  L172:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L173;
  goto ret0;

  L173:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      ro[3] = x2;
      if (TARGET_80387)
	return 26;
      }
  goto ret0;

  L201:
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SFmode))
    {
      ro[1] = x4;
      goto L202;
    }
  goto ret0;

  L202:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L203;
  goto ret0;

  L203:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      ro[3] = x2;
      if (TARGET_80387)
	return 28;
      }
  goto ret0;

  L286:
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      ro[0] = x4;
      goto L287;
    }
  goto ret0;

  L287:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      ro[1] = x3;
      goto L288;
    }
  goto ret0;

  L288:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L289;
  goto ret0;

  L289:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      ro[3] = x2;
      if (TARGET_80387)
	return 34;
      }
  goto ret0;

  L258:
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SFmode))
    {
      ro[1] = x3;
      goto L259;
    }
  x3 = XEXP (x2, 0);
  goto L270;

  L259:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L260;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L270;

  L260:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      ro[3] = x2;
      if (TARGET_80387
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
	return 32;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L270;

  L271:
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SFmode && GET_CODE (x3) == FLOAT && 1)
    goto L272;
  goto ret0;

  L272:
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L273;
    }
  goto ret0;

  L273:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L274;
  goto ret0;

  L274:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      ro[3] = x2;
      if (TARGET_80387)
	return 33;
      }
  goto ret0;
 ret0: return -1;
}

int
recog_5 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (arithmetic_comparison_operator (x3, VOIDmode))
    {
      ro[0] = x3;
      goto L1587;
    }
  L1620:
  switch (GET_CODE (x3))
    {
    default:
      break;
    case NE:
      goto L1621;
    case EQ:
      goto L1636;
    }
  goto ret0;

  L1587:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != SImode)
    {
      goto L1620;
    }
  switch (GET_CODE (x4))
    {
    default:
      break;
    case PLUS:
      goto L1588;
    case MINUS:
      goto L1605;
    }
  goto L1620;

  L1588:
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L1589;
    }
  goto L1620;

  L1589:
  x5 = XEXP (x4, 1);
  if (general_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L1590;
    }
  goto L1620;

  L1590:
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 0 && 1)
    goto L1591;
  goto L1620;

  L1591:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF && 1)
    goto L1592;
  x3 = XEXP (x2, 0);
  goto L1620;

  L1592:
  x4 = XEXP (x3, 0);
  ro[3] = x4;
  goto L1593;

  L1593:
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC && 1)
    goto L1594;
  x3 = XEXP (x2, 0);
  goto L1620;

  L1594:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L1595;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1620;

  L1595:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[1]) && 1)
    goto L1596;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1620;

  L1596:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L1597;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1620;

  L1597:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L1598;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1620;

  L1598:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    return 309;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1620;

  L1605:
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L1606;
    }
  goto L1620;

  L1606:
  x5 = XEXP (x4, 1);
  if (general_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L1607;
    }
  goto L1620;

  L1607:
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 0 && 1)
    goto L1608;
  goto L1620;

  L1608:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF && 1)
    goto L1609;
  x3 = XEXP (x2, 0);
  goto L1620;

  L1609:
  x4 = XEXP (x3, 0);
  ro[3] = x4;
  goto L1610;

  L1610:
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC && 1)
    goto L1611;
  x3 = XEXP (x2, 0);
  goto L1620;

  L1611:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L1612;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1620;

  L1612:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[1]) && 1)
    goto L1613;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1620;

  L1613:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MINUS && 1)
    goto L1614;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1620;

  L1614:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L1615;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1620;

  L1615:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    return 310;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1620;

  L1621:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode && general_operand (x4, SImode))
    {
      ro[0] = x4;
      goto L1622;
    }
  goto ret0;

  L1622:
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != CONST_INT)
    goto ret0;
  if (XWINT (x4, 0) == 0 && 1)
    goto L1623;
  if (GET_CODE (x4) != CONST_INT)
    goto ret0;
  if (XWINT (x4, 0) == 1 && 1)
    goto L1653;
  if (XWINT (x4, 0) == -1 && 1)
    goto L1683;
  goto ret0;

  L1623:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF && 1)
    goto L1624;
  goto ret0;

  L1624:
  x4 = XEXP (x3, 0);
  ro[1] = x4;
  goto L1625;

  L1625:
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC && 1)
    goto L1626;
  goto ret0;

  L1626:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L1627;
  goto ret0;

  L1627:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[0]) && 1)
    goto L1628;
  goto ret0;

  L1628:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L1629;
  goto ret0;

  L1629:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L1630;
  goto ret0;

  L1630:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == -1 && 1)
    return 311;
  goto ret0;

  L1653:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF && 1)
    goto L1654;
  goto ret0;

  L1654:
  x4 = XEXP (x3, 0);
  ro[1] = x4;
  goto L1655;

  L1655:
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC && 1)
    goto L1656;
  goto ret0;

  L1656:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L1657;
  goto ret0;

  L1657:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[0]) && 1)
    goto L1658;
  goto ret0;

  L1658:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L1659;
  goto ret0;

  L1659:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L1660;
  goto ret0;

  L1660:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == -1 && 1)
    return 313;
  goto ret0;

  L1683:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF && 1)
    goto L1684;
  goto ret0;

  L1684:
  x4 = XEXP (x3, 0);
  ro[1] = x4;
  goto L1685;

  L1685:
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC && 1)
    goto L1686;
  goto ret0;

  L1686:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L1687;
  goto ret0;

  L1687:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[0]) && 1)
    goto L1688;
  goto ret0;

  L1688:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L1689;
  goto ret0;

  L1689:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L1690;
  goto ret0;

  L1690:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 1 && 1)
    return 315;
  goto ret0;

  L1636:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode && general_operand (x4, SImode))
    {
      ro[0] = x4;
      goto L1637;
    }
  goto ret0;

  L1637:
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) != CONST_INT)
    goto ret0;
  if (XWINT (x4, 0) == 0 && 1)
    goto L1638;
  if (GET_CODE (x4) != CONST_INT)
    goto ret0;
  if (XWINT (x4, 0) == 1 && 1)
    goto L1668;
  if (XWINT (x4, 0) == -1 && 1)
    goto L1698;
  goto ret0;

  L1638:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF && 1)
    goto L1639;
  goto ret0;

  L1639:
  x4 = XEXP (x3, 0);
  ro[1] = x4;
  goto L1640;

  L1640:
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC && 1)
    goto L1641;
  goto ret0;

  L1641:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L1642;
  goto ret0;

  L1642:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[0]) && 1)
    goto L1643;
  goto ret0;

  L1643:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L1644;
  goto ret0;

  L1644:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L1645;
  goto ret0;

  L1645:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == -1 && 1)
    return 312;
  goto ret0;

  L1668:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF && 1)
    goto L1669;
  goto ret0;

  L1669:
  x4 = XEXP (x3, 0);
  ro[1] = x4;
  goto L1670;

  L1670:
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC && 1)
    goto L1671;
  goto ret0;

  L1671:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L1672;
  goto ret0;

  L1672:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[0]) && 1)
    goto L1673;
  goto ret0;

  L1673:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L1674;
  goto ret0;

  L1674:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L1675;
  goto ret0;

  L1675:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == -1 && 1)
    return 314;
  goto ret0;

  L1698:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF && 1)
    goto L1699;
  goto ret0;

  L1699:
  x4 = XEXP (x3, 0);
  ro[1] = x4;
  goto L1700;

  L1700:
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC && 1)
    goto L1701;
  goto ret0;

  L1701:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L1702;
  goto ret0;

  L1702:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[0]) && 1)
    goto L1703;
  goto ret0;

  L1703:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L1704;
  goto ret0;

  L1704:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L1705;
  goto ret0;

  L1705:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 1 && 1)
    return 316;
  goto ret0;
 ret0: return -1;
}

int
recog_6 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SFmode:
      if (GET_CODE (x2) == MEM && push_operand (x2, SFmode))
	{
	  ro[0] = x2;
	  goto L380;
	}
    L390:
      if (memory_operand (x2, SFmode))
	{
	  ro[0] = x2;
	  goto L391;
	}
    L402:
      if (register_operand (x2, SFmode))
	{
	  ro[0] = x2;
	  goto L403;
	}
    L591:
      if (nonimmediate_operand (x2, SFmode))
	{
	  ro[0] = x2;
	  goto L592;
	}
      break;
    case DFmode:
      if (register_operand (x2, DFmode))
	{
	  ro[0] = x2;
	  goto L440;
	}
      break;
    case XFmode:
      if (register_operand (x2, XFmode))
	{
	  ro[0] = x2;
	  goto L477;
	}
      break;
    case DImode:
      if (nonimmediate_operand (x2, DImode))
	{
	  ro[0] = x2;
	  goto L775;
	}
    L804:
      if (general_operand (x2, DImode))
	{
	  ro[0] = x2;
	  goto L805;
	}
      break;
    case SImode:
      if (register_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L917;
	}
      break;
    case HImode:
      if (register_operand (x2, HImode))
	{
	  ro[0] = x2;
	  goto L984;
	}
    }
  switch (GET_CODE (x2))
    {
    default:
      break;
    case CC0:
      goto L12;
    case PC:
      goto L1709;
    }
  L1766:
  ro[0] = x2;
  goto L1767;
  L1808:
  if (GET_MODE (x2) != SImode)
    goto ret0;
  if (GET_CODE (x2) == REG && XINT (x2, 0) == 7 && 1)
    goto L1809;
  L1852:
  if (register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L1853;
    }
  goto ret0;

  L380:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L381;
    }
  x2 = XEXP (x1, 0);
  goto L390;

  L381:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L382;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L390;

  L382:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[2] = x2;
      return 69;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L390;

  L391:
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L392;
    }
  x2 = XEXP (x1, 0);
  goto L402;

  L392:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L393;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L402;

  L393:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[2] = x2;
      return 70;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L402;

  L403:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L404;
    }
  x2 = XEXP (x1, 0);
  goto L591;

  L404:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L405;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L591;

  L405:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[1]) && 1)
    goto L406;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L591;

  L406:
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, ro[0]) && 1)
    return 72;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L591;

  L592:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode && GET_CODE (x2) == FLOAT_TRUNCATE && 1)
    goto L593;
  x2 = XEXP (x1, 0);
  goto L1766;

  L593:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      ro[1] = x3;
      goto L594;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L594:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L595;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L595:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_80387)
	return 110;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L440:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L441;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L441:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L442;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L442:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[1]) && 1)
    goto L443;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L443:
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, ro[0]) && 1)
    return 78;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L477:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, XFmode))
    {
      ro[1] = x2;
      goto L478;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L478:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L479;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L479:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[1]) && 1)
    goto L480;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L480:
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, ro[0]) && 1)
    return 84;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L775:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == PLUS && 1)
    goto L791;
  x2 = XEXP (x1, 0);
  goto L804;

  L791:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == ZERO_EXTEND && 1)
    goto L792;
  if (general_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L777;
    }
  x2 = XEXP (x1, 0);
  goto L804;

  L792:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode && general_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L793;
    }
  x2 = XEXP (x1, 0);
  goto L804;

  L793:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L794;
    }
  x2 = XEXP (x1, 0);
  goto L804;

  L794:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L795;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L804;

  L795:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      return 141;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L804;

  L777:
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == ZERO_EXTEND && 1)
    goto L778;
  x2 = XEXP (x1, 0);
  goto L804;

  L778:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode && general_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L779;
    }
  x2 = XEXP (x1, 0);
  goto L804;

  L779:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L780;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L804;

  L780:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      return 140;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L804;

  L805:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DImode)
    {
      x2 = XEXP (x1, 0);
      goto L1766;
    }
  switch (GET_CODE (x2))
    {
    default:
      break;
    case PLUS:
      goto L806;
    case MINUS:
      goto L837;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L806:
  x3 = XEXP (x2, 0);
  if (general_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L807;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L807:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L808;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L808:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L809;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L809:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      return 142;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L837:
  x3 = XEXP (x2, 0);
  if (general_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L838;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L838:
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == ZERO_EXTEND && 1)
    goto L839;
  if (general_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L854;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L839:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode && general_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L840;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L840:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L841;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L841:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      return 153;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L854:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L855;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L855:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      return 154;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L917:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SImode)
    {
      x2 = XEXP (x1, 0);
      goto L1766;
    }
  switch (GET_CODE (x2))
    {
    default:
      break;
    case TRUNCATE:
      goto L918;
    case DIV:
      goto L974;
    case UDIV:
      goto L996;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L918:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == LSHIFTRT && 1)
    goto L919;
  x2 = XEXP (x1, 0);
  goto L1766;

  L919:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode && GET_CODE (x4) == MULT && 1)
    goto L920;
  x2 = XEXP (x1, 0);
  goto L1766;

  L920:
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != DImode)
    {
      x2 = XEXP (x1, 0);
      goto L1766;
    }
  switch (GET_CODE (x5))
    {
    default:
      break;
    case ZERO_EXTEND:
      goto L921;
    case SIGN_EXTEND:
      goto L944;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L921:
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      ro[1] = x6;
      goto L922;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L922:
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode && GET_CODE (x5) == ZERO_EXTEND && 1)
    goto L923;
  x2 = XEXP (x1, 0);
  goto L1766;

  L923:
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, SImode))
    {
      ro[2] = x6;
      goto L924;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L924:
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 32 && 1)
    goto L925;
  x2 = XEXP (x1, 0);
  goto L1766;

  L925:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L926;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L926:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      if (TARGET_WIDE_MULTIPLY)
	return 170;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L944:
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      ro[1] = x6;
      goto L945;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L945:
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode && GET_CODE (x5) == SIGN_EXTEND && 1)
    goto L946;
  x2 = XEXP (x1, 0);
  goto L1766;

  L946:
  x6 = XEXP (x5, 0);
  if (nonimmediate_operand (x6, SImode))
    {
      ro[2] = x6;
      goto L947;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L947:
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 32 && 1)
    goto L948;
  x2 = XEXP (x1, 0);
  goto L1766;

  L948:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L949;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L949:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      if (TARGET_WIDE_MULTIPLY)
	return 171;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L974:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L975;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L975:
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L976;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L976:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L977;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L977:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L978;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L978:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MOD && 1)
    goto L979;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L979:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L980;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L980:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    return 180;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L996:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L997;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L997:
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L998;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L998:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L999;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L999:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L1000;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L1000:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == UMOD && 1)
    goto L1001;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L1001:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L1002;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L1002:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    return 182;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L984:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != HImode)
    {
      x2 = XEXP (x1, 0);
      goto L1766;
    }
  switch (GET_CODE (x2))
    {
    default:
      break;
    case DIV:
      goto L985;
    case UDIV:
      goto L1007;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L985:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      ro[1] = x3;
      goto L986;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L986:
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, HImode))
    {
      ro[2] = x3;
      goto L987;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L987:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L988;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L988:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      ro[3] = x2;
      goto L989;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L989:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode && GET_CODE (x2) == MOD && 1)
    goto L990;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L990:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L991;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L991:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    return 181;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L1007:
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      ro[1] = x3;
      goto L1008;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L1008:
  x3 = XEXP (x2, 1);
  if (nonimmediate_operand (x3, HImode))
    {
      ro[2] = x3;
      goto L1009;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L1009:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L1010;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L1010:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      ro[3] = x2;
      goto L1011;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L1011:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode && GET_CODE (x2) == UMOD && 1)
    goto L1012;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L1012:
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L1013;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L1013:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    return 183;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L12:
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SFmode:
      if (register_operand (x2, SFmode))
	{
	  ro[0] = x2;
	  goto L13;
	}
      break;
    case DFmode:
      if (register_operand (x2, DFmode))
	{
	  ro[0] = x2;
	  goto L22;
	}
      break;
    case XFmode:
      if (register_operand (x2, XFmode))
	{
	  ro[0] = x2;
	  goto L31;
	}
    }
  L54:
  if (VOIDmode_compare_op (x2, VOIDmode))
    {
      ro[2] = x2;
      goto L83;
    }
  L142:
  if (GET_MODE (x2) == CCFPEQmode && GET_CODE (x2) == COMPARE && 1)
    goto L143;
  x2 = XEXP (x1, 0);
  goto L1766;

  L13:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L14;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L54;

  L14:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      ro[1] = x2;
      if (TARGET_80387 && ! TARGET_IEEE_FP)
	return 6;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L54;

  L22:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L23;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L54;

  L23:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      ro[1] = x2;
      if (TARGET_80387 && ! TARGET_IEEE_FP)
	return 8;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L54;

  L31:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L32;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L54;

  L32:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      ro[1] = x2;
      if (TARGET_80387 && ! TARGET_IEEE_FP)
	return 10;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L54;
 L83:
  tem = recog_4 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  goto L142;

  L143:
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    default:
      break;
    case XFmode:
      if (register_operand (x3, XFmode))
	{
	  ro[0] = x3;
	  goto L144;
	}
      break;
    case DFmode:
      if (register_operand (x3, DFmode))
	{
	  ro[0] = x3;
	  goto L245;
	}
      break;
    case SFmode:
      if (register_operand (x3, SFmode))
	{
	  ro[0] = x3;
	  goto L301;
	}
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L144:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, XFmode))
    {
      ro[1] = x3;
      goto L145;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L145:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L146;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L146:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      ro[2] = x2;
      if (TARGET_80387)
	return 24;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L245:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      ro[1] = x3;
      goto L246;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L246:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L247;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L247:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      ro[2] = x2;
      if (TARGET_80387)
	return 31;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L301:
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      ro[1] = x3;
      goto L302;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L302:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L303;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L303:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, HImode))
    {
      ro[2] = x2;
      if (TARGET_80387)
	return 35;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L1709:
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      if (GET_CODE (x2) == MINUS && 1)
	goto L1710;
      if (nonimmediate_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L1735;
	}
    }
  if (GET_CODE (x2) == IF_THEN_ELSE && 1)
    goto L1586;
  x2 = XEXP (x1, 0);
  goto L1766;

  L1710:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == REG && XINT (x3, 0) == 3 && 1)
    goto L1711;
  x2 = XEXP (x1, 0);
  goto L1766;

  L1711:
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == MEM && 1)
    goto L1712;
  x2 = XEXP (x1, 0);
  goto L1766;

  L1712:
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode && GET_CODE (x4) == PLUS && 1)
    goto L1713;
  x2 = XEXP (x1, 0);
  goto L1766;

  L1713:
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == SImode && GET_CODE (x5) == MULT && 1)
    goto L1714;
  x2 = XEXP (x1, 0);
  goto L1766;

  L1714:
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      ro[0] = x6;
      goto L1715;
    }
  x2 = XEXP (x1, 0);
  goto L1766;

  L1715:
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) == CONST_INT && XWINT (x6, 0) == 4 && 1)
    goto L1716;
  x2 = XEXP (x1, 0);
  goto L1766;

  L1716:
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == LABEL_REF && 1)
    goto L1717;
  x2 = XEXP (x1, 0);
  goto L1766;

  L1717:
  x6 = XEXP (x5, 0);
  ro[1] = x6;
  goto L1718;

  L1718:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1719;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L1719:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[2] = x2;
      return 318;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L1735:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE && 1)
    goto L1736;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L1736:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1737;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1766;

  L1737:
  x3 = XEXP (x2, 0);
  ro[1] = x3;
  return 319;
 L1586:
  tem = recog_5 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  x2 = XEXP (x1, 0);
  goto L1766;

  L1767:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL && 1)
    goto L1779;
  x2 = XEXP (x1, 0);
  goto L1808;

  L1779:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode && GET_CODE (x3) == MEM && 1)
    goto L1780;
  L1768:
  if (call_insn_operand (x3, QImode))
    {
      ro[1] = x3;
      goto L1769;
    }
  x2 = XEXP (x1, 0);
  goto L1808;

  L1780:
  x4 = XEXP (x3, 0);
  if (symbolic_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L1781;
    }
  goto L1768;

  L1781:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L1782;
    }
  x3 = XEXP (x2, 0);
  goto L1768;

  L1782:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L1783;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1768;

  L1783:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 7 && 1)
    goto L1784;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1768;

  L1784:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L1785;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1768;

  L1785:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == REG && XINT (x3, 0) == 7 && 1)
    goto L1786;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1768;

  L1786:
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      ro[4] = x3;
      if (!HALF_PIC_P ())
	return 328;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1768;

  L1769:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L1770;
    }
  x2 = XEXP (x1, 0);
  goto L1808;

  L1770:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L1771;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1808;

  L1771:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 7 && 1)
    goto L1772;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1808;

  L1772:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L1773;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1808;

  L1773:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == REG && XINT (x3, 0) == 7 && 1)
    goto L1774;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1808;

  L1774:
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      ro[4] = x3;
      return 327;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1808;

  L1809:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SImode)
    {
      x2 = XEXP (x1, 0);
      goto L1852;
    }
  switch (GET_CODE (x2))
    {
    default:
      break;
    case MINUS:
      goto L1810;
    case REG:
      if (XINT (x2, 0) == 6 && 1)
	goto L1838;
    }
  x2 = XEXP (x1, 0);
  goto L1852;

  L1810:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == REG && XINT (x3, 0) == 7 && 1)
    goto L1811;
  x2 = XEXP (x1, 0);
  goto L1852;

  L1811:
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      ro[0] = x3;
      goto L1812;
    }
  x2 = XEXP (x1, 0);
  goto L1852;

  L1812:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L1813;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1852;

  L1813:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 6 && 1)
    goto L1814;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1852;

  L1814:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == UNSPEC && XINT (x2, 1) == 4 && XVECLEN (x2, 0) == 1 && 1)
    goto L1815;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1852;

  L1815:
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == REG && XINT (x3, 0) == 6 && 1)
    return 339;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1852;

  L1838:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1839;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1852;

  L1839:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 6 && 1)
    return 344;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1852;

  L1853:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case MEM:
      goto L1854;
    case UNSPEC:
      if (XINT (x2, 1) == 0 && XVECLEN (x2, 0) == 3 && 1)
	goto L2018;
      if (XINT (x2, 1) == 0 && XVECLEN (x2, 0) == 2 && 1)
	goto L2060;
    }
  goto ret0;

  L1854:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == REG && XINT (x3, 0) == 7 && 1)
    goto L1855;
  goto ret0;

  L1855:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L1856;
  goto ret0;

  L1856:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 7 && 1)
    goto L1857;
  goto ret0;

  L1857:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L1858;
  goto ret0;

  L1858:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == REG && XINT (x3, 0) == 7 && 1)
    goto L1859;
  goto ret0;

  L1859:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 4 && 1)
    return 346;
  goto ret0;

  L2018:
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == BLKmode && GET_CODE (x3) == MEM && 1)
    goto L2076;
  goto ret0;

  L2076:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[3] = x4;
      goto L2077;
    }
  L2019:
  if (address_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2020;
    }
  goto ret0;

  L2077:
  x3 = XVECEXP (x2, 0, 1);
  if (immediate_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2078;
    }
  x3 = XVECEXP (x2, 0, 0);
  x4 = XEXP (x3, 0);
  goto L2019;

  L2078:
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2079;
    }
  x3 = XVECEXP (x2, 0, 0);
  x4 = XEXP (x3, 0);
  goto L2019;

  L2079:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2080;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  x4 = XEXP (x3, 0);
  goto L2019;

  L2080:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[2]) && 1)
    goto L2091;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  x4 = XEXP (x3, 0);
  goto L2019;

  L2091:
  if ((TARGET_USE_ANY_REG && optimize > 1))
    return 383;
  L2092:
  if ((TARGET_USE_Q_REG && optimize > 1))
    return 384;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XVECEXP (x2, 0, 0);
  x4 = XEXP (x3, 0);
  goto L2019;

  L2020:
  x3 = XVECEXP (x2, 0, 1);
  if (immediate_operand (x3, QImode))
    {
      ro[2] = x3;
      goto L2021;
    }
  goto ret0;

  L2021:
  x3 = XVECEXP (x2, 0, 2);
  if (immediate_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L2022;
    }
  goto ret0;

  L2022:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2023;
  goto ret0;

  L2023:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[1]) && 1)
    return 372;
  goto ret0;

  L2060:
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == BLKmode && GET_CODE (x3) == MEM && 1)
    goto L2061;
  goto ret0;

  L2061:
  x4 = XEXP (x3, 0);
  if (address_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2062;
    }
  goto ret0;

  L2062:
  x3 = XVECEXP (x2, 0, 1);
  if (immediate_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2063;
    }
  goto ret0;

  L2063:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2064;
  goto ret0;

  L2064:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      if (optimize > 1)
	return 382;
      }
  goto ret0;
 ret0: return -1;
}

int
recog_7 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case DFmode:
      if (GET_CODE (x2) == MEM && push_operand (x2, DFmode))
	{
	  ro[0] = x2;
	  goto L413;
	}
    L425:
      if (memory_operand (x2, DFmode))
	{
	  ro[0] = x2;
	  goto L426;
	}
      break;
    case XFmode:
      if (GET_CODE (x2) == MEM && push_operand (x2, XFmode))
	{
	  ro[0] = x2;
	  goto L450;
	}
    L462:
      if (memory_operand (x2, XFmode))
	{
	  ro[0] = x2;
	  goto L463;
	}
      break;
    case DImode:
      if (GET_CODE (x2) == MEM && push_operand (x2, DImode))
	{
	  ro[0] = x2;
	  goto L484;
	}
    L494:
      if (general_operand (x2, DImode))
	{
	  ro[0] = x2;
	  goto L495;
	}
      break;
    case SImode:
      if (nonimmediate_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L697;
	}
    }
  goto ret0;

  L413:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L414;
    }
  x2 = XEXP (x1, 0);
  goto L425;

  L414:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L415;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L425;

  L415:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L416;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L425;

  L416:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L417;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L425;

  L417:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      return 75;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L425;

  L426:
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L427;
    }
  goto ret0;

  L427:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L428;
  goto ret0;

  L428:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L429;
    }
  goto ret0;

  L429:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L430;
  goto ret0;

  L430:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      return 76;
    }
  goto ret0;

  L450:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, XFmode))
    {
      ro[1] = x2;
      goto L451;
    }
  x2 = XEXP (x1, 0);
  goto L462;

  L451:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L452;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L462;

  L452:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L453;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L462;

  L453:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L454;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L462;

  L454:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      return 81;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L462;

  L463:
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, XFmode))
    {
      ro[1] = x2;
      goto L464;
    }
  goto ret0;

  L464:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L465;
  goto ret0;

  L465:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L466;
    }
  goto ret0;

  L466:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L467;
  goto ret0;

  L467:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      return 82;
    }
  goto ret0;

  L484:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L485;
    }
  x2 = XEXP (x1, 0);
  goto L494;

  L485:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L486;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L494;

  L486:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L487;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L494;

  L487:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L488;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L494;

  L488:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      return 85;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L494;

  L495:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L496;
    }
  goto ret0;

  L496:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L497;
  goto ret0;

  L497:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L498;
    }
  goto ret0;

  L498:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L499;
  goto ret0;

  L499:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      return 86;
    }
  goto ret0;

  L697:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == FIX && 1)
    goto L698;
  goto ret0;

  L698:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != FIX)
    goto ret0;
  switch (GET_MODE (x3))
    {
    default:
      break;
    case XFmode:
      goto L699;
    case DFmode:
      goto L721;
    case SFmode:
      goto L743;
    }
  goto ret0;

  L699:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, XFmode))
    {
      ro[1] = x4;
      goto L700;
    }
  goto ret0;

  L700:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L701;
  goto ret0;

  L701:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L702;
    }
  goto ret0;

  L702:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L703;
  goto ret0;

  L703:
  x2 = XEXP (x1, 0);
  if (pnum_clobbers != 0 && memory_operand (x2, DImode))
    {
      ro[3] = x2;
      if (TARGET_80387)
	{
	  *pnum_clobbers = 1;
	  return 125;
	}
      }
  goto ret0;

  L721:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      ro[1] = x4;
      goto L722;
    }
  goto ret0;

  L722:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L723;
  goto ret0;

  L723:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L724;
    }
  goto ret0;

  L724:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L725;
  goto ret0;

  L725:
  x2 = XEXP (x1, 0);
  if (pnum_clobbers != 0 && memory_operand (x2, DImode))
    {
      ro[3] = x2;
      if (TARGET_80387)
	{
	  *pnum_clobbers = 1;
	  return 126;
	}
      }
  goto ret0;

  L743:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      ro[1] = x4;
      goto L744;
    }
  goto ret0;

  L744:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L745;
  goto ret0;

  L745:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L746;
    }
  goto ret0;

  L746:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L747;
  goto ret0;

  L747:
  x2 = XEXP (x1, 0);
  if (pnum_clobbers != 0 && memory_operand (x2, DImode))
    {
      ro[3] = x2;
      if (TARGET_80387)
	{
	  *pnum_clobbers = 1;
	  return 127;
	}
      }
  goto ret0;
 ret0: return -1;
}

int
recog_8 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case DImode:
      if (nonimmediate_operand (x2, DImode))
	{
	  ro[0] = x2;
	  goto L621;
	}
      break;
    case SImode:
      if (nonimmediate_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L685;
	}
    }
  goto ret0;

  L621:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == FIX && 1)
    goto L622;
  goto ret0;

  L622:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != FIX)
    goto ret0;
  switch (GET_MODE (x3))
    {
    default:
      break;
    case XFmode:
      goto L623;
    case DFmode:
      goto L649;
    case SFmode:
      goto L675;
    }
  goto ret0;

  L623:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, XFmode))
    {
      ro[1] = x4;
      goto L624;
    }
  goto ret0;

  L624:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L625;
  goto ret0;

  L625:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[1]) && 1)
    goto L626;
  goto ret0;

  L626:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L627;
  goto ret0;

  L627:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L628;
    }
  goto ret0;

  L628:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L629;
  goto ret0;

  L629:
  x2 = XEXP (x1, 0);
  if (pnum_clobbers != 0 && memory_operand (x2, DImode))
    {
      ro[3] = x2;
      if (TARGET_80387)
	{
	  *pnum_clobbers = 1;
	  return 119;
	}
      }
  goto ret0;

  L649:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      ro[1] = x4;
      goto L650;
    }
  goto ret0;

  L650:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L651;
  goto ret0;

  L651:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[1]) && 1)
    goto L652;
  goto ret0;

  L652:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L653;
  goto ret0;

  L653:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L654;
    }
  goto ret0;

  L654:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L655;
  goto ret0;

  L655:
  x2 = XEXP (x1, 0);
  if (pnum_clobbers != 0 && memory_operand (x2, DImode))
    {
      ro[3] = x2;
      if (TARGET_80387)
	{
	  *pnum_clobbers = 1;
	  return 120;
	}
      }
  goto ret0;

  L675:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      ro[1] = x4;
      goto L676;
    }
  goto ret0;

  L676:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L677;
  goto ret0;

  L677:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[1]) && 1)
    goto L678;
  goto ret0;

  L678:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L679;
  goto ret0;

  L679:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L680;
    }
  goto ret0;

  L680:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L681;
  goto ret0;

  L681:
  x2 = XEXP (x1, 0);
  if (pnum_clobbers != 0 && memory_operand (x2, DImode))
    {
      ro[3] = x2;
      if (TARGET_80387)
	{
	  *pnum_clobbers = 1;
	  return 121;
	}
      }
  goto ret0;

  L685:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == FIX && 1)
    goto L686;
  goto ret0;

  L686:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != FIX)
    goto ret0;
  switch (GET_MODE (x3))
    {
    default:
      break;
    case XFmode:
      goto L687;
    case DFmode:
      goto L709;
    case SFmode:
      goto L731;
    }
  goto ret0;

  L687:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, XFmode))
    {
      ro[1] = x4;
      goto L688;
    }
  goto ret0;

  L688:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L689;
  goto ret0;

  L689:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L690;
    }
  goto ret0;

  L690:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L691;
  goto ret0;

  L691:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L692;
    }
  goto ret0;

  L692:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L693;
  goto ret0;

  L693:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      if (TARGET_80387)
	return 125;
      }
  goto ret0;

  L709:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      ro[1] = x4;
      goto L710;
    }
  goto ret0;

  L710:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L711;
  goto ret0;

  L711:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L712;
    }
  goto ret0;

  L712:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L713;
  goto ret0;

  L713:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L714;
    }
  goto ret0;

  L714:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L715;
  goto ret0;

  L715:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      if (TARGET_80387)
	return 126;
      }
  goto ret0;

  L731:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      ro[1] = x4;
      goto L732;
    }
  goto ret0;

  L732:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L733;
  goto ret0;

  L733:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L734;
    }
  goto ret0;

  L734:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L735;
  goto ret0;

  L735:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L736;
    }
  goto ret0;

  L736:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L737;
  goto ret0;

  L737:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      if (TARGET_80387)
	return 127;
      }
  goto ret0;
 ret0: return -1;
}

int
recog_9 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case BLKmode:
      if (GET_CODE (x2) == MEM && 1)
	goto L1863;
      break;
    case SImode:
      if (register_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L1894;
	}
    }
  if (GET_CODE (x2) == CC0 && 1)
    goto L1912;
  goto ret0;

  L1863:
  x3 = XEXP (x2, 0);
  if (address_operand (x3, SImode))
    {
      ro[0] = x3;
      goto L1864;
    }
  goto ret0;

  L1864:
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    default:
      break;
    case MEM:
      if (GET_MODE (x2) == BLKmode && 1)
	goto L1865;
      break;
    case CONST_INT:
      if (XWINT (x2, 0) == 0 && 1)
	goto L1881;
    }
  goto ret0;

  L1865:
  x3 = XEXP (x2, 0);
  if (address_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1866;
    }
  goto ret0;

  L1866:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE && 1)
    goto L1867;
  goto ret0;

  L1867:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[2] = x2;
      goto L1868;
    }
  goto ret0;

  L1868:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE && 1)
    goto L1869;
  goto ret0;

  L1869:
  x2 = XEXP (x1, 0);
  if (immediate_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L1870;
    }
  goto ret0;

  L1870:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1871;
  goto ret0;

  L1871:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L1872;
    }
  goto ret0;

  L1872:
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1873;
  goto ret0;

  L1873:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[0]) && 1)
    goto L1874;
  goto ret0;

  L1874:
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1875;
  goto ret0;

  L1875:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[1]) && 1)
    return 348;
  goto ret0;

  L1881:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE && 1)
    goto L1882;
  goto ret0;

  L1882:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[1] = x2;
      goto L1883;
    }
  goto ret0;

  L1883:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE && 1)
    goto L1884;
  goto ret0;

  L1884:
  x2 = XEXP (x1, 0);
  if (immediate_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L1885;
    }
  goto ret0;

  L1885:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == USE && 1)
    goto L1886;
  goto ret0;

  L1886:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L1887;
    }
  goto ret0;

  L1887:
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1888;
  goto ret0;

  L1888:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L1889;
    }
  goto ret0;

  L1889:
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1890;
  goto ret0;

  L1890:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[0]) && 1)
    return 350;
  goto ret0;

  L1894:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == COMPARE && 1)
    goto L1895;
  goto ret0;

  L1895:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == BLKmode && GET_CODE (x3) == MEM && 1)
    goto L1896;
  goto ret0;

  L1896:
  x4 = XEXP (x3, 0);
  if (address_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L1897;
    }
  goto ret0;

  L1897:
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == BLKmode && GET_CODE (x3) == MEM && 1)
    goto L1898;
  goto ret0;

  L1898:
  x4 = XEXP (x3, 0);
  if (address_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L1899;
    }
  goto ret0;

  L1899:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE && 1)
    goto L1900;
  goto ret0;

  L1900:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L1901;
    }
  goto ret0;

  L1901:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE && 1)
    goto L1902;
  goto ret0;

  L1902:
  x2 = XEXP (x1, 0);
  if (immediate_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L1903;
    }
  goto ret0;

  L1903:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1904;
  goto ret0;

  L1904:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[1]) && 1)
    goto L1905;
  goto ret0;

  L1905:
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1906;
  goto ret0;

  L1906:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[2]) && 1)
    goto L1907;
  goto ret0;

  L1907:
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1908;
  goto ret0;

  L1908:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[3]) && 1)
    return 352;
  goto ret0;

  L1912:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == COMPARE && 1)
    goto L1913;
  goto ret0;

  L1913:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == BLKmode && GET_CODE (x3) == MEM && 1)
    goto L1914;
  goto ret0;

  L1914:
  x4 = XEXP (x3, 0);
  if (address_operand (x4, SImode))
    {
      ro[0] = x4;
      goto L1915;
    }
  goto ret0;

  L1915:
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == BLKmode && GET_CODE (x3) == MEM && 1)
    goto L1916;
  goto ret0;

  L1916:
  x4 = XEXP (x3, 0);
  if (address_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L1917;
    }
  goto ret0;

  L1917:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE && 1)
    goto L1918;
  goto ret0;

  L1918:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L1919;
    }
  goto ret0;

  L1919:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE && 1)
    goto L1920;
  goto ret0;

  L1920:
  x2 = XEXP (x1, 0);
  if (immediate_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L1921;
    }
  goto ret0;

  L1921:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1922;
  goto ret0;

  L1922:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[0]) && 1)
    goto L1923;
  goto ret0;

  L1923:
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1924;
  goto ret0;

  L1924:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[1]) && 1)
    goto L1925;
  goto ret0;

  L1925:
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1926;
  goto ret0;

  L1926:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[2]) && 1)
    return 353;
  goto ret0;
 ret0: return -1;
}

int
recog (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn;
     int *pnum_clobbers;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  int tem;

  L0:
  switch (GET_CODE (x0))
    {
    default:
      break;
    case SET:
      goto L325;
    case PARALLEL:
      if (XVECLEN (x0, 0) == 2 && 1)
	goto L10;
      if (XVECLEN (x0, 0) == 3 && 1)
	goto L2094;
      if (XVECLEN (x0, 0) == 5 && 1)
	goto L605;
      if (XVECLEN (x0, 0) == 4 && 1)
	goto L619;
      if (XVECLEN (x0, 0) == 6 && 1)
	goto L1861;
      break;
    case CALL:
      goto L1758;
    case UNSPEC_VOLATILE:
      if (XINT (x0, 1) == 0 && XVECLEN (x0, 0) == 1 && 1)
	goto L1799;
      if (XINT (x0, 1) == 3 && XVECLEN (x0, 0) == 1 && 1)
	goto L1833;
      break;
    case RETURN:
      if (reload_completed)
	return 335;
      break;
    case CONST_INT:
      if (XWINT (x0, 0) == 0 && 1)
	return 337;
      if (XWINT (x0, 0) == 2 && pnum_clobbers != 0 && 1)
	{
	  *pnum_clobbers = 2;
	  return 345;
	}
    }
  goto ret0;
 L325:
  return recog_3 (x0, insn, pnum_clobbers);

  L10:
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    default:
      break;
    case SET:
      goto L379;
    case CALL:
      goto L1749;
    case RETURN:
      goto L1803;
    }
  goto ret0;
 L379:
  return recog_6 (x0, insn, pnum_clobbers);

  L1749:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode && GET_CODE (x2) == MEM && 1)
    goto L1750;
  L1740:
  if (call_insn_operand (x2, QImode))
    {
      ro[0] = x2;
      goto L1741;
    }
  goto ret0;

  L1750:
  x3 = XEXP (x2, 0);
  if (symbolic_operand (x3, SImode))
    {
      ro[0] = x3;
      goto L1751;
    }
  goto L1740;

  L1751:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1752;
    }
  x2 = XEXP (x1, 0);
  goto L1740;

  L1752:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L1753;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1740;

  L1753:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 7 && 1)
    goto L1754;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1740;

  L1754:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L1755;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1740;

  L1755:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == REG && XINT (x3, 0) == 7 && 1)
    goto L1756;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1740;

  L1756:
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      ro[3] = x3;
      if (!HALF_PIC_P ())
	return 322;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1740;

  L1741:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1742;
    }
  goto ret0;

  L1742:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L1743;
  goto ret0;

  L1743:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 7 && 1)
    goto L1744;
  goto ret0;

  L1744:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L1745;
  goto ret0;

  L1745:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == REG && XINT (x3, 0) == 7 && 1)
    goto L1746;
  goto ret0;

  L1746:
  x3 = XEXP (x2, 1);
  if (immediate_operand (x3, SImode))
    {
      ro[3] = x3;
      return 321;
    }
  goto ret0;

  L1803:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE && 1)
    goto L1804;
  goto ret0;

  L1804:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[0] = x2;
      if (reload_completed)
	return 336;
      }
  goto ret0;

  L2094:
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    default:
      break;
    case UNSPEC:
      if (GET_MODE (x1) == SImode && XINT (x1, 1) == 3 && XVECLEN (x1, 0) == 1 && 1)
	goto L2095;
      break;
    case SET:
      goto L412;
    case CONST_INT:
      if (XWINT (x1, 0) == 2 && 1)
	goto L1845;
    }
  goto ret0;

  L2095:
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L2096;
    }
  goto ret0;

  L2096:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L2097;
  goto ret0;

  L2097:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 7 && 1)
    goto L2098;
  goto ret0;

  L2098:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MINUS && 1)
    goto L2099;
  goto ret0;

  L2099:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == REG && XINT (x3, 0) == 7 && 1)
    goto L2100;
  goto ret0;

  L2100:
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L2101;
  goto ret0;

  L2101:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2102;
  goto ret0;

  L2102:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[0]) && 1)
    if (TARGET_STACK_PROBE)
      return 385;
  goto ret0;
 L412:
  return recog_7 (x0, insn, pnum_clobbers);

  L1845:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1846;
  goto ret0;

  L1846:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 6 && 1)
    goto L1847;
  goto ret0;

  L1847:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1848;
  goto ret0;

  L1848:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 7 && 1)
    return 345;
  goto ret0;

  L605:
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L606;
  goto ret0;

  L606:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, DImode))
    {
      ro[0] = x2;
      goto L607;
    }
  goto ret0;

  L607:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == FIX && 1)
    goto L608;
  goto ret0;

  L608:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != FIX)
    goto ret0;
  switch (GET_MODE (x3))
    {
    default:
      break;
    case XFmode:
      goto L609;
    case DFmode:
      goto L635;
    case SFmode:
      goto L661;
    }
  goto ret0;

  L609:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, XFmode))
    {
      ro[1] = x4;
      goto L610;
    }
  goto ret0;

  L610:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L611;
  goto ret0;

  L611:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[1]) && 1)
    goto L612;
  goto ret0;

  L612:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L613;
  goto ret0;

  L613:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L614;
    }
  goto ret0;

  L614:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L615;
  goto ret0;

  L615:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L616;
    }
  goto ret0;

  L616:
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L617;
  goto ret0;

  L617:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      if (TARGET_80387)
	return 119;
      }
  goto ret0;

  L635:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      ro[1] = x4;
      goto L636;
    }
  goto ret0;

  L636:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L637;
  goto ret0;

  L637:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[1]) && 1)
    goto L638;
  goto ret0;

  L638:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L639;
  goto ret0;

  L639:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L640;
    }
  goto ret0;

  L640:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L641;
  goto ret0;

  L641:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L642;
    }
  goto ret0;

  L642:
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L643;
  goto ret0;

  L643:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      if (TARGET_80387)
	return 120;
      }
  goto ret0;

  L661:
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      ro[1] = x4;
      goto L662;
    }
  goto ret0;

  L662:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L663;
  goto ret0;

  L663:
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[1]) && 1)
    goto L664;
  goto ret0;

  L664:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L665;
  goto ret0;

  L665:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L666;
    }
  goto ret0;

  L666:
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L667;
  goto ret0;

  L667:
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L668;
    }
  goto ret0;

  L668:
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L669;
  goto ret0;

  L669:
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      if (TARGET_80387)
	return 121;
      }
  goto ret0;

  L619:
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L620;
  goto ret0;
 L620:
  return recog_8 (x0, insn, pnum_clobbers);

  L1861:
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L1862;
  goto ret0;
 L1862:
  return recog_9 (x0, insn, pnum_clobbers);

  L1758:
  x1 = XEXP (x0, 0);
  if (call_insn_operand (x1, QImode))
    {
      ro[0] = x1;
      goto L1759;
    }
  L1761:
  if (GET_MODE (x1) == QImode && GET_CODE (x1) == MEM && 1)
    goto L1762;
  goto ret0;

  L1759:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SImode))
    {
      ro[1] = x1;
      return 324;
    }
  x1 = XEXP (x0, 0);
  goto L1761;

  L1762:
  x2 = XEXP (x1, 0);
  if (symbolic_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L1763;
    }
  goto ret0;

  L1763:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SImode))
    {
      ro[1] = x1;
      if (!HALF_PIC_P ())
	return 325;
      }
  goto ret0;

  L1799:
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT && XWINT (x1, 0) == 0 && 1)
    return 333;
  goto ret0;

  L1833:
  x1 = XVECEXP (x0, 0, 0);
  ro[0] = x1;
  return 342;
 ret0: return -1;
}

rtx
split_insns (x0, insn)
     register rtx x0;
     rtx insn;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1, x2, x3, x4, x5, x6;
  rtx tem;

  L507:
  if (GET_CODE (x0) == SET && 1)
    goto L508;
  goto ret0;

  L508:
  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    default:
      break;
    case SImode:
      if (register_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L509;
	}
      break;
    case HImode:
      if (register_operand (x1, HImode))
	{
	  ro[0] = x1;
	  goto L521;
	}
    }
  goto ret0;

  L509:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode && GET_CODE (x1) == ZERO_EXTEND && 1)
    goto L510;
  goto ret0;

  L510:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case HImode:
      if (nonimmediate_operand (x2, HImode))
	{
	  ro[1] = x2;
	  if (reload_completed && TARGET_ZERO_EXTEND_WITH_AND && !reg_overlap_mentioned_p (operands[0], operands[1]))
	    return gen_split_88 (operands);
	  }
    L514:
      if (memory_operand (x2, HImode))
	{
	  ro[1] = x2;
	  if (reload_completed && TARGET_ZERO_EXTEND_WITH_AND && reg_overlap_mentioned_p (operands[0], operands[1]))
	    return gen_split_89 (operands);
	  }
      break;
    case QImode:
      if (nonimmediate_operand (x2, QImode))
	{
	  ro[1] = x2;
	  if (reload_completed && QI_REG_P (operands[0]) && TARGET_ZERO_EXTEND_WITH_AND
  && !reg_overlap_mentioned_p (operands[0], operands[1]))
	    return gen_split_95 (operands);
	  }
    L542:
      if (memory_operand (x2, QImode))
	{
	  ro[1] = x2;
	  if (reload_completed && QI_REG_P (operands[0]) && TARGET_ZERO_EXTEND_WITH_AND
  && reg_overlap_mentioned_p (operands[0], operands[1]))
	    return gen_split_96 (operands);
	  }
    L546:
      if (register_operand (x2, QImode))
	{
	  ro[1] = x2;
	  if (reload_completed && TARGET_ZERO_EXTEND_WITH_AND
  && ! reg_overlap_mentioned_p (operands[0], operands[1]))
	    return gen_split_97 (operands);
	  }
    }
  goto ret0;

  L521:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode && GET_CODE (x1) == ZERO_EXTEND && 1)
    goto L522;
  goto ret0;

  L522:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != QImode)
    goto ret0;
  if (nonimmediate_operand (x2, QImode))
    {
      ro[1] = x2;
      if (reload_completed && QI_REG_P (operands[0]) && TARGET_ZERO_EXTEND_WITH_AND
  && !reg_overlap_mentioned_p (operands[0], operands[1]))
	return gen_split_91 (operands);
      }
  L526:
  if (memory_operand (x2, QImode))
    {
      ro[1] = x2;
      if (reload_completed && QI_REG_P (operands[0]) && TARGET_ZERO_EXTEND_WITH_AND
  && reg_overlap_mentioned_p (operands[0], operands[1]))
	return gen_split_92 (operands);
      }
  L530:
  if (register_operand (x2, QImode))
    {
      ro[1] = x2;
      if (reload_completed && TARGET_ZERO_EXTEND_WITH_AND)
	return gen_split_93 (operands);
      }
  goto ret0;
 ret0: return 0;
}

