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

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Fadi G/Desktop/Dropbox/Classes/C475/C475HW2/multicycle/ALUMainDec.v";
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
static int ng16[] = {1, 0};
static unsigned int ng17[] = {1U, 1U};
static unsigned int ng18[] = {3U, 3U};



static void Always_24_0(char *t0)
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

LAB0:    t1 = (t0 + 6240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 6808);
    *((int *)t2) = 1;
    t3 = (t0 + 6272);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);

LAB5:    xsi_set_current_line(26, ng0);
    t4 = (t0 + 2840U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(30, ng0);

LAB10:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 5320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng14)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB34;

LAB35:
LAB36:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(26, ng0);

LAB9:    xsi_set_current_line(27, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(33, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB36;

LAB14:    xsi_set_current_line(35, ng0);

LAB37:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 3000U);
    t5 = *((char **)t3);

LAB38:    t3 = ((char*)((ng3)));
    t14 = xsi_vlog_unsigned_case_compare(t5, 6, t3, 6);
    if (t14 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t13 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t13 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t13 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t13 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t13 == 1)
        goto LAB49;

LAB50:
LAB51:    goto LAB36;

LAB16:    xsi_set_current_line(46, ng0);

LAB52:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 3000U);
    t11 = *((char **)t3);

LAB53:    t3 = ((char*)((ng3)));
    t14 = xsi_vlog_unsigned_case_compare(t11, 6, t3, 6);
    if (t14 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 6, t2, 6);
    if (t13 == 1)
        goto LAB56;

LAB57:
LAB58:    goto LAB36;

LAB18:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng7)));
    t12 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 4, 0LL);
    goto LAB36;

LAB20:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng1)));
    t12 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 4, 0LL);
    goto LAB36;

LAB22:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng1)));
    t12 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 4, 0LL);
    goto LAB36;

LAB24:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng13)));
    t12 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 4, 0LL);
    goto LAB36;

LAB26:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng1)));
    t12 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 4, 0LL);
    goto LAB36;

LAB28:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng1)));
    t12 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 4, 0LL);
    goto LAB36;

LAB30:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng14)));
    t12 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 4, 0LL);
    goto LAB36;

LAB32:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng1)));
    t12 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 4, 0LL);
    goto LAB36;

LAB34:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng1)));
    t12 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 4, 0LL);
    goto LAB36;

LAB39:    xsi_set_current_line(37, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB51;

LAB41:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng4)));
    t11 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB51;

LAB43:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng6)));
    t11 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB51;

LAB45:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng8)));
    t11 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB51;

LAB47:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng9)));
    t11 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB51;

LAB49:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng10)));
    t11 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 4, 0LL);
    goto LAB51;

LAB54:    xsi_set_current_line(48, ng0);
    t12 = ((char*)((ng11)));
    t15 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t15, t12, 0, 0, 4, 0LL);
    goto LAB58;

LAB56:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng12)));
    t12 = (t0 + 5320);
    xsi_vlogvar_wait_assign_value(t12, t3, 0, 0, 4, 0LL);
    goto LAB58;

}

static void Always_75_1(char *t0)
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

LAB0:    t1 = (t0 + 6488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 6824);
    *((int *)t2) = 1;
    t3 = (t0 + 6520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(75, ng0);

LAB5:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 5320);
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
LAB31:    xsi_set_current_line(187, ng0);

LAB46:    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 3880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 5000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB33:    goto LAB2;

LAB7:    xsi_set_current_line(77, ng0);

LAB34:    xsi_set_current_line(79, ng0);
    t9 = ((char*)((ng15)));
    t10 = (t0 + 3720);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

LAB9:    xsi_set_current_line(90, ng0);

LAB35:    xsi_set_current_line(92, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 4040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 3880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

LAB11:    xsi_set_current_line(99, ng0);

LAB36:    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 4040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 3880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

LAB13:    xsi_set_current_line(108, ng0);

LAB37:    xsi_set_current_line(110, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 3720);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 3880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

LAB15:    xsi_set_current_line(115, ng0);

LAB38:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 3560);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 3400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 5000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 3880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

LAB17:    xsi_set_current_line(124, ng0);

LAB39:    xsi_set_current_line(126, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 3720);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 3880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

LAB19:    xsi_set_current_line(132, ng0);

LAB40:    xsi_set_current_line(134, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 4040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 3880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

LAB21:    xsi_set_current_line(141, ng0);

LAB41:    xsi_set_current_line(143, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 3560);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 3400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 5000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 3880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

LAB23:    xsi_set_current_line(150, ng0);

LAB42:    xsi_set_current_line(152, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 4040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

LAB25:    xsi_set_current_line(161, ng0);

LAB43:    xsi_set_current_line(163, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 4040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 3880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

LAB27:    xsi_set_current_line(170, ng0);

LAB44:    xsi_set_current_line(172, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 3560);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 3400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 5000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 3880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

LAB29:    xsi_set_current_line(179, ng0);

LAB45:    xsi_set_current_line(181, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 2);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 4680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 4040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 4200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 5160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

}


extern void work_m_00000000002812704429_1362568880_init()
{
	static char *pe[] = {(void *)Always_24_0,(void *)Always_75_1};
	xsi_register_didat("work_m_00000000002812704429_1362568880", "isim/testLWSW_isim_beh.exe.sim/work/m_00000000002812704429_1362568880.didat");
	xsi_register_executes(pe);
}
