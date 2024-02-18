/* Generated automatically by the program `genflags'
from the machine description file `md'.  */

#define HAVE_tstsi_1 1
#define HAVE_tstsi 1
#define HAVE_tsthi_1 1
#define HAVE_tsthi 1
#define HAVE_tstqi_1 1
#define HAVE_tstqi 1
#define HAVE_tstsf_cc (TARGET_80387 && ! TARGET_IEEE_FP)
#define HAVE_tstsf (TARGET_80387 && ! TARGET_IEEE_FP)
#define HAVE_tstdf_cc (TARGET_80387 && ! TARGET_IEEE_FP)
#define HAVE_tstdf (TARGET_80387 && ! TARGET_IEEE_FP)
#define HAVE_tstxf_cc (TARGET_80387 && ! TARGET_IEEE_FP)
#define HAVE_tstxf (TARGET_80387 && ! TARGET_IEEE_FP)
#define HAVE_cmpsi_1 (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
#define HAVE_cmpsi 1
#define HAVE_cmphi_1 (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
#define HAVE_cmphi 1
#define HAVE_cmpqi_1 (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM)
#define HAVE_cmpqi 1
#define HAVE_cmpsf_cc_1 (TARGET_80387 \
   && (GET_CODE (operands[0]) != MEM || GET_CODE (operands[1]) != MEM))
#define HAVE_cmpxf (TARGET_80387)
#define HAVE_cmpdf (TARGET_80387)
#define HAVE_cmpsf (TARGET_80387)
#define HAVE_cmpxf_cc (TARGET_80387)
#define HAVE_cmpxf_ccfpeq (TARGET_80387)
#define HAVE_cmpdf_cc (TARGET_80387)
#define HAVE_cmpdf_ccfpeq (TARGET_80387)
#define HAVE_cmpsf_cc (TARGET_80387)
#define HAVE_cmpsf_ccfpeq (TARGET_80387)
#define HAVE_movsi 1
#define HAVE_movhi 1
#define HAVE_movstricthi 1
#define HAVE_movqi 1
#define HAVE_movstrictqi 1
#define HAVE_movsf 1
#define HAVE_movsf_push_nomove (!TARGET_MOVE)
#define HAVE_movsf_push 1
#define HAVE_movsf_mem 1
#define HAVE_movsf_normal ((!TARGET_MOVE || GET_CODE (operands[0]) != MEM) || (GET_CODE (operands[1]) != MEM))
#define HAVE_swapsf 1
#define HAVE_movdf 1
#define HAVE_movdf_push_nomove (!TARGET_MOVE)
#define HAVE_movdf_push 1
#define HAVE_movdf_mem 1
#define HAVE_swapdf 1
#define HAVE_movxf 1
#define HAVE_movxf_push_nomove (!TARGET_MOVE)
#define HAVE_movxf_push 1
#define HAVE_movxf_mem 1
#define HAVE_swapxf 1
#define HAVE_movdi 1
#define HAVE_zero_extendhisi2 1
#define HAVE_zero_extendqihi2 1
#define HAVE_zero_extendqisi2 1
#define HAVE_zero_extendsidi2 1
#define HAVE_extendsidi2 1
#define HAVE_extendhisi2 1
#define HAVE_extendqihi2 1
#define HAVE_extendqisi2 1
#define HAVE_truncdisi2 1
#define HAVE_extendsfdf2 (TARGET_80387)
#define HAVE_extenddfxf2 (TARGET_80387)
#define HAVE_extendsfxf2 (TARGET_80387)
#define HAVE_truncdfsf2 (TARGET_80387)
#define HAVE_truncxfsf2 (TARGET_80387)
#define HAVE_truncxfdf2 (TARGET_80387)
#define HAVE_fixuns_truncxfsi2 (TARGET_80387)
#define HAVE_fixuns_truncdfsi2 (TARGET_80387)
#define HAVE_fixuns_truncsfsi2 (TARGET_80387)
#define HAVE_fix_truncxfdi2 (TARGET_80387)
#define HAVE_fix_truncdfdi2 (TARGET_80387)
#define HAVE_fix_truncsfdi2 (TARGET_80387)
#define HAVE_fix_truncxfsi2 (TARGET_80387)
#define HAVE_fix_truncdfsi2 (TARGET_80387)
#define HAVE_fix_truncsfsi2 (TARGET_80387)
#define HAVE_floatsisf2 (TARGET_80387)
#define HAVE_floatdisf2 (TARGET_80387)
#define HAVE_floatsidf2 (TARGET_80387)
#define HAVE_floatdidf2 (TARGET_80387)
#define HAVE_floatsixf2 (TARGET_80387)
#define HAVE_floatdixf2 (TARGET_80387 && LONG_DOUBLE_TYPE_SIZE == 96)
#define HAVE_addsidi3_1 1
#define HAVE_addsidi3_2 1
#define HAVE_adddi3 1
#define HAVE_addsi3 1
#define HAVE_movsi_lea 1
#define HAVE_addhi3 1
#define HAVE_addqi3 1
#define HAVE_addxf3 (TARGET_80387)
#define HAVE_adddf3 (TARGET_80387)
#define HAVE_addsf3 (TARGET_80387)
#define HAVE_subsidi3 1
#define HAVE_subdi3 1
#define HAVE_subsi3 1
#define HAVE_subhi3 1
#define HAVE_subqi3 1
#define HAVE_subxf3 (TARGET_80387)
#define HAVE_subdf3 (TARGET_80387)
#define HAVE_subsf3 (TARGET_80387)
#define HAVE_mulhi3 1
#define HAVE_mulsi3 1
#define HAVE_umulqihi3 1
#define HAVE_mulqihi3 1
#define HAVE_umulsidi3 (TARGET_WIDE_MULTIPLY)
#define HAVE_mulsidi3 (TARGET_WIDE_MULTIPLY)
#define HAVE_umulsi3_highpart (TARGET_WIDE_MULTIPLY)
#define HAVE_smulsi3_highpart (TARGET_WIDE_MULTIPLY)
#define HAVE_mulxf3 (TARGET_80387)
#define HAVE_muldf3 (TARGET_80387)
#define HAVE_mulsf3 (TARGET_80387)
#define HAVE_divqi3 1
#define HAVE_udivqi3 1
#define HAVE_divxf3 (TARGET_80387)
#define HAVE_divdf3 (TARGET_80387)
#define HAVE_divsf3 (TARGET_80387)
#define HAVE_divmodsi4 1
#define HAVE_divmodhi4 1
#define HAVE_udivmodsi4 1
#define HAVE_udivmodhi4 1
#define HAVE_andsi3 1
#define HAVE_andhi3 1
#define HAVE_andqi3 1
#define HAVE_iorsi3 1
#define HAVE_iorhi3 1
#define HAVE_iorqi3 1
#define HAVE_xorsi3 1
#define HAVE_xorhi3 1
#define HAVE_xorqi3 1
#define HAVE_negdi2 1
#define HAVE_negsi2 1
#define HAVE_neghi2 1
#define HAVE_negqi2 1
#define HAVE_negsf2 (TARGET_80387)
#define HAVE_negdf2 (TARGET_80387)
#define HAVE_negxf2 (TARGET_80387)
#define HAVE_abssf2 (TARGET_80387)
#define HAVE_absdf2 (TARGET_80387)
#define HAVE_absxf2 (TARGET_80387)
#define HAVE_sqrtsf2 (! TARGET_NO_FANCY_MATH_387 && TARGET_80387)
#define HAVE_sqrtdf2 (! TARGET_NO_FANCY_MATH_387 && TARGET_80387 \
   && (TARGET_IEEE_FP || flag_fast_math) )
#define HAVE_sqrtxf2 (! TARGET_NO_FANCY_MATH_387 && TARGET_80387  \
   && (TARGET_IEEE_FP || flag_fast_math) )
#define HAVE_sindf2 (! TARGET_NO_FANCY_MATH_387 && TARGET_80387 && flag_fast_math)
#define HAVE_sinsf2 (! TARGET_NO_FANCY_MATH_387 && TARGET_80387 && flag_fast_math)
#define HAVE_sinxf2 (! TARGET_NO_FANCY_MATH_387 && TARGET_80387 && flag_fast_math)
#define HAVE_cosdf2 (! TARGET_NO_FANCY_MATH_387 && TARGET_80387 && flag_fast_math)
#define HAVE_cossf2 (! TARGET_NO_FANCY_MATH_387 && TARGET_80387 && flag_fast_math)
#define HAVE_cosxf2 (! TARGET_NO_FANCY_MATH_387 && TARGET_80387 && flag_fast_math)
#define HAVE_one_cmplsi2 1
#define HAVE_one_cmplhi2 1
#define HAVE_one_cmplqi2 1
#define HAVE_ashldi3 1
#define HAVE_ashldi3_const_int (CONST_OK_FOR_LETTER_P (INTVAL (operands[2]), 'J'))
#define HAVE_ashldi3_non_const_int 1
#define HAVE_ashlsi3 1
#define HAVE_ashlhi3 1
#define HAVE_ashlqi3 1
#define HAVE_ashrdi3 1
#define HAVE_ashldi3_32 1
#define HAVE_ashrdi3_const_int (CONST_OK_FOR_LETTER_P (INTVAL (operands[2]), 'J'))
#define HAVE_ashrdi3_non_const_int 1
#define HAVE_ashrsi3 1
#define HAVE_ashrhi3 1
#define HAVE_ashrqi3 1
#define HAVE_lshrdi3 1
#define HAVE_lshrdi3_32 1
#define HAVE_lshrdi3_const_int (CONST_OK_FOR_LETTER_P (INTVAL (operands[2]), 'J'))
#define HAVE_lshrdi3_non_const_int 1
#define HAVE_lshrsi3 1
#define HAVE_lshrhi3 1
#define HAVE_lshrqi3 1
#define HAVE_rotlsi3 1
#define HAVE_rotlhi3 1
#define HAVE_rotlqi3 1
#define HAVE_rotrsi3 1
#define HAVE_rotrhi3 1
#define HAVE_rotrqi3 1
#define HAVE_seq 1
#define HAVE_sne 1
#define HAVE_sgt 1
#define HAVE_sgtu 1
#define HAVE_slt 1
#define HAVE_sltu 1
#define HAVE_sge 1
#define HAVE_sgeu 1
#define HAVE_sle 1
#define HAVE_sleu 1
#define HAVE_beq 1
#define HAVE_bne 1
#define HAVE_bgt 1
#define HAVE_bgtu 1
#define HAVE_blt 1
#define HAVE_bltu 1
#define HAVE_bge 1
#define HAVE_bgeu 1
#define HAVE_ble 1
#define HAVE_bleu 1
#define HAVE_jump 1
#define HAVE_indirect_jump 1
#define HAVE_decrement_and_branch_until_zero 1
#define HAVE_casesi (flag_pic)
#define HAVE_tablejump 1
#define HAVE_call_pop 1
#define HAVE_call 1
#define HAVE_call_value_pop 1
#define HAVE_call_value 1
#define HAVE_untyped_call 1
#define HAVE_blockage 1
#define HAVE_return (ix86_can_use_return_insn_p ())
#define HAVE_return_internal (reload_completed)
#define HAVE_return_pop_internal (reload_completed)
#define HAVE_nop 1
#define HAVE_prologue 1
#define HAVE_prologue_set_stack_ptr 1
#define HAVE_prologue_set_got 1
#define HAVE_prologue_get_pc 1
#define HAVE_prologue_get_pc_and_set_got 1
#define HAVE_epilogue 1
#define HAVE_epilogue_set_stack_ptr 1
#define HAVE_leave 1
#define HAVE_pop 1
#define HAVE_movstrsi 1
#define HAVE_clrstrsi 1
#define HAVE_cmpstrsi 1
#define HAVE_ffssi2 1
#define HAVE_ffshi2 1
#define HAVE_strlensi 1
#define HAVE_movsicc (TARGET_CMOVE)
#define HAVE_movhicc (TARGET_CMOVE)
#define HAVE_movsicc_1 (TARGET_CMOVE)
#define HAVE_movhicc_1 (TARGET_CMOVE)
#define HAVE_movsfcc (0 && TARGET_CMOVE)
#define HAVE_movdfcc (0 && TARGET_CMOVE)
#define HAVE_movxfcc (0 && TARGET_CMOVE)
#define HAVE_movsfcc_1 (TARGET_CMOVE)
#define HAVE_movdfcc_1 (TARGET_CMOVE)
#define HAVE_strlensi_unroll (optimize > 1)
#define HAVE_strlensi_unroll4 ((TARGET_USE_ANY_REG && optimize > 1))
#define HAVE_strlensi_unroll5 ((TARGET_USE_Q_REG && optimize > 1))
#define HAVE_allocate_stack_worker (TARGET_STACK_PROBE)
#define HAVE_allocate_stack (TARGET_STACK_PROBE)
#define HAVE_nonlocal_goto_receiver (flag_pic)

#ifndef NO_MD_PROTOTYPES
extern rtx gen_tstsi_1                         PROTO((rtx));
extern rtx gen_tstsi                           PROTO((rtx));
extern rtx gen_tsthi_1                         PROTO((rtx));
extern rtx gen_tsthi                           PROTO((rtx));
extern rtx gen_tstqi_1                         PROTO((rtx));
extern rtx gen_tstqi                           PROTO((rtx));
extern rtx gen_tstsf_cc                        PROTO((rtx));
extern rtx gen_tstsf                           PROTO((rtx));
extern rtx gen_tstdf_cc                        PROTO((rtx));
extern rtx gen_tstdf                           PROTO((rtx));
extern rtx gen_tstxf_cc                        PROTO((rtx));
extern rtx gen_tstxf                           PROTO((rtx));
extern rtx gen_cmpsi_1                         PROTO((rtx, rtx));
extern rtx gen_cmpsi                           PROTO((rtx, rtx));
extern rtx gen_cmphi_1                         PROTO((rtx, rtx));
extern rtx gen_cmphi                           PROTO((rtx, rtx));
extern rtx gen_cmpqi_1                         PROTO((rtx, rtx));
extern rtx gen_cmpqi                           PROTO((rtx, rtx));
extern rtx gen_cmpsf_cc_1                      PROTO((rtx, rtx, rtx));
extern rtx gen_cmpxf                           PROTO((rtx, rtx));
extern rtx gen_cmpdf                           PROTO((rtx, rtx));
extern rtx gen_cmpsf                           PROTO((rtx, rtx));
extern rtx gen_cmpxf_cc                        PROTO((rtx, rtx));
extern rtx gen_cmpxf_ccfpeq                    PROTO((rtx, rtx));
extern rtx gen_cmpdf_cc                        PROTO((rtx, rtx));
extern rtx gen_cmpdf_ccfpeq                    PROTO((rtx, rtx));
extern rtx gen_cmpsf_cc                        PROTO((rtx, rtx));
extern rtx gen_cmpsf_ccfpeq                    PROTO((rtx, rtx));
extern rtx gen_movsi                           PROTO((rtx, rtx));
extern rtx gen_movhi                           PROTO((rtx, rtx));
extern rtx gen_movstricthi                     PROTO((rtx, rtx));
extern rtx gen_movqi                           PROTO((rtx, rtx));
extern rtx gen_movstrictqi                     PROTO((rtx, rtx));
extern rtx gen_movsf                           PROTO((rtx, rtx));
extern rtx gen_movsf_push_nomove               PROTO((rtx, rtx));
extern rtx gen_movsf_push                      PROTO((rtx, rtx));
extern rtx gen_movsf_mem                       PROTO((rtx, rtx));
extern rtx gen_movsf_normal                    PROTO((rtx, rtx));
extern rtx gen_swapsf                          PROTO((rtx, rtx));
extern rtx gen_movdf                           PROTO((rtx, rtx));
extern rtx gen_movdf_push_nomove               PROTO((rtx, rtx));
extern rtx gen_movdf_push                      PROTO((rtx, rtx));
extern rtx gen_movdf_mem                       PROTO((rtx, rtx));
extern rtx gen_swapdf                          PROTO((rtx, rtx));
extern rtx gen_movxf                           PROTO((rtx, rtx));
extern rtx gen_movxf_push_nomove               PROTO((rtx, rtx));
extern rtx gen_movxf_push                      PROTO((rtx, rtx));
extern rtx gen_movxf_mem                       PROTO((rtx, rtx));
extern rtx gen_swapxf                          PROTO((rtx, rtx));
extern rtx gen_movdi                           PROTO((rtx, rtx));
extern rtx gen_zero_extendhisi2                PROTO((rtx, rtx));
extern rtx gen_zero_extendqihi2                PROTO((rtx, rtx));
extern rtx gen_zero_extendqisi2                PROTO((rtx, rtx));
extern rtx gen_zero_extendsidi2                PROTO((rtx, rtx));
extern rtx gen_extendsidi2                     PROTO((rtx, rtx));
extern rtx gen_extendhisi2                     PROTO((rtx, rtx));
extern rtx gen_extendqihi2                     PROTO((rtx, rtx));
extern rtx gen_extendqisi2                     PROTO((rtx, rtx));
extern rtx gen_truncdisi2                      PROTO((rtx, rtx));
extern rtx gen_extendsfdf2                     PROTO((rtx, rtx));
extern rtx gen_extenddfxf2                     PROTO((rtx, rtx));
extern rtx gen_extendsfxf2                     PROTO((rtx, rtx));
extern rtx gen_truncdfsf2                      PROTO((rtx, rtx));
extern rtx gen_truncxfsf2                      PROTO((rtx, rtx));
extern rtx gen_truncxfdf2                      PROTO((rtx, rtx));
extern rtx gen_fixuns_truncxfsi2               PROTO((rtx, rtx));
extern rtx gen_fixuns_truncdfsi2               PROTO((rtx, rtx));
extern rtx gen_fixuns_truncsfsi2               PROTO((rtx, rtx));
extern rtx gen_fix_truncxfdi2                  PROTO((rtx, rtx));
extern rtx gen_fix_truncdfdi2                  PROTO((rtx, rtx));
extern rtx gen_fix_truncsfdi2                  PROTO((rtx, rtx));
extern rtx gen_fix_truncxfsi2                  PROTO((rtx, rtx));
extern rtx gen_fix_truncdfsi2                  PROTO((rtx, rtx));
extern rtx gen_fix_truncsfsi2                  PROTO((rtx, rtx));
extern rtx gen_floatsisf2                      PROTO((rtx, rtx));
extern rtx gen_floatdisf2                      PROTO((rtx, rtx));
extern rtx gen_floatsidf2                      PROTO((rtx, rtx));
extern rtx gen_floatdidf2                      PROTO((rtx, rtx));
extern rtx gen_floatsixf2                      PROTO((rtx, rtx));
extern rtx gen_floatdixf2                      PROTO((rtx, rtx));
extern rtx gen_addsidi3_1                      PROTO((rtx, rtx, rtx));
extern rtx gen_addsidi3_2                      PROTO((rtx, rtx, rtx));
extern rtx gen_adddi3                          PROTO((rtx, rtx, rtx));
extern rtx gen_addsi3                          PROTO((rtx, rtx, rtx));
extern rtx gen_movsi_lea                       PROTO((rtx, rtx));
extern rtx gen_addhi3                          PROTO((rtx, rtx, rtx));
extern rtx gen_addqi3                          PROTO((rtx, rtx, rtx));
extern rtx gen_addxf3                          PROTO((rtx, rtx, rtx));
extern rtx gen_adddf3                          PROTO((rtx, rtx, rtx));
extern rtx gen_addsf3                          PROTO((rtx, rtx, rtx));
extern rtx gen_subsidi3                        PROTO((rtx, rtx, rtx));
extern rtx gen_subdi3                          PROTO((rtx, rtx, rtx));
extern rtx gen_subsi3                          PROTO((rtx, rtx, rtx));
extern rtx gen_subhi3                          PROTO((rtx, rtx, rtx));
extern rtx gen_subqi3                          PROTO((rtx, rtx, rtx));
extern rtx gen_subxf3                          PROTO((rtx, rtx, rtx));
extern rtx gen_subdf3                          PROTO((rtx, rtx, rtx));
extern rtx gen_subsf3                          PROTO((rtx, rtx, rtx));
extern rtx gen_mulhi3                          PROTO((rtx, rtx, rtx));
extern rtx gen_mulsi3                          PROTO((rtx, rtx, rtx));
extern rtx gen_umulqihi3                       PROTO((rtx, rtx, rtx));
extern rtx gen_mulqihi3                        PROTO((rtx, rtx, rtx));
extern rtx gen_umulsidi3                       PROTO((rtx, rtx, rtx));
extern rtx gen_mulsidi3                        PROTO((rtx, rtx, rtx));
extern rtx gen_umulsi3_highpart                PROTO((rtx, rtx, rtx));
extern rtx gen_smulsi3_highpart                PROTO((rtx, rtx, rtx));
extern rtx gen_mulxf3                          PROTO((rtx, rtx, rtx));
extern rtx gen_muldf3                          PROTO((rtx, rtx, rtx));
extern rtx gen_mulsf3                          PROTO((rtx, rtx, rtx));
extern rtx gen_divqi3                          PROTO((rtx, rtx, rtx));
extern rtx gen_udivqi3                         PROTO((rtx, rtx, rtx));
extern rtx gen_divxf3                          PROTO((rtx, rtx, rtx));
extern rtx gen_divdf3                          PROTO((rtx, rtx, rtx));
extern rtx gen_divsf3                          PROTO((rtx, rtx, rtx));
extern rtx gen_divmodsi4                       PROTO((rtx, rtx, rtx, rtx));
extern rtx gen_divmodhi4                       PROTO((rtx, rtx, rtx, rtx));
extern rtx gen_udivmodsi4                      PROTO((rtx, rtx, rtx, rtx));
extern rtx gen_udivmodhi4                      PROTO((rtx, rtx, rtx, rtx));
extern rtx gen_andsi3                          PROTO((rtx, rtx, rtx));
extern rtx gen_andhi3                          PROTO((rtx, rtx, rtx));
extern rtx gen_andqi3                          PROTO((rtx, rtx, rtx));
extern rtx gen_iorsi3                          PROTO((rtx, rtx, rtx));
extern rtx gen_iorhi3                          PROTO((rtx, rtx, rtx));
extern rtx gen_iorqi3                          PROTO((rtx, rtx, rtx));
extern rtx gen_xorsi3                          PROTO((rtx, rtx, rtx));
extern rtx gen_xorhi3                          PROTO((rtx, rtx, rtx));
extern rtx gen_xorqi3                          PROTO((rtx, rtx, rtx));
extern rtx gen_negdi2                          PROTO((rtx, rtx));
extern rtx gen_negsi2                          PROTO((rtx, rtx));
extern rtx gen_neghi2                          PROTO((rtx, rtx));
extern rtx gen_negqi2                          PROTO((rtx, rtx));
extern rtx gen_negsf2                          PROTO((rtx, rtx));
extern rtx gen_negdf2                          PROTO((rtx, rtx));
extern rtx gen_negxf2                          PROTO((rtx, rtx));
extern rtx gen_abssf2                          PROTO((rtx, rtx));
extern rtx gen_absdf2                          PROTO((rtx, rtx));
extern rtx gen_absxf2                          PROTO((rtx, rtx));
extern rtx gen_sqrtsf2                         PROTO((rtx, rtx));
extern rtx gen_sqrtdf2                         PROTO((rtx, rtx));
extern rtx gen_sqrtxf2                         PROTO((rtx, rtx));
extern rtx gen_sindf2                          PROTO((rtx, rtx));
extern rtx gen_sinsf2                          PROTO((rtx, rtx));
extern rtx gen_sinxf2                          PROTO((rtx, rtx));
extern rtx gen_cosdf2                          PROTO((rtx, rtx));
extern rtx gen_cossf2                          PROTO((rtx, rtx));
extern rtx gen_cosxf2                          PROTO((rtx, rtx));
extern rtx gen_one_cmplsi2                     PROTO((rtx, rtx));
extern rtx gen_one_cmplhi2                     PROTO((rtx, rtx));
extern rtx gen_one_cmplqi2                     PROTO((rtx, rtx));
extern rtx gen_ashldi3                         PROTO((rtx, rtx, rtx));
extern rtx gen_ashldi3_const_int               PROTO((rtx, rtx, rtx));
extern rtx gen_ashldi3_non_const_int           PROTO((rtx, rtx, rtx));
extern rtx gen_ashlsi3                         PROTO((rtx, rtx, rtx));
extern rtx gen_ashlhi3                         PROTO((rtx, rtx, rtx));
extern rtx gen_ashlqi3                         PROTO((rtx, rtx, rtx));
extern rtx gen_ashrdi3                         PROTO((rtx, rtx, rtx));
extern rtx gen_ashldi3_32                      PROTO((rtx, rtx));
extern rtx gen_ashrdi3_const_int               PROTO((rtx, rtx, rtx));
extern rtx gen_ashrdi3_non_const_int           PROTO((rtx, rtx, rtx));
extern rtx gen_ashrsi3                         PROTO((rtx, rtx, rtx));
extern rtx gen_ashrhi3                         PROTO((rtx, rtx, rtx));
extern rtx gen_ashrqi3                         PROTO((rtx, rtx, rtx));
extern rtx gen_lshrdi3                         PROTO((rtx, rtx, rtx));
extern rtx gen_lshrdi3_32                      PROTO((rtx, rtx));
extern rtx gen_lshrdi3_const_int               PROTO((rtx, rtx, rtx));
extern rtx gen_lshrdi3_non_const_int           PROTO((rtx, rtx, rtx));
extern rtx gen_lshrsi3                         PROTO((rtx, rtx, rtx));
extern rtx gen_lshrhi3                         PROTO((rtx, rtx, rtx));
extern rtx gen_lshrqi3                         PROTO((rtx, rtx, rtx));
extern rtx gen_rotlsi3                         PROTO((rtx, rtx, rtx));
extern rtx gen_rotlhi3                         PROTO((rtx, rtx, rtx));
extern rtx gen_rotlqi3                         PROTO((rtx, rtx, rtx));
extern rtx gen_rotrsi3                         PROTO((rtx, rtx, rtx));
extern rtx gen_rotrhi3                         PROTO((rtx, rtx, rtx));
extern rtx gen_rotrqi3                         PROTO((rtx, rtx, rtx));
extern rtx gen_seq                             PROTO((rtx));
extern rtx gen_sne                             PROTO((rtx));
extern rtx gen_sgt                             PROTO((rtx));
extern rtx gen_sgtu                            PROTO((rtx));
extern rtx gen_slt                             PROTO((rtx));
extern rtx gen_sltu                            PROTO((rtx));
extern rtx gen_sge                             PROTO((rtx));
extern rtx gen_sgeu                            PROTO((rtx));
extern rtx gen_sle                             PROTO((rtx));
extern rtx gen_sleu                            PROTO((rtx));
extern rtx gen_beq                             PROTO((rtx));
extern rtx gen_bne                             PROTO((rtx));
extern rtx gen_bgt                             PROTO((rtx));
extern rtx gen_bgtu                            PROTO((rtx));
extern rtx gen_blt                             PROTO((rtx));
extern rtx gen_bltu                            PROTO((rtx));
extern rtx gen_bge                             PROTO((rtx));
extern rtx gen_bgeu                            PROTO((rtx));
extern rtx gen_ble                             PROTO((rtx));
extern rtx gen_bleu                            PROTO((rtx));
extern rtx gen_jump                            PROTO((rtx));
extern rtx gen_indirect_jump                   PROTO((rtx));
extern rtx gen_decrement_and_branch_until_zero PROTO((rtx, rtx));
extern rtx gen_casesi                          PROTO((rtx, rtx, rtx, rtx, rtx));
extern rtx gen_tablejump                       PROTO((rtx, rtx));
extern rtx gen_untyped_call                    PROTO((rtx, rtx, rtx));
extern rtx gen_blockage                        PROTO((void));
extern rtx gen_return                          PROTO((void));
extern rtx gen_return_internal                 PROTO((void));
extern rtx gen_return_pop_internal             PROTO((rtx));
extern rtx gen_nop                             PROTO((void));
extern rtx gen_prologue                        PROTO((void));
extern rtx gen_prologue_set_stack_ptr          PROTO((rtx));
extern rtx gen_prologue_set_got                PROTO((rtx, rtx, rtx));
extern rtx gen_prologue_get_pc                 PROTO((rtx, rtx));
extern rtx gen_prologue_get_pc_and_set_got     PROTO((rtx));
extern rtx gen_epilogue                        PROTO((void));
extern rtx gen_epilogue_set_stack_ptr          PROTO((void));
extern rtx gen_leave                           PROTO((void));
extern rtx gen_pop                             PROTO((rtx));
extern rtx gen_movstrsi                        PROTO((rtx, rtx, rtx, rtx));
extern rtx gen_clrstrsi                        PROTO((rtx, rtx, rtx));
extern rtx gen_cmpstrsi                        PROTO((rtx, rtx, rtx, rtx, rtx));
extern rtx gen_ffssi2                          PROTO((rtx, rtx));
extern rtx gen_ffshi2                          PROTO((rtx, rtx));
extern rtx gen_strlensi                        PROTO((rtx, rtx, rtx, rtx));
extern rtx gen_movsicc                         PROTO((rtx, rtx, rtx, rtx));
extern rtx gen_movhicc                         PROTO((rtx, rtx, rtx, rtx));
extern rtx gen_movsicc_1                       PROTO((rtx, rtx, rtx, rtx));
extern rtx gen_movhicc_1                       PROTO((rtx, rtx, rtx, rtx));
extern rtx gen_movsfcc                         PROTO((rtx, rtx, rtx, rtx));
extern rtx gen_movdfcc                         PROTO((rtx, rtx, rtx, rtx));
extern rtx gen_movxfcc                         PROTO((rtx, rtx, rtx, rtx));
extern rtx gen_movsfcc_1                       PROTO((rtx, rtx, rtx, rtx));
extern rtx gen_movdfcc_1                       PROTO((rtx, rtx, rtx, rtx));
extern rtx gen_strlensi_unroll                 PROTO((rtx, rtx, rtx));
extern rtx gen_strlensi_unroll4                PROTO((rtx, rtx, rtx, rtx));
extern rtx gen_strlensi_unroll5                PROTO((rtx, rtx, rtx, rtx));
extern rtx gen_allocate_stack_worker           PROTO((rtx));
extern rtx gen_allocate_stack                  PROTO((rtx, rtx));
extern rtx gen_nonlocal_goto_receiver          PROTO((void));

#ifdef MD_CALL_PROTOTYPES
extern rtx gen_call_pop                        PROTO((rtx, rtx, rtx));
extern rtx gen_call                            PROTO((rtx, rtx));
extern rtx gen_call_value_pop                  PROTO((rtx, rtx, rtx, rtx));
extern rtx gen_call_value                      PROTO((rtx, rtx, rtx));

#else /* !MD_CALL_PROTOTYPES */
extern rtx gen_call_pop ();
extern rtx gen_call ();
extern rtx gen_call_value_pop ();
extern rtx gen_call_value ();
#endif /* !MD_CALL_PROTOTYPES */

#else  /* NO_MD_PROTOTYPES */
extern rtx gen_tstsi_1 ();
extern rtx gen_tstsi ();
extern rtx gen_tsthi_1 ();
extern rtx gen_tsthi ();
extern rtx gen_tstqi_1 ();
extern rtx gen_tstqi ();
extern rtx gen_tstsf_cc ();
extern rtx gen_tstsf ();
extern rtx gen_tstdf_cc ();
extern rtx gen_tstdf ();
extern rtx gen_tstxf_cc ();
extern rtx gen_tstxf ();
extern rtx gen_cmpsi_1 ();
extern rtx gen_cmpsi ();
extern rtx gen_cmphi_1 ();
extern rtx gen_cmphi ();
extern rtx gen_cmpqi_1 ();
extern rtx gen_cmpqi ();
extern rtx gen_cmpsf_cc_1 ();
extern rtx gen_cmpxf ();
extern rtx gen_cmpdf ();
extern rtx gen_cmpsf ();
extern rtx gen_cmpxf_cc ();
extern rtx gen_cmpxf_ccfpeq ();
extern rtx gen_cmpdf_cc ();
extern rtx gen_cmpdf_ccfpeq ();
extern rtx gen_cmpsf_cc ();
extern rtx gen_cmpsf_ccfpeq ();
extern rtx gen_movsi ();
extern rtx gen_movhi ();
extern rtx gen_movstricthi ();
extern rtx gen_movqi ();
extern rtx gen_movstrictqi ();
extern rtx gen_movsf ();
extern rtx gen_movsf_push_nomove ();
extern rtx gen_movsf_push ();
extern rtx gen_movsf_mem ();
extern rtx gen_movsf_normal ();
extern rtx gen_swapsf ();
extern rtx gen_movdf ();
extern rtx gen_movdf_push_nomove ();
extern rtx gen_movdf_push ();
extern rtx gen_movdf_mem ();
extern rtx gen_swapdf ();
extern rtx gen_movxf ();
extern rtx gen_movxf_push_nomove ();
extern rtx gen_movxf_push ();
extern rtx gen_movxf_mem ();
extern rtx gen_swapxf ();
extern rtx gen_movdi ();
extern rtx gen_zero_extendhisi2 ();
extern rtx gen_zero_extendqihi2 ();
extern rtx gen_zero_extendqisi2 ();
extern rtx gen_zero_extendsidi2 ();
extern rtx gen_extendsidi2 ();
extern rtx gen_extendhisi2 ();
extern rtx gen_extendqihi2 ();
extern rtx gen_extendqisi2 ();
extern rtx gen_truncdisi2 ();
extern rtx gen_extendsfdf2 ();
extern rtx gen_extenddfxf2 ();
extern rtx gen_extendsfxf2 ();
extern rtx gen_truncdfsf2 ();
extern rtx gen_truncxfsf2 ();
extern rtx gen_truncxfdf2 ();
extern rtx gen_fixuns_truncxfsi2 ();
extern rtx gen_fixuns_truncdfsi2 ();
extern rtx gen_fixuns_truncsfsi2 ();
extern rtx gen_fix_truncxfdi2 ();
extern rtx gen_fix_truncdfdi2 ();
extern rtx gen_fix_truncsfdi2 ();
extern rtx gen_fix_truncxfsi2 ();
extern rtx gen_fix_truncdfsi2 ();
extern rtx gen_fix_truncsfsi2 ();
extern rtx gen_floatsisf2 ();
extern rtx gen_floatdisf2 ();
extern rtx gen_floatsidf2 ();
extern rtx gen_floatdidf2 ();
extern rtx gen_floatsixf2 ();
extern rtx gen_floatdixf2 ();
extern rtx gen_addsidi3_1 ();
extern rtx gen_addsidi3_2 ();
extern rtx gen_adddi3 ();
extern rtx gen_addsi3 ();
extern rtx gen_movsi_lea ();
extern rtx gen_addhi3 ();
extern rtx gen_addqi3 ();
extern rtx gen_addxf3 ();
extern rtx gen_adddf3 ();
extern rtx gen_addsf3 ();
extern rtx gen_subsidi3 ();
extern rtx gen_subdi3 ();
extern rtx gen_subsi3 ();
extern rtx gen_subhi3 ();
extern rtx gen_subqi3 ();
extern rtx gen_subxf3 ();
extern rtx gen_subdf3 ();
extern rtx gen_subsf3 ();
extern rtx gen_mulhi3 ();
extern rtx gen_mulsi3 ();
extern rtx gen_umulqihi3 ();
extern rtx gen_mulqihi3 ();
extern rtx gen_umulsidi3 ();
extern rtx gen_mulsidi3 ();
extern rtx gen_umulsi3_highpart ();
extern rtx gen_smulsi3_highpart ();
extern rtx gen_mulxf3 ();
extern rtx gen_muldf3 ();
extern rtx gen_mulsf3 ();
extern rtx gen_divqi3 ();
extern rtx gen_udivqi3 ();
extern rtx gen_divxf3 ();
extern rtx gen_divdf3 ();
extern rtx gen_divsf3 ();
extern rtx gen_divmodsi4 ();
extern rtx gen_divmodhi4 ();
extern rtx gen_udivmodsi4 ();
extern rtx gen_udivmodhi4 ();
extern rtx gen_andsi3 ();
extern rtx gen_andhi3 ();
extern rtx gen_andqi3 ();
extern rtx gen_iorsi3 ();
extern rtx gen_iorhi3 ();
extern rtx gen_iorqi3 ();
extern rtx gen_xorsi3 ();
extern rtx gen_xorhi3 ();
extern rtx gen_xorqi3 ();
extern rtx gen_negdi2 ();
extern rtx gen_negsi2 ();
extern rtx gen_neghi2 ();
extern rtx gen_negqi2 ();
extern rtx gen_negsf2 ();
extern rtx gen_negdf2 ();
extern rtx gen_negxf2 ();
extern rtx gen_abssf2 ();
extern rtx gen_absdf2 ();
extern rtx gen_absxf2 ();
extern rtx gen_sqrtsf2 ();
extern rtx gen_sqrtdf2 ();
extern rtx gen_sqrtxf2 ();
extern rtx gen_sindf2 ();
extern rtx gen_sinsf2 ();
extern rtx gen_sinxf2 ();
extern rtx gen_cosdf2 ();
extern rtx gen_cossf2 ();
extern rtx gen_cosxf2 ();
extern rtx gen_one_cmplsi2 ();
extern rtx gen_one_cmplhi2 ();
extern rtx gen_one_cmplqi2 ();
extern rtx gen_ashldi3 ();
extern rtx gen_ashldi3_const_int ();
extern rtx gen_ashldi3_non_const_int ();
extern rtx gen_ashlsi3 ();
extern rtx gen_ashlhi3 ();
extern rtx gen_ashlqi3 ();
extern rtx gen_ashrdi3 ();
extern rtx gen_ashldi3_32 ();
extern rtx gen_ashrdi3_const_int ();
extern rtx gen_ashrdi3_non_const_int ();
extern rtx gen_ashrsi3 ();
extern rtx gen_ashrhi3 ();
extern rtx gen_ashrqi3 ();
extern rtx gen_lshrdi3 ();
extern rtx gen_lshrdi3_32 ();
extern rtx gen_lshrdi3_const_int ();
extern rtx gen_lshrdi3_non_const_int ();
extern rtx gen_lshrsi3 ();
extern rtx gen_lshrhi3 ();
extern rtx gen_lshrqi3 ();
extern rtx gen_rotlsi3 ();
extern rtx gen_rotlhi3 ();
extern rtx gen_rotlqi3 ();
extern rtx gen_rotrsi3 ();
extern rtx gen_rotrhi3 ();
extern rtx gen_rotrqi3 ();
extern rtx gen_seq ();
extern rtx gen_sne ();
extern rtx gen_sgt ();
extern rtx gen_sgtu ();
extern rtx gen_slt ();
extern rtx gen_sltu ();
extern rtx gen_sge ();
extern rtx gen_sgeu ();
extern rtx gen_sle ();
extern rtx gen_sleu ();
extern rtx gen_beq ();
extern rtx gen_bne ();
extern rtx gen_bgt ();
extern rtx gen_bgtu ();
extern rtx gen_blt ();
extern rtx gen_bltu ();
extern rtx gen_bge ();
extern rtx gen_bgeu ();
extern rtx gen_ble ();
extern rtx gen_bleu ();
extern rtx gen_jump ();
extern rtx gen_indirect_jump ();
extern rtx gen_decrement_and_branch_until_zero ();
extern rtx gen_casesi ();
extern rtx gen_tablejump ();
extern rtx gen_untyped_call ();
extern rtx gen_blockage ();
extern rtx gen_return ();
extern rtx gen_return_internal ();
extern rtx gen_return_pop_internal ();
extern rtx gen_nop ();
extern rtx gen_prologue ();
extern rtx gen_prologue_set_stack_ptr ();
extern rtx gen_prologue_set_got ();
extern rtx gen_prologue_get_pc ();
extern rtx gen_prologue_get_pc_and_set_got ();
extern rtx gen_epilogue ();
extern rtx gen_epilogue_set_stack_ptr ();
extern rtx gen_leave ();
extern rtx gen_pop ();
extern rtx gen_movstrsi ();
extern rtx gen_clrstrsi ();
extern rtx gen_cmpstrsi ();
extern rtx gen_ffssi2 ();
extern rtx gen_ffshi2 ();
extern rtx gen_strlensi ();
extern rtx gen_movsicc ();
extern rtx gen_movhicc ();
extern rtx gen_movsicc_1 ();
extern rtx gen_movhicc_1 ();
extern rtx gen_movsfcc ();
extern rtx gen_movdfcc ();
extern rtx gen_movxfcc ();
extern rtx gen_movsfcc_1 ();
extern rtx gen_movdfcc_1 ();
extern rtx gen_strlensi_unroll ();
extern rtx gen_strlensi_unroll4 ();
extern rtx gen_strlensi_unroll5 ();
extern rtx gen_allocate_stack_worker ();
extern rtx gen_allocate_stack ();
extern rtx gen_nonlocal_goto_receiver ();
extern rtx gen_call_pop ();
extern rtx gen_call ();
extern rtx gen_call_value_pop ();
extern rtx gen_call_value ();
#endif  /* NO_MD_PROTOTYPES */
