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
static const char *ng0 = "C:/Users/Fadi G/Desktop/Dropbox/Classes/C475/Project/pipelined/PCC.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 1U};



static void Initial_13_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(13, ng0);

LAB2:    xsi_set_current_line(14, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);

LAB1:    return;
}

static void Always_17_1(char *t0)
{
    char t4[8];
    char t23[8];
    char t38[8];
    char t41[8];
    char t49[8];
    char t85[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;

LAB0:    t1 = (t0 + 3072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 3392);
    *((int *)t2) = 1;
    t3 = (t0 + 3104);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);

LAB5:    xsi_set_current_line(19, ng0);
    t5 = (t0 + 1344U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    memset(t23, 0, 8);
    t24 = (t4 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t24) != 0)
        goto LAB14;

LAB15:    t31 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = (!(t32));
    t34 = *((unsigned int *)t31);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB16;

LAB17:    memcpy(t49, t23, 8);

LAB18:    t77 = (t49 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t49);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB29;

LAB30:
LAB31:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    *((unsigned int *)t23) = 1;
    goto LAB15;

LAB14:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB15;

LAB16:    t36 = (t0 + 1344U);
    t37 = *((char **)t36);
    t36 = ((char*)((ng2)));
    memset(t38, 0, 8);
    if (*((unsigned int *)t37) != *((unsigned int *)t36))
        goto LAB21;

LAB19:    t39 = (t37 + 4);
    t40 = (t36 + 4);
    if (*((unsigned int *)t39) != *((unsigned int *)t40))
        goto LAB21;

LAB20:    *((unsigned int *)t38) = 1;

LAB21:    memset(t41, 0, 8);
    t42 = (t38 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (~(t43));
    t45 = *((unsigned int *)t38);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t42) != 0)
        goto LAB24;

LAB25:    t50 = *((unsigned int *)t23);
    t51 = *((unsigned int *)t41);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = (t23 + 4);
    t54 = (t41 + 4);
    t55 = (t49 + 4);
    t56 = *((unsigned int *)t53);
    t57 = *((unsigned int *)t54);
    t58 = (t56 | t57);
    *((unsigned int *)t55) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 != 0);
    if (t60 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB18;

LAB22:    *((unsigned int *)t41) = 1;
    goto LAB25;

LAB24:    t48 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB25;

LAB26:    t61 = *((unsigned int *)t49);
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t49) = (t61 | t62);
    t63 = (t23 + 4);
    t64 = (t41 + 4);
    t65 = *((unsigned int *)t63);
    t66 = (~(t65));
    t67 = *((unsigned int *)t23);
    t68 = (t67 & t66);
    t69 = *((unsigned int *)t64);
    t70 = (~(t69));
    t71 = *((unsigned int *)t41);
    t72 = (t71 & t70);
    t73 = (~(t68));
    t74 = (~(t72));
    t75 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t75 & t73);
    t76 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t76 & t74);
    goto LAB28;

LAB29:    xsi_set_current_line(19, ng0);

LAB32:    xsi_set_current_line(21, ng0);
    t83 = (t0 + 1504U);
    t84 = *((char **)t83);
    t83 = ((char*)((ng1)));
    memset(t85, 0, 8);
    t86 = (t84 + 4);
    if (*((unsigned int *)t86) != 0)
        goto LAB34;

LAB33:    t87 = (t83 + 4);
    if (*((unsigned int *)t87) != 0)
        goto LAB34;

LAB37:    if (*((unsigned int *)t84) > *((unsigned int *)t83))
        goto LAB35;

LAB36:    t89 = (t85 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t85);
    t93 = (t92 & t91);
    t94 = (t93 != 0);
    if (t94 > 0)
        goto LAB38;

LAB39:
LAB40:    goto LAB31;

LAB34:    t88 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB36;

LAB35:    *((unsigned int *)t85) = 1;
    goto LAB36;

LAB38:    xsi_set_current_line(21, ng0);

LAB41:    xsi_set_current_line(22, ng0);
    t95 = (t0 + 1504U);
    t96 = *((char **)t95);
    t95 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t95, t96, 0, 0, 32, 0LL);
    goto LAB40;

}


extern void work_m_00000000002011995908_0423797951_init()
{
	static char *pe[] = {(void *)Initial_13_0,(void *)Always_17_1};
	xsi_register_didat("work_m_00000000002011995908_0423797951", "isim/testLWSW_isim_beh.exe.sim/work/m_00000000002011995908_0423797951.didat");
	xsi_register_executes(pe);
}
