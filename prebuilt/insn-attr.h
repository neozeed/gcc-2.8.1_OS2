/* Generated automatically by the program `genattr'
from the machine description file `md'.  */

#define HAVE_ATTR_alternative
#define get_attr_alternative(insn) which_alternative
#define HAVE_ATTR_type
enum attr_type {TYPE_INTEGER, TYPE_IDIV, TYPE_IMUL, TYPE_FLD, TYPE_FPOP, TYPE_FPDIV, TYPE_FPMUL};
extern enum attr_type get_attr_type ();

#define HAVE_ATTR_cpu
enum attr_cpu {CPU_I386, CPU_I486, CPU_PENTIUM, CPU_PENTIUMPRO};
extern enum attr_cpu get_attr_cpu ();

#define INSN_SCHEDULING

extern int result_ready_cost PROTO((rtx));
extern int function_units_used PROTO((rtx));

extern struct function_unit_desc
{
  char *name;
  int bitmask;
  int multiplicity;
  int simultaneity;
  int default_cost;
  int max_issue_delay;
  int (*ready_cost_function) ();
  int (*conflict_cost_function) ();
  int max_blockage;
  unsigned int (*blockage_range_function) ();
  int (*blockage_function) ();
} function_units[];

#define FUNCTION_UNITS_SIZE 2
#define MIN_MULTIPLICITY 1
#define MAX_MULTIPLICITY 1
#define MIN_SIMULTANEITY 0
#define MAX_SIMULTANEITY 0
#define MIN_READY_COST 1
#define MAX_READY_COST 10
#define MIN_ISSUE_DELAY 1
#define MAX_ISSUE_DELAY 10
#define MIN_BLOCKAGE 1
#define MAX_BLOCKAGE 10
#define BLOCKAGE_BITS 5
#define INSN_QUEUE_SIZE 16

#define ATTR_FLAG_forward	0x1
#define ATTR_FLAG_backward	0x2
#define ATTR_FLAG_likely	0x4
#define ATTR_FLAG_very_likely	0x8
#define ATTR_FLAG_unlikely	0x10
#define ATTR_FLAG_very_unlikely	0x20
