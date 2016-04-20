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
static const char *ng0 = "C:/Users/FSG/Dropbox/Classes/C475/C475HW2/multicycle/ALUMainDec.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {35U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {43U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {8U, 0U};
static unsigned int ng9[] = {9U, 0U};
static unsigned int ng10[] = {11U, 0U};
static unsigned int ng11[] = {3U, 0U};
static unsigned int ng12[] = {5U, 0U};
static unsigned int ng13[] = {7U, 0U};
static unsigned int ng14[] = {10U, 0U};
static int ng15[] = {0, 0};
static unsigned int ng16[] = {1U, 1U};
static int ng17[] = {1, 0};
static unsigned int ng18[] = {3U, 3U};



static void Always_22_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    char *t15;

LAB0:    t1 = (t0 + 7056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 7624);
    *((int *)t2) = 1;
    t3 = (t0 + 7088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(22, ng0);

LAB5:    xsi_set_current_line(23, ng0);
    t4 = (t0 + 3656U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(24, ng0);

LAB9:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 6136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB10:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng14)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB33;

LAB34:
LAB35:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(23, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(26, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB35;

LAB13:    xsi_set_current_line(27, ng0);

LAB36:    xsi_set_current_line(28, ng0);
    t3 = (t0 + 3816U);
    t5 = *((char **)t3);

LAB37:    t3 = ((char*)((ng3)));
    t14 = xsi_vlog_unsigned_case_compare(t5, 6, t3, 6);
    if (t14 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t13 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t13 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t13 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t13 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t13 == 1)
        goto LAB48;

LAB49:
LAB51:
LAB50:    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB52:    goto LAB35;

LAB15:    xsi_set_current_line(38, ng0);

LAB53:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 3816U);
    t11 = *((char **)t3);

LAB54:    t3 = ((char*)((ng3)));
    t14 = xsi_vlog_unsigned_case_compare(t11, 6, t3, 6);
    if (t14 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 6, t2, 6);
    if (t13 == 1)
        goto LAB57;

LAB58:
LAB60:
LAB59:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB61:    goto LAB35;

LAB17:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng7)));
    t12 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 4, 0LL);
    goto LAB35;

LAB19:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng1)));
    t12 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 4, 0LL);
    goto LAB35;

LAB21:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng1)));
    t12 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 4, 0LL);
    goto LAB35;

LAB23:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng13)));
    t12 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 4, 0LL);
    goto LAB35;

LAB25:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng1)));
    t12 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 4, 0LL);
    goto LAB35;

LAB27:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng1)));
    t12 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 4, 0LL);
    goto LAB35;

LAB29:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng14)));
    t12 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 4, 0LL);
    goto LAB35;

LAB31:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng1)));
    t12 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 4, 0LL);
    goto LAB35;

LAB33:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng1)));
    t12 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 4, 0LL);
    goto LAB35;

LAB38:    xsi_set_current_line(29, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB52;

LAB40:    xsi_set_current_line(30, ng0);
    t3 = ((char*)((ng4)));
    t11 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB52;

LAB42:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng6)));
    t11 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB52;

LAB44:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng8)));
    t11 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB52;

LAB46:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng9)));
    t11 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB52;

LAB48:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng10)));
    t11 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB52;

LAB55:    xsi_set_current_line(40, ng0);
    t12 = ((char*)((ng11)));
    t15 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t15, t12, 0, 0, 4, 0LL);
    goto LAB61;

LAB57:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng12)));
    t12 = (t0 + 6136);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 4, 0LL);
    goto LAB61;

}

static void Always_58_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 7304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 7640);
    *((int *)t2) = 1;
    t3 = (t0 + 7336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 6136);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB29;

LAB30:
LAB32:
LAB31:    xsi_set_current_line(228, ng0);

LAB46:    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(230, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(232, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(233, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(234, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(235, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(236, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 5176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(237, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 5496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(238, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 5816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(239, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 5336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(240, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 5656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB33:    goto LAB2;

LAB7:    xsi_set_current_line(60, ng0);

LAB34:    xsi_set_current_line(61, ng0);
    t9 = ((char*)((ng15)));
    t10 = (t0 + 4536);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 5176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 5496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

LAB9:    xsi_set_current_line(74, ng0);

LAB35:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 4536);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

LAB11:    xsi_set_current_line(88, ng0);

LAB36:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 4536);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

LAB13:    xsi_set_current_line(102, ng0);

LAB37:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 4536);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

LAB15:    xsi_set_current_line(116, ng0);

LAB38:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 4536);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 5816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

LAB17:    xsi_set_current_line(130, ng0);

LAB39:    xsi_set_current_line(131, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 4536);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 5336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

LAB19:    xsi_set_current_line(144, ng0);

LAB40:    xsi_set_current_line(145, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 4536);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

LAB21:    xsi_set_current_line(158, ng0);

LAB41:    xsi_set_current_line(159, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 4536);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 5816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

LAB23:    xsi_set_current_line(172, ng0);

LAB42:    xsi_set_current_line(173, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 4536);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 5656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

LAB25:    xsi_set_current_line(186, ng0);

LAB43:    xsi_set_current_line(187, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 4536);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

LAB27:    xsi_set_current_line(200, ng0);

LAB44:    xsi_set_current_line(201, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 4536);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(204, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 5816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

LAB29:    xsi_set_current_line(214, ng0);

LAB45:    xsi_set_current_line(215, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 4536);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(216, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(217, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(218, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(220, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(221, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 5496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

}


extern void work_m_00000000000008955805_1362568880_init()
{
	static char *pe[] = {(void *)Always_22_0,(void *)Always_58_1};
	xsi_register_didat("work_m_00000000000008955805_1362568880", "isim/testALUMain_isim_beh.exe.sim/work/m_00000000000008955805_1362568880.didat");
	xsi_register_executes(pe);
}
