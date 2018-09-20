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
static const char *ng0 = "D:/ThietKeLogicSo/DOAN/DEm_GIOPHUTGIAY/DEm_GIOPHUTGIAY.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );


static void work_a_0834022418_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 568U);
    t3 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 3784);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
    t1 = xsi_get_transient_memory(6U);
    memset(t1, 0, 6U);
    t5 = t1;
    memset(t5, (unsigned char)2, 6U);
    t6 = (t0 + 3876);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 6U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(50, ng0);
    t1 = xsi_get_transient_memory(6U);
    memset(t1, 0, 6U);
    t2 = t1;
    memset(t2, (unsigned char)2, 6U);
    t5 = (t0 + 3912);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(51, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t2 = t1;
    memset(t2, (unsigned char)2, 5U);
    t5 = (t0 + 3948);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 5U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1696U);
    t5 = *((char **)t2);
    t2 = (t0 + 3876);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 6U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1880U);
    t2 = *((char **)t1);
    t1 = (t0 + 3912);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 6U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t1 = (t0 + 3948);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}

static void work_a_0834022418_3212880686_p_1(char *t0)
{
    char t11[16];
    char t26[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned char t24;
    unsigned char t25;
    int t27;
    unsigned char t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t1 = (t0 + 3984);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 6U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 6912U);
    t3 = (t0 + 7081);
    t5 = (t11 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 1;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t15;
    t9 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t11);
    if (t9 == 1)
        goto LAB22;

LAB23:    t8 = (unsigned char)0;

LAB24:    if (t8 == 1)
        goto LAB19;

LAB20:    t7 = (unsigned char)0;

LAB21:    if (t7 != 0)
        goto LAB17;

LAB18:    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 6912U);
    t3 = (t0 + 7089);
    t5 = (t11 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 1;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t15;
    t9 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t11);
    if (t9 == 1)
        goto LAB35;

LAB36:    t8 = (unsigned char)0;

LAB37:    if (t8 == 1)
        goto LAB32;

LAB33:    t7 = (unsigned char)0;

LAB34:    if (t7 != 0)
        goto LAB30;

LAB31:
LAB3:    t1 = (t0 + 3792);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1144U);
    t3 = *((char **)t1);
    t9 = *((unsigned char *)t3);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)2);
    if (t8 != 0)
        goto LAB13;

LAB14:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1604U);
    t4 = *((char **)t1);
    t1 = (t0 + 6976U);
    t5 = (t0 + 7075);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 5;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (5 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t16 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t1, t5, t11);
    if (t16 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t1 = (t0 + 6976U);
    t3 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t11, t2, t1, 1);
    t4 = (t11 + 12U);
    t15 = *((unsigned int *)t4);
    t23 = (1U * t15);
    t7 = (6U != t23);
    if (t7 == 1)
        goto LAB11;

LAB12:    t5 = (t0 + 3984);
    t6 = (t5 + 32U);
    t12 = *((char **)t6);
    t13 = (t12 + 40U);
    t17 = *((char **)t13);
    memcpy(t17, t3, 6U);
    xsi_driver_first_trans_fast(t5);

LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(64, ng0);
    t13 = xsi_get_transient_memory(6U);
    memset(t13, 0, 6U);
    t17 = t13;
    memset(t17, (unsigned char)2, 6U);
    t18 = (t0 + 3984);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 6U);
    xsi_driver_first_trans_fast(t18);
    goto LAB9;

LAB11:    xsi_size_not_matching(6U, t23, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1604U);
    t3 = *((char **)t1);
    t1 = (t0 + 6976U);
    t4 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t11, t3, t1, 1);
    t5 = (t11 + 12U);
    t15 = *((unsigned int *)t5);
    t23 = (1U * t15);
    t9 = (6U != t23);
    if (t9 == 1)
        goto LAB15;

LAB16:    t6 = (t0 + 3984);
    t12 = (t6 + 32U);
    t13 = *((char **)t12);
    t17 = (t13 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t4, 6U);
    xsi_driver_first_trans_fast(t6);
    goto LAB6;

LAB15:    xsi_size_not_matching(6U, t23, 0);
    goto LAB16;

LAB17:    xsi_set_current_line(70, ng0);
    t6 = (t0 + 1604U);
    t17 = *((char **)t6);
    t6 = (t0 + 6976U);
    t18 = (t0 + 7083);
    t20 = (t26 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 0;
    t21 = (t20 + 4U);
    *((int *)t21) = 5;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t27 = (5 - 0);
    t15 = (t27 * 1);
    t15 = (t15 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t15;
    t28 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t17, t6, t18, t26);
    if (t28 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t1 = (t0 + 6976U);
    t3 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t11, t2, t1, 1);
    t4 = (t11 + 12U);
    t15 = *((unsigned int *)t4);
    t23 = (1U * t15);
    t7 = (6U != t23);
    if (t7 == 1)
        goto LAB28;

LAB29:    t5 = (t0 + 3984);
    t6 = (t5 + 32U);
    t12 = *((char **)t6);
    t13 = (t12 + 40U);
    t17 = *((char **)t13);
    memcpy(t17, t3, 6U);
    xsi_driver_first_trans_fast(t5);

LAB26:    goto LAB3;

LAB19:    t6 = (t0 + 1052U);
    t13 = *((char **)t6);
    t24 = *((unsigned char *)t13);
    t25 = (t24 == (unsigned char)3);
    t7 = t25;
    goto LAB21;

LAB22:    t6 = (t0 + 868U);
    t12 = *((char **)t6);
    t10 = *((unsigned char *)t12);
    t16 = (t10 == (unsigned char)3);
    t8 = t16;
    goto LAB24;

LAB25:    xsi_set_current_line(70, ng0);
    t21 = xsi_get_transient_memory(6U);
    memset(t21, 0, 6U);
    t22 = t21;
    memset(t22, (unsigned char)2, 6U);
    t29 = (t0 + 3984);
    t30 = (t29 + 32U);
    t31 = *((char **)t30);
    t32 = (t31 + 40U);
    t33 = *((char **)t32);
    memcpy(t33, t21, 6U);
    xsi_driver_first_trans_fast(t29);
    goto LAB26;

LAB28:    xsi_size_not_matching(6U, t23, 0);
    goto LAB29;

LAB30:    xsi_set_current_line(74, ng0);
    t6 = (t0 + 1604U);
    t17 = *((char **)t6);
    t6 = (t0 + 6976U);
    t18 = (t0 + 7091);
    t20 = (t26 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 0;
    t21 = (t20 + 4U);
    *((int *)t21) = 5;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t27 = (5 - 0);
    t15 = (t27 * 1);
    t15 = (t15 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t15;
    t28 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t17, t6, t18, t26);
    if (t28 != 0)
        goto LAB38;

LAB40:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t1 = (t0 + 6976U);
    t3 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t11, t2, t1, 1);
    t4 = (t11 + 12U);
    t15 = *((unsigned int *)t4);
    t23 = (1U * t15);
    t7 = (6U != t23);
    if (t7 == 1)
        goto LAB41;

LAB42:    t5 = (t0 + 3984);
    t6 = (t5 + 32U);
    t12 = *((char **)t6);
    t13 = (t12 + 40U);
    t17 = *((char **)t13);
    memcpy(t17, t3, 6U);
    xsi_driver_first_trans_fast(t5);

LAB39:    goto LAB3;

LAB32:    t6 = (t0 + 1052U);
    t13 = *((char **)t6);
    t24 = *((unsigned char *)t13);
    t25 = (t24 == (unsigned char)3);
    t7 = t25;
    goto LAB34;

LAB35:    t6 = (t0 + 960U);
    t12 = *((char **)t6);
    t10 = *((unsigned char *)t12);
    t16 = (t10 == (unsigned char)3);
    t8 = t16;
    goto LAB37;

LAB38:    xsi_set_current_line(74, ng0);
    t21 = (t0 + 7097);
    t29 = (t0 + 3984);
    t30 = (t29 + 32U);
    t31 = *((char **)t30);
    t32 = (t31 + 40U);
    t33 = *((char **)t32);
    memcpy(t33, t21, 6U);
    xsi_driver_first_trans_fast(t29);
    goto LAB39;

LAB41:    xsi_size_not_matching(6U, t23, 0);
    goto LAB42;

}

static void work_a_0834022418_3212880686_p_2(char *t0)
{
    char t12[16];
    char t21[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    int t24;
    unsigned char t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned char t33;

LAB0:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1788U);
    t2 = *((char **)t1);
    t1 = (t0 + 4020);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 6U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 6912U);
    t3 = (t0 + 7121);
    t5 = (t12 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 1;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t15 = (1 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t16;
    t9 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t12);
    if (t9 == 1)
        goto LAB28;

LAB29:    t8 = (unsigned char)0;

LAB30:    if (t8 == 1)
        goto LAB25;

LAB26:    t7 = (unsigned char)0;

LAB27:    if (t7 != 0)
        goto LAB23;

LAB24:    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 6912U);
    t3 = (t0 + 7129);
    t5 = (t12 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 1;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t15 = (1 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t16;
    t9 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t12);
    if (t9 == 1)
        goto LAB41;

LAB42:    t8 = (unsigned char)0;

LAB43:    if (t8 == 1)
        goto LAB38;

LAB39:    t7 = (unsigned char)0;

LAB40:    if (t7 != 0)
        goto LAB36;

LAB37:
LAB3:    t1 = (t0 + 3800);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1144U);
    t3 = *((char **)t1);
    t10 = *((unsigned char *)t3);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB8;

LAB9:    t9 = (unsigned char)0;

LAB10:    if (t9 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 1)
        goto LAB18;

LAB19:    t7 = (unsigned char)0;

LAB20:    if (t7 != 0)
        goto LAB16;

LAB17:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(85, ng0);
    t14 = (t0 + 1788U);
    t18 = *((char **)t14);
    t14 = (t0 + 6992U);
    t19 = (t0 + 7109);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 0;
    t23 = (t22 + 4U);
    *((int *)t23) = 5;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t24 = (5 - 0);
    t16 = (t24 * 1);
    t16 = (t16 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t16;
    t25 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t18, t14, t19, t21);
    if (t25 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1788U);
    t2 = *((char **)t1);
    t1 = (t0 + 6992U);
    t3 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t2, t1, 1);
    t4 = (t12 + 12U);
    t16 = *((unsigned int *)t4);
    t32 = (1U * t16);
    t7 = (6U != t32);
    if (t7 == 1)
        goto LAB14;

LAB15:    t5 = (t0 + 4020);
    t6 = (t5 + 32U);
    t13 = *((char **)t6);
    t14 = (t13 + 40U);
    t18 = *((char **)t14);
    memcpy(t18, t3, 6U);
    xsi_driver_first_trans_fast(t5);

LAB12:    goto LAB6;

LAB8:    t1 = (t0 + 1604U);
    t4 = *((char **)t1);
    t1 = (t0 + 6976U);
    t5 = (t0 + 7103);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 0;
    t14 = (t13 + 4U);
    *((int *)t14) = 5;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t15 = (5 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t16;
    t17 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t1, t5, t12);
    t9 = t17;
    goto LAB10;

LAB11:    xsi_set_current_line(85, ng0);
    t23 = xsi_get_transient_memory(6U);
    memset(t23, 0, 6U);
    t26 = t23;
    memset(t26, (unsigned char)2, 6U);
    t27 = (t0 + 4056);
    t28 = (t27 + 32U);
    t29 = *((char **)t28);
    t30 = (t29 + 40U);
    t31 = *((char **)t30);
    memcpy(t31, t23, 6U);
    xsi_driver_first_trans_fast(t27);
    goto LAB12;

LAB14:    xsi_size_not_matching(6U, t32, 0);
    goto LAB15;

LAB16:    xsi_set_current_line(88, ng0);
    t13 = (t0 + 1788U);
    t14 = *((char **)t13);
    t13 = (t0 + 6992U);
    t18 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t21, t14, t13, 1);
    t19 = (t21 + 12U);
    t16 = *((unsigned int *)t19);
    t32 = (1U * t16);
    t11 = (6U != t32);
    if (t11 == 1)
        goto LAB21;

LAB22:    t20 = (t0 + 4020);
    t22 = (t20 + 32U);
    t23 = *((char **)t22);
    t26 = (t23 + 40U);
    t27 = *((char **)t26);
    memcpy(t27, t18, 6U);
    xsi_driver_first_trans_fast(t20);
    goto LAB6;

LAB18:    t1 = (t0 + 1604U);
    t3 = *((char **)t1);
    t1 = (t0 + 6976U);
    t4 = (t0 + 7115);
    t6 = (t12 + 0U);
    t13 = (t6 + 0U);
    *((int *)t13) = 0;
    t13 = (t6 + 4U);
    *((int *)t13) = 5;
    t13 = (t6 + 8U);
    *((int *)t13) = 1;
    t15 = (5 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t13 = (t6 + 12U);
    *((unsigned int *)t13) = t16;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t1, t4, t12);
    t7 = t10;
    goto LAB20;

LAB21:    xsi_size_not_matching(6U, t32, 0);
    goto LAB22;

LAB23:    xsi_set_current_line(91, ng0);
    t6 = (t0 + 1788U);
    t18 = *((char **)t6);
    t6 = (t0 + 6992U);
    t19 = (t0 + 7123);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 0;
    t23 = (t22 + 4U);
    *((int *)t23) = 5;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t24 = (5 - 0);
    t16 = (t24 * 1);
    t16 = (t16 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t16;
    t33 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t18, t6, t19, t21);
    if (t33 != 0)
        goto LAB31;

LAB33:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1788U);
    t2 = *((char **)t1);
    t1 = (t0 + 6992U);
    t3 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t2, t1, 1);
    t4 = (t12 + 12U);
    t16 = *((unsigned int *)t4);
    t32 = (1U * t16);
    t7 = (6U != t32);
    if (t7 == 1)
        goto LAB34;

LAB35:    t5 = (t0 + 4020);
    t6 = (t5 + 32U);
    t13 = *((char **)t6);
    t14 = (t13 + 40U);
    t18 = *((char **)t14);
    memcpy(t18, t3, 6U);
    xsi_driver_first_trans_fast(t5);

LAB32:    goto LAB3;

LAB25:    t6 = (t0 + 1052U);
    t14 = *((char **)t6);
    t17 = *((unsigned char *)t14);
    t25 = (t17 == (unsigned char)3);
    t7 = t25;
    goto LAB27;

LAB28:    t6 = (t0 + 868U);
    t13 = *((char **)t6);
    t10 = *((unsigned char *)t13);
    t11 = (t10 == (unsigned char)3);
    t8 = t11;
    goto LAB30;

LAB31:    xsi_set_current_line(91, ng0);
    t23 = xsi_get_transient_memory(6U);
    memset(t23, 0, 6U);
    t26 = t23;
    memset(t26, (unsigned char)2, 6U);
    t27 = (t0 + 4020);
    t28 = (t27 + 32U);
    t29 = *((char **)t28);
    t30 = (t29 + 40U);
    t31 = *((char **)t30);
    memcpy(t31, t23, 6U);
    xsi_driver_first_trans_fast(t27);
    goto LAB32;

LAB34:    xsi_size_not_matching(6U, t32, 0);
    goto LAB35;

LAB36:    xsi_set_current_line(95, ng0);
    t6 = (t0 + 1788U);
    t18 = *((char **)t6);
    t6 = (t0 + 6992U);
    t19 = (t0 + 7131);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 0;
    t23 = (t22 + 4U);
    *((int *)t23) = 5;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t24 = (5 - 0);
    t16 = (t24 * 1);
    t16 = (t16 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t16;
    t33 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t18, t6, t19, t21);
    if (t33 != 0)
        goto LAB44;

LAB46:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 1788U);
    t2 = *((char **)t1);
    t1 = (t0 + 6992U);
    t3 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t12, t2, t1, 1);
    t4 = (t12 + 12U);
    t16 = *((unsigned int *)t4);
    t32 = (1U * t16);
    t7 = (6U != t32);
    if (t7 == 1)
        goto LAB47;

LAB48:    t5 = (t0 + 4020);
    t6 = (t5 + 32U);
    t13 = *((char **)t6);
    t14 = (t13 + 40U);
    t18 = *((char **)t14);
    memcpy(t18, t3, 6U);
    xsi_driver_first_trans_fast(t5);

LAB45:    goto LAB3;

LAB38:    t6 = (t0 + 1052U);
    t14 = *((char **)t6);
    t17 = *((unsigned char *)t14);
    t25 = (t17 == (unsigned char)3);
    t7 = t25;
    goto LAB40;

LAB41:    t6 = (t0 + 960U);
    t13 = *((char **)t6);
    t10 = *((unsigned char *)t13);
    t11 = (t10 == (unsigned char)3);
    t8 = t11;
    goto LAB43;

LAB44:    xsi_set_current_line(95, ng0);
    t23 = (t0 + 7137);
    t27 = (t0 + 4020);
    t28 = (t27 + 32U);
    t29 = *((char **)t28);
    t30 = (t29 + 40U);
    t31 = *((char **)t30);
    memcpy(t31, t23, 6U);
    xsi_driver_first_trans_fast(t27);
    goto LAB45;

LAB47:    xsi_size_not_matching(6U, t32, 0);
    goto LAB48;

}

static void work_a_0834022418_3212880686_p_3(char *t0)
{
    char t13[16];
    char t22[16];
    char t30[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    int t25;
    unsigned char t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    int t33;
    unsigned char t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;

LAB0:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t1 = (t0 + 4092);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 5U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 6912U);
    t3 = (t0 + 7172);
    t5 = (t13 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 1;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t16 = (1 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t17;
    t9 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t13);
    if (t9 == 1)
        goto LAB34;

LAB35:    t8 = (unsigned char)0;

LAB36:    if (t8 == 1)
        goto LAB31;

LAB32:    t7 = (unsigned char)0;

LAB33:    if (t7 != 0)
        goto LAB29;

LAB30:    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 6912U);
    t3 = (t0 + 7180);
    t5 = (t13 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 1;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t16 = (1 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t17;
    t9 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t13);
    if (t9 == 1)
        goto LAB47;

LAB48:    t8 = (unsigned char)0;

LAB49:    if (t8 == 1)
        goto LAB44;

LAB45:    t7 = (unsigned char)0;

LAB46:    if (t7 != 0)
        goto LAB42;

LAB43:
LAB3:    t1 = (t0 + 3808);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 1144U);
    t3 = *((char **)t1);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB11;

LAB12:    t10 = (unsigned char)0;

LAB13:    if (t10 == 1)
        goto LAB8;

LAB9:    t9 = (unsigned char)0;

LAB10:    if (t9 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t9 = *((unsigned char *)t2);
    t10 = (t9 == (unsigned char)2);
    if (t10 == 1)
        goto LAB24;

LAB25:    t8 = (unsigned char)0;

LAB26:    if (t8 == 1)
        goto LAB21;

LAB22:    t7 = (unsigned char)0;

LAB23:    if (t7 != 0)
        goto LAB19;

LAB20:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(106, ng0);
    t24 = (t0 + 1972U);
    t27 = *((char **)t24);
    t24 = (t0 + 7008U);
    t28 = (t0 + 7155);
    t31 = (t30 + 0U);
    t32 = (t31 + 0U);
    *((int *)t32) = 0;
    t32 = (t31 + 4U);
    *((int *)t32) = 4;
    t32 = (t31 + 8U);
    *((int *)t32) = 1;
    t33 = (4 - 0);
    t17 = (t33 * 1);
    t17 = (t17 + 1);
    t32 = (t31 + 12U);
    *((unsigned int *)t32) = t17;
    t34 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t27, t24, t28, t30);
    if (t34 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t1 = (t0 + 7008U);
    t3 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t13, t2, t1, 1);
    t4 = (t13 + 12U);
    t17 = *((unsigned int *)t4);
    t41 = (1U * t17);
    t7 = (5U != t41);
    if (t7 == 1)
        goto LAB17;

LAB18:    t5 = (t0 + 4092);
    t6 = (t5 + 32U);
    t14 = *((char **)t6);
    t15 = (t14 + 40U);
    t19 = *((char **)t15);
    memcpy(t19, t3, 5U);
    xsi_driver_first_trans_fast(t5);

LAB15:    goto LAB6;

LAB8:    t15 = (t0 + 1788U);
    t19 = *((char **)t15);
    t15 = (t0 + 6992U);
    t20 = (t0 + 7149);
    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 0;
    t24 = (t23 + 4U);
    *((int *)t24) = 5;
    t24 = (t23 + 8U);
    *((int *)t24) = 1;
    t25 = (5 - 0);
    t17 = (t25 * 1);
    t17 = (t17 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t17;
    t26 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t19, t15, t20, t22);
    t9 = t26;
    goto LAB10;

LAB11:    t1 = (t0 + 1604U);
    t4 = *((char **)t1);
    t1 = (t0 + 6976U);
    t5 = (t0 + 7143);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 0;
    t15 = (t14 + 4U);
    *((int *)t15) = 5;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (5 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t18 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t1, t5, t13);
    t10 = t18;
    goto LAB13;

LAB14:    xsi_set_current_line(106, ng0);
    t32 = xsi_get_transient_memory(5U);
    memset(t32, 0, 5U);
    t35 = t32;
    memset(t35, (unsigned char)2, 5U);
    t36 = (t0 + 4092);
    t37 = (t36 + 32U);
    t38 = *((char **)t37);
    t39 = (t38 + 40U);
    t40 = *((char **)t39);
    memcpy(t40, t32, 5U);
    xsi_driver_first_trans_fast(t36);
    goto LAB15;

LAB17:    xsi_size_not_matching(5U, t41, 0);
    goto LAB18;

LAB19:    xsi_set_current_line(109, ng0);
    t23 = (t0 + 1788U);
    t24 = *((char **)t23);
    t23 = (t0 + 6992U);
    t27 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t30, t24, t23, 1);
    t28 = (t30 + 12U);
    t17 = *((unsigned int *)t28);
    t41 = (1U * t17);
    t18 = (6U != t41);
    if (t18 == 1)
        goto LAB27;

LAB28:    t29 = (t0 + 4128);
    t31 = (t29 + 32U);
    t32 = *((char **)t31);
    t35 = (t32 + 40U);
    t36 = *((char **)t35);
    memcpy(t36, t27, 6U);
    xsi_driver_first_trans_fast(t29);
    goto LAB6;

LAB21:    t14 = (t0 + 1604U);
    t15 = *((char **)t14);
    t14 = (t0 + 6976U);
    t19 = (t0 + 7166);
    t21 = (t22 + 0U);
    t23 = (t21 + 0U);
    *((int *)t23) = 0;
    t23 = (t21 + 4U);
    *((int *)t23) = 5;
    t23 = (t21 + 8U);
    *((int *)t23) = 1;
    t25 = (5 - 0);
    t17 = (t25 * 1);
    t17 = (t17 + 1);
    t23 = (t21 + 12U);
    *((unsigned int *)t23) = t17;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t15, t14, t19, t22);
    t7 = t12;
    goto LAB23;

LAB24:    t1 = (t0 + 1788U);
    t3 = *((char **)t1);
    t1 = (t0 + 6992U);
    t4 = (t0 + 7160);
    t6 = (t13 + 0U);
    t14 = (t6 + 0U);
    *((int *)t14) = 0;
    t14 = (t6 + 4U);
    *((int *)t14) = 5;
    t14 = (t6 + 8U);
    *((int *)t14) = 1;
    t16 = (5 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t14 = (t6 + 12U);
    *((unsigned int *)t14) = t17;
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t1, t4, t13);
    t8 = t11;
    goto LAB26;

LAB27:    xsi_size_not_matching(6U, t41, 0);
    goto LAB28;

LAB29:    xsi_set_current_line(112, ng0);
    t6 = (t0 + 1972U);
    t19 = *((char **)t6);
    t6 = (t0 + 7008U);
    t20 = (t0 + 7174);
    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 0;
    t24 = (t23 + 4U);
    *((int *)t24) = 5;
    t24 = (t23 + 8U);
    *((int *)t24) = 1;
    t25 = (5 - 0);
    t17 = (t25 * 1);
    t17 = (t17 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t17;
    t26 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t19, t6, t20, t22);
    if (t26 != 0)
        goto LAB37;

LAB39:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t1 = (t0 + 7008U);
    t3 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t13, t2, t1, 1);
    t4 = (t13 + 12U);
    t17 = *((unsigned int *)t4);
    t41 = (1U * t17);
    t7 = (5U != t41);
    if (t7 == 1)
        goto LAB40;

LAB41:    t5 = (t0 + 4092);
    t6 = (t5 + 32U);
    t14 = *((char **)t6);
    t15 = (t14 + 40U);
    t19 = *((char **)t15);
    memcpy(t19, t3, 5U);
    xsi_driver_first_trans_fast(t5);

LAB38:    goto LAB3;

LAB31:    t6 = (t0 + 1052U);
    t15 = *((char **)t6);
    t12 = *((unsigned char *)t15);
    t18 = (t12 == (unsigned char)3);
    t7 = t18;
    goto LAB33;

LAB34:    t6 = (t0 + 868U);
    t14 = *((char **)t6);
    t10 = *((unsigned char *)t14);
    t11 = (t10 == (unsigned char)3);
    t8 = t11;
    goto LAB36;

LAB37:    xsi_set_current_line(112, ng0);
    t24 = xsi_get_transient_memory(5U);
    memset(t24, 0, 5U);
    t27 = t24;
    memset(t27, (unsigned char)2, 5U);
    t28 = (t0 + 4092);
    t29 = (t28 + 32U);
    t31 = *((char **)t29);
    t32 = (t31 + 40U);
    t35 = *((char **)t32);
    memcpy(t35, t24, 5U);
    xsi_driver_first_trans_fast(t28);
    goto LAB38;

LAB40:    xsi_size_not_matching(5U, t41, 0);
    goto LAB41;

LAB42:    xsi_set_current_line(116, ng0);
    t6 = (t0 + 1972U);
    t19 = *((char **)t6);
    t6 = (t0 + 7008U);
    t20 = (t0 + 7182);
    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 0;
    t24 = (t23 + 4U);
    *((int *)t24) = 5;
    t24 = (t23 + 8U);
    *((int *)t24) = 1;
    t25 = (5 - 0);
    t17 = (t25 * 1);
    t17 = (t17 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t17;
    t26 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t19, t6, t20, t22);
    if (t26 != 0)
        goto LAB50;

LAB52:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t1 = (t0 + 7008U);
    t3 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t13, t2, t1, 1);
    t4 = (t13 + 12U);
    t17 = *((unsigned int *)t4);
    t41 = (1U * t17);
    t7 = (5U != t41);
    if (t7 == 1)
        goto LAB53;

LAB54:    t5 = (t0 + 4092);
    t6 = (t5 + 32U);
    t14 = *((char **)t6);
    t15 = (t14 + 40U);
    t19 = *((char **)t15);
    memcpy(t19, t3, 5U);
    xsi_driver_first_trans_fast(t5);

LAB51:    goto LAB3;

LAB44:    t6 = (t0 + 1052U);
    t15 = *((char **)t6);
    t12 = *((unsigned char *)t15);
    t18 = (t12 == (unsigned char)3);
    t7 = t18;
    goto LAB46;

LAB47:    t6 = (t0 + 960U);
    t14 = *((char **)t6);
    t10 = *((unsigned char *)t14);
    t11 = (t10 == (unsigned char)3);
    t8 = t11;
    goto LAB49;

LAB50:    xsi_set_current_line(116, ng0);
    t24 = (t0 + 7188);
    t28 = (t0 + 4092);
    t29 = (t28 + 32U);
    t31 = *((char **)t29);
    t32 = (t31 + 40U);
    t35 = *((char **)t32);
    memcpy(t35, t24, 5U);
    xsi_driver_first_trans_fast(t28);
    goto LAB51;

LAB53:    xsi_size_not_matching(5U, t41, 0);
    goto LAB54;

}

static void work_a_0834022418_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(122, ng0);

LAB3:    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t1 = (t0 + 4164);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 6U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3816);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0834022418_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(123, ng0);

LAB3:    t1 = (t0 + 1788U);
    t2 = *((char **)t1);
    t1 = (t0 + 4200);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 6U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3824);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0834022418_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(124, ng0);

LAB3:    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t1 = (t0 + 4236);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3832);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0834022418_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0834022418_3212880686_p_0,(void *)work_a_0834022418_3212880686_p_1,(void *)work_a_0834022418_3212880686_p_2,(void *)work_a_0834022418_3212880686_p_3,(void *)work_a_0834022418_3212880686_p_4,(void *)work_a_0834022418_3212880686_p_5,(void *)work_a_0834022418_3212880686_p_6};
	xsi_register_didat("work_a_0834022418_3212880686", "isim/DEm_GIOPHUTGIAY_tb_isim_beh.exe.sim/work/a_0834022418_3212880686.didat");
	xsi_register_executes(pe);
}
