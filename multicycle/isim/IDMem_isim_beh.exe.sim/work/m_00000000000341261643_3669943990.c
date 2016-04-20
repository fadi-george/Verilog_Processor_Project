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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/FSG/Dropbox/Classes/C475/C475HW2/multicycle/IDMem.v";
static int ng1[] = {0, 0};
static int ng2[] = {15, 0};
static int ng3[] = {1, 0};
static const char *ng4 = "prog.dat";



static void Initial_25_0(char *t0)
{
    char t4[8];
    char t19[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    int t32;
    char *t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    int t40;

LAB0:    xsi_set_current_line(25, ng0);

LAB2:    xsi_set_current_line(26, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);
    xsi_set_current_line(27, ng0);
    t1 = (t0 + 1448);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    memcpy(t4, t3, 8);
    t5 = (t0 + 1540);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(28, ng0);
    xsi_set_current_line(28, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);

LAB3:    t1 = (t0 + 1448);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t5 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t6 = (t3 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB5;

LAB4:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t3) < *((unsigned int *)t5))
        goto LAB6;

LAB7:    t9 = (t4 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB9;

LAB10:
LAB1:    return;
LAB5:    t8 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB9:    xsi_set_current_line(28, ng0);

LAB11:    xsi_set_current_line(29, ng0);
    t15 = (t0 + 1540);
    t16 = (t15 + 36U);
    t17 = *((char **)t16);
    t18 = (t0 + 1356);
    t21 = (t0 + 1356);
    t22 = (t21 + 44U);
    t23 = *((char **)t22);
    t24 = (t0 + 1356);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    t27 = (t0 + 1448);
    t28 = (t27 + 36U);
    t29 = *((char **)t28);
    xsi_vlog_generic_convert_array_indices(t19, t20, t23, t26, 2, 1, t29, 6, 2);
    t30 = (t19 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t20 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1540);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t5 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t5, 32);
    t6 = (t0 + 1540);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 32);
    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1448);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t5 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 6, t5, 32);
    t6 = (t0 + 1448);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 6);
    goto LAB3;

LAB12:    t37 = *((unsigned int *)t19);
    t38 = *((unsigned int *)t20);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_assign_value(t18, t17, 0, *((unsigned int *)t20), t40);
    goto LAB13;

}

static void Initial_34_1(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(34, ng0);

LAB2:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1356);
    xsi_vlogfile_readmemh(ng4, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Always_38_2(char *t0)
{
    char t13[8];
    char t14[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    int t24;
    char *t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;

LAB0:    t1 = (t0 + 2352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2692);
    *((int *)t2) = 1;
    t3 = (t0 + 2380);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 852U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(41, ng0);

LAB9:    xsi_set_current_line(42, ng0);
    t11 = (t0 + 1036U);
    t12 = *((char **)t11);
    t11 = (t0 + 1356);
    t15 = (t0 + 1356);
    t16 = (t15 + 44U);
    t17 = *((char **)t16);
    t18 = (t0 + 1356);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    t21 = (t0 + 944U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 1, t22, 32, 2);
    t21 = (t13 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (!(t23));
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB10;

LAB11:    goto LAB8;

LAB10:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB11;

}

static void Cont_47_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 2496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1356);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 1356);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1356);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 944U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 32, 2);
    t12 = (t0 + 2744);
    t14 = (t12 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 2700);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000000341261643_3669943990_init()
{
	static char *pe[] = {(void *)Initial_25_0,(void *)Initial_34_1,(void *)Always_38_2,(void *)Cont_47_3};
	xsi_register_didat("work_m_00000000000341261643_3669943990", "isim/IDMem_isim_beh.exe.sim/work/m_00000000000341261643_3669943990.didat");
	xsi_register_executes(pe);
}
