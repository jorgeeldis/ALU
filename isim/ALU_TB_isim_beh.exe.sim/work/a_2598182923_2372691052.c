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
static const char *ng0 = "C:/MyStuff/College/Universidad Tecnologica de Panama/Year IV/Microprocesadores/ALU/ALU_TB.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_2598182923_2372691052_p_0(char *t0)
{
    char t14[16];
    char t15[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    int t10;
    int t11;
    char *t12;
    char *t13;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t1 = (t0 + 2832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 5808);
    t4 = (t0 + 3216);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 5816);
    t4 = (t0 + 3280);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 5824);
    t4 = (t0 + 3344);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 5828);
    t4 = (t0 + 3408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(88, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2640);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 5832);
    *((int *)t2) = 1;
    t3 = (t0 + 5836);
    *((int *)t3) = 15;
    t10 = 1;
    t11 = 15;

LAB8:    if (t10 <= t11)
        goto LAB9;

LAB11:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 5848);
    *((int *)t2) = 15;
    t3 = (t0 + 5852);
    *((int *)t3) = 31;
    t10 = 15;
    t11 = 31;

LAB19:    if (t10 <= t11)
        goto LAB20;

LAB22:    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(91, ng0);
    t4 = (t0 + 5840);
    t6 = (t0 + 3408);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5720U);
    t4 = (t0 + 5844);
    t6 = (t15 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t16 = (3 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t17;
    t7 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t14, t3, t2, t4, t15);
    t8 = (t14 + 12U);
    t17 = *((unsigned int *)t8);
    t18 = (1U * t17);
    t19 = (4U != t18);
    if (t19 == 1)
        goto LAB12;

LAB13:    t12 = (t0 + 3344);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t7, 4U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(93, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2640);
    xsi_process_wait(t2, t9);

LAB16:    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB10:    t2 = (t0 + 5832);
    t10 = *((int *)t2);
    t3 = (t0 + 5836);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB11;

LAB18:    t16 = (t10 + 1);
    t10 = t16;
    t4 = (t0 + 5832);
    *((int *)t4) = t10;
    goto LAB8;

LAB12:    xsi_size_not_matching(4U, t18, 0);
    goto LAB13;

LAB14:    goto LAB10;

LAB15:    goto LAB14;

LAB17:    goto LAB15;

LAB20:    xsi_set_current_line(97, ng0);
    t4 = (t0 + 5856);
    t6 = (t0 + 3408);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5720U);
    t4 = (t0 + 5860);
    t6 = (t15 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t16 = (3 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t17;
    t7 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t14, t3, t2, t4, t15);
    t8 = (t14 + 12U);
    t17 = *((unsigned int *)t8);
    t18 = (1U * t17);
    t19 = (4U != t18);
    if (t19 == 1)
        goto LAB23;

LAB24:    t12 = (t0 + 3344);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t7, 4U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(99, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2640);
    xsi_process_wait(t2, t9);

LAB27:    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB21:    t2 = (t0 + 5848);
    t10 = *((int *)t2);
    t3 = (t0 + 5852);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB22;

LAB29:    t16 = (t10 + 1);
    t10 = t16;
    t4 = (t0 + 5848);
    *((int *)t4) = t10;
    goto LAB19;

LAB23:    xsi_size_not_matching(4U, t18, 0);
    goto LAB24;

LAB25:    goto LAB21;

LAB26:    goto LAB25;

LAB28:    goto LAB26;

}


extern void work_a_2598182923_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2598182923_2372691052_p_0};
	xsi_register_didat("work_a_2598182923_2372691052", "isim/ALU_TB_isim_beh.exe.sim/work/a_2598182923_2372691052.didat");
	xsi_register_executes(pe);
}
