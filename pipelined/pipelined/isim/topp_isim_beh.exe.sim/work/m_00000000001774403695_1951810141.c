/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/FSG/Dropbox/Classes/C475/Project/pipelined/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static int ng9[] = {1, 0};
static int ng10[] = {0, 0};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {9U, 0U};
static unsigned int ng13[] = {10U, 0U};
static int ng14[] = {16, 0};
static unsigned int ng15[] = {11U, 0U};
static unsigned int ng16[] = {12U, 0U};
static unsigned int ng17[] = {13U, 0U};
static unsigned int ng18[] = {14U, 0U};
static unsigned int ng19[] = {15U, 0U};
static unsigned int ng20[] = {16U, 0U};
static unsigned int ng21[] = {17U, 0U};



static void Always_20_0(char *t0)
{
    char t10[8];
    char t17[8];
    char t18[8];
    char t28[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 3440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 3760);
    *((int *)t2) = 1;
    t3 = (t0 + 3472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20, ng0);

LAB5:    xsi_set_current_line(22, ng0);
    t4 = (t0 + 1640U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t4, 5);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB41;

LAB42:
LAB44:
LAB43:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB45:    goto LAB2;

LAB7:    xsi_set_current_line(24, ng0);
    t7 = (t0 + 1320U);
    t8 = *((char **)t7);
    t7 = (t0 + 1480U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_signed_bit_and(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 32, 0LL);
    goto LAB45;

LAB9:    xsi_set_current_line(25, ng0);
    t3 = (t0 + 1320U);
    t4 = *((char **)t3);
    t3 = (t0 + 1480U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_bit_or(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 32, 0LL);
    goto LAB45;

LAB11:    xsi_set_current_line(26, ng0);
    t3 = (t0 + 1320U);
    t4 = *((char **)t3);
    t3 = (t0 + 1480U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 32, 0LL);
    goto LAB45;

LAB13:    xsi_set_current_line(27, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1800U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_lshift(t10, 32, t4, 32, t7, 5);
    t3 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 32, 0LL);
    goto LAB45;

LAB15:    xsi_set_current_line(29, ng0);
    t3 = (t0 + 1320U);
    t4 = *((char **)t3);
    t3 = (t0 + 1480U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    memcpy(t10, t7, 8);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t12 | t13);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 4294967295U);
    memset(t17, 0, 8);
    xsi_vlog_signed_bit_and(t17, 32, t4, 32, t10, 32);
    t9 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t9, t17, 0, 0, 32, 0LL);
    goto LAB45;

LAB17:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 1320U);
    t4 = *((char **)t3);
    t3 = (t0 + 1480U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    memcpy(t10, t7, 8);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t12 | t13);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 4294967295U);
    memset(t17, 0, 8);
    xsi_vlog_signed_bit_or(t17, 32, t4, 32, t10, 32);
    t9 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t9, t17, 0, 0, 32, 0LL);
    goto LAB45;

LAB19:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 1320U);
    t4 = *((char **)t3);
    t3 = (t0 + 1480U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 32, 0LL);
    goto LAB45;

LAB21:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 1320U);
    t4 = *((char **)t3);
    t3 = (t0 + 1480U);
    t7 = *((char **)t3);
    memset(t18, 0, 8);
    xsi_vlog_signed_less(t18, 32, t4, 32, t7, 32);
    memset(t17, 0, 8);
    t3 = (t18 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t18);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t3) != 0)
        goto LAB48;

LAB49:    t9 = (t17 + 4);
    t16 = *((unsigned int *)t17);
    t19 = *((unsigned int *)t9);
    t20 = (t16 || t19);
    if (t20 > 0)
        goto LAB50;

LAB51:    t22 = *((unsigned int *)t17);
    t23 = (~(t22));
    t24 = *((unsigned int *)t9);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t9) > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t17) > 0)
        goto LAB56;

LAB57:    memcpy(t10, t26, 8);

LAB58:    t27 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t27, t10, 0, 0, 32, 0LL);
    goto LAB45;

LAB23:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    goto LAB45;

LAB25:    xsi_set_current_line(35, ng0);

LAB59:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1320U);
    t3 = *((char **)t2);
    t2 = (t0 + 1480U);
    t4 = *((char **)t2);
    xsi_vlog_signed_multiply(t28, 64, t3, 32, t4, 32);
    t2 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t2, t28, 0, 0, 32, 0LL);
    t7 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t7, t28, 32, 0, 32, 0LL);
    goto LAB45;

LAB27:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng14)));
    memset(t10, 0, 8);
    xsi_vlog_signed_lshift(t10, 32, t4, 32, t3, 32);
    t7 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 32, 0LL);
    goto LAB45;

LAB29:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1320U);
    t4 = *((char **)t3);
    t3 = (t0 + 1480U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_bit_xor(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 32, 0LL);
    goto LAB45;

LAB31:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1800U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_rshift(t10, 32, t4, 32, t7, 5);
    t3 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 32, 0LL);
    goto LAB45;

LAB33:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1800U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_arith_rshift(t10, 32, t4, 32, t7, 5);
    t3 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 32, 0LL);
    goto LAB45;

LAB35:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1320U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_lshift(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 32, 0LL);
    goto LAB45;

LAB37:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1320U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_rshift(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 32, 0LL);
    goto LAB45;

LAB39:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1320U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_arith_rshift(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 32, 0LL);
    goto LAB45;

LAB41:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1320U);
    t4 = *((char **)t3);
    t3 = (t0 + 1480U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_multiply(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 32, 0LL);
    goto LAB45;

LAB46:    *((unsigned int *)t17) = 1;
    goto LAB49;

LAB48:    t8 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB49;

LAB50:    t21 = ((char*)((ng9)));
    goto LAB51;

LAB52:    t26 = ((char*)((ng10)));
    goto LAB53;

LAB54:    xsi_vlog_unsigned_bit_combine(t10, 32, t21, 32, t26, 32);
    goto LAB58;

LAB56:    memcpy(t10, t21, 8);
    goto LAB58;

}


extern void work_m_00000000001774403695_1951810141_init()
{
	static char *pe[] = {(void *)Always_20_0};
	xsi_register_didat("work_m_00000000001774403695_1951810141", "isim/topp_isim_beh.exe.sim/work/m_00000000001774403695_1951810141.didat");
	xsi_register_executes(pe);
}
