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
static const char *ng0 = "C:/Users/FSG/Dropbox/Classes/C475/Project/pipelined/registerFile.v";
static const char *ng1 = "regMem.dat";
static int ng2[] = {0, 0};



static void Initial_19_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(19, ng0);

LAB2:    xsi_set_current_line(20, ng0);
    t1 = (t0 + 2840);
    xsi_vlogfile_readmemh(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Always_23_1(char *t0)
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

LAB0:    t1 = (t0 + 4008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 4576);
    *((int *)t2) = 1;
    t3 = (t0 + 4040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(23, ng0);

LAB5:    xsi_set_current_line(24, ng0);
    t4 = (t0 + 1480U);
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

LAB6:    xsi_set_current_line(24, ng0);

LAB9:    xsi_set_current_line(25, ng0);
    t11 = (t0 + 2120U);
    t12 = *((char **)t11);
    t11 = (t0 + 2840);
    t15 = (t0 + 2840);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2840);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1960U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 1, t22, 5, 2);
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

static void Always_29_2(char *t0)
{
    char t7[8];
    char t22[8];
    char t36[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;

LAB0:    t1 = (t0 + 4256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 4592);
    *((int *)t2) = 1;
    t3 = (t0 + 4288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1640U);
    t5 = *((char **)t4);
    t4 = (t0 + 1960U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t7) = 1;

LAB9:    memset(t22, 0, 8);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    memcpy(t43, t22, 8);

LAB16:    t75 = (t43 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(33, ng0);

LAB28:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t36, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB32;

LAB29:    if (t18 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t36) = 1;

LAB32:    memset(t22, 0, 8);
    t8 = (t36 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t36);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t8) != 0)
        goto LAB35;

LAB36:    t23 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB37;

LAB38:    t37 = *((unsigned int *)t22);
    t38 = (~(t37));
    t39 = *((unsigned int *)t23);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t23) > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t22) > 0)
        goto LAB43;

LAB44:    memcpy(t7, t43, 8);

LAB45:    t75 = (t0 + 2520);
    xsi_vlogvar_assign_value(t75, t7, 0, 0, 32);

LAB26:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = (t0 + 1960U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB49;

LAB46:    if (t18 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t7) = 1;

LAB49:    memset(t22, 0, 8);
    t8 = (t7 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t8) != 0)
        goto LAB52;

LAB53:    t23 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB54;

LAB55:    memcpy(t43, t22, 8);

LAB56:    t57 = (t43 + 4);
    t76 = *((unsigned int *)t57);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(40, ng0);

LAB68:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t36, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB72;

LAB69:    if (t18 != 0)
        goto LAB71;

LAB70:    *((unsigned int *)t36) = 1;

LAB72:    memset(t22, 0, 8);
    t8 = (t36 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t36);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t8) != 0)
        goto LAB75;

LAB76:    t23 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB77;

LAB78:    t37 = *((unsigned int *)t22);
    t38 = (~(t37));
    t39 = *((unsigned int *)t23);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t23) > 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t22) > 0)
        goto LAB83;

LAB84:    memcpy(t7, t43, 8);

LAB85:    t75 = (t0 + 2680);
    xsi_vlogvar_assign_value(t75, t7, 0, 0, 32);

LAB66:    goto LAB2;

LAB8:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t34 = (t0 + 1480U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    t34 = (t35 + 4);
    t37 = *((unsigned int *)t34);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t34) != 0)
        goto LAB19;

LAB20:    t44 = *((unsigned int *)t22);
    t45 = *((unsigned int *)t36);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t22 + 4);
    t48 = (t36 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB16;

LAB17:    *((unsigned int *)t36) = 1;
    goto LAB20;

LAB19:    t42 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB20;

LAB21:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t22 + 4);
    t58 = (t36 + 4);
    t59 = *((unsigned int *)t22);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t36);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB23;

LAB24:    xsi_set_current_line(30, ng0);

LAB27:    xsi_set_current_line(31, ng0);
    t81 = (t0 + 2120U);
    t82 = *((char **)t81);
    t81 = (t0 + 2520);
    xsi_vlogvar_assign_value(t81, t82, 0, 0, 32);
    goto LAB26;

LAB31:    t6 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB32;

LAB33:    *((unsigned int *)t22) = 1;
    goto LAB36;

LAB35:    t21 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB36;

LAB37:    t29 = ((char*)((ng2)));
    goto LAB38;

LAB39:    t30 = (t0 + 2840);
    t34 = (t30 + 56U);
    t35 = *((char **)t34);
    t42 = (t0 + 2840);
    t47 = (t42 + 72U);
    t48 = *((char **)t47);
    t49 = (t0 + 2840);
    t57 = (t49 + 64U);
    t58 = *((char **)t57);
    t75 = (t0 + 1640U);
    t81 = *((char **)t75);
    xsi_vlog_generic_get_array_select_value(t43, 32, t35, t48, t58, 2, 1, t81, 5, 2);
    goto LAB40;

LAB41:    xsi_vlog_unsigned_bit_combine(t7, 32, t29, 32, t43, 32);
    goto LAB45;

LAB43:    memcpy(t7, t29, 8);
    goto LAB45;

LAB48:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB49;

LAB50:    *((unsigned int *)t22) = 1;
    goto LAB53;

LAB52:    t21 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB53;

LAB54:    t29 = (t0 + 1480U);
    t30 = *((char **)t29);
    memset(t36, 0, 8);
    t29 = (t30 + 4);
    t37 = *((unsigned int *)t29);
    t38 = (~(t37));
    t39 = *((unsigned int *)t30);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t29) != 0)
        goto LAB59;

LAB60:    t44 = *((unsigned int *)t22);
    t45 = *((unsigned int *)t36);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t35 = (t22 + 4);
    t42 = (t36 + 4);
    t47 = (t43 + 4);
    t50 = *((unsigned int *)t35);
    t51 = *((unsigned int *)t42);
    t52 = (t50 | t51);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t47);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB61;

LAB62:
LAB63:    goto LAB56;

LAB57:    *((unsigned int *)t36) = 1;
    goto LAB60;

LAB59:    t34 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB60;

LAB61:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t47);
    *((unsigned int *)t43) = (t55 | t56);
    t48 = (t22 + 4);
    t49 = (t36 + 4);
    t59 = *((unsigned int *)t22);
    t60 = (~(t59));
    t61 = *((unsigned int *)t48);
    t62 = (~(t61));
    t63 = *((unsigned int *)t36);
    t64 = (~(t63));
    t65 = *((unsigned int *)t49);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t71 & t69);
    t72 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB63;

LAB64:    xsi_set_current_line(37, ng0);

LAB67:    xsi_set_current_line(38, ng0);
    t58 = (t0 + 2120U);
    t75 = *((char **)t58);
    t58 = (t0 + 2680);
    xsi_vlogvar_assign_value(t58, t75, 0, 0, 32);
    goto LAB66;

LAB71:    t6 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB72;

LAB73:    *((unsigned int *)t22) = 1;
    goto LAB76;

LAB75:    t21 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB76;

LAB77:    t29 = ((char*)((ng2)));
    goto LAB78;

LAB79:    t30 = (t0 + 2840);
    t34 = (t30 + 56U);
    t35 = *((char **)t34);
    t42 = (t0 + 2840);
    t47 = (t42 + 72U);
    t48 = *((char **)t47);
    t49 = (t0 + 2840);
    t57 = (t49 + 64U);
    t58 = *((char **)t57);
    t75 = (t0 + 1800U);
    t81 = *((char **)t75);
    xsi_vlog_generic_get_array_select_value(t43, 32, t35, t48, t58, 2, 1, t81, 5, 2);
    goto LAB80;

LAB81:    xsi_vlog_unsigned_bit_combine(t7, 32, t29, 32, t43, 32);
    goto LAB85;

LAB83:    memcpy(t7, t29, 8);
    goto LAB85;

}


extern void work_m_00000000000834952484_1255838243_init()
{
	static char *pe[] = {(void *)Initial_19_0,(void *)Always_23_1,(void *)Always_29_2};
	xsi_register_didat("work_m_00000000000834952484_1255838243", "isim/topp_isim_beh.exe.sim/work/m_00000000000834952484_1255838243.didat");
	xsi_register_executes(pe);
}
