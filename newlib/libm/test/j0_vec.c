/*
 * Copyright (c) 1994 Cygnus Support.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * and/or other materials related to such
 * distribution and use acknowledge that the software was developed
 * at Cygnus Support, Inc.  Cygnus Support, Inc. may not be used to
 * endorse or promote products derived from this software without
 * specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */
#include "test.h"
 one_line_type j0_vec[] = {
{64, 0,123,__LINE__, 0x3fe579eb, 0x607c7c44, 0xbff33333, 0x33333333},	/* 0.671133=f(-1.2)*/
{64, 0,123,__LINE__, 0x3fe5a2a2, 0x4bc89e06, 0xbff30a3d, 0x70a3d70a},	/* 0.676103=f(-1.19)*/
{64, 0,123,__LINE__, 0x3fe5cb22, 0xc94f81ce, 0xbff2e147, 0xae147ae1},	/* 0.681047=f(-1.18)*/
{64, 0,123,__LINE__, 0x3fe5f36c, 0x164082d9, 0xbff2b851, 0xeb851eb8},	/* 0.685965=f(-1.17)*/
{63, 0,123,__LINE__, 0x3fe61b7d, 0x70c07b78, 0xbff28f5c, 0x28f5c28f},	/* 0.690856=f(-1.16)*/
{63, 0,123,__LINE__, 0x3fe64356, 0x17eddc84, 0xbff26666, 0x66666666},	/* 0.69572=f(-1.15)*/
{63, 0,123,__LINE__, 0x3fe66af5, 0x4be4bfcd, 0xbff23d70, 0xa3d70a3d},	/* 0.700556=f(-1.14)*/
{64, 0,123,__LINE__, 0x3fe6925a, 0x4dc2f55a, 0xbff2147a, 0xe147ae14},	/* 0.705365=f(-1.13)*/
{64, 0,123,__LINE__, 0x3fe6b984, 0x5fac0b72, 0xbff1eb85, 0x1eb851eb},	/* 0.710146=f(-1.12)*/
{64, 0,123,__LINE__, 0x3fe6e072, 0xc4cd5149, 0xbff1c28f, 0x5c28f5c2},	/* 0.714898=f(-1.11)*/
{64, 0,123,__LINE__, 0x3fe70724, 0xc161d44e, 0xbff19999, 0x99999999},	/* 0.719622=f(-1.1)*/
{63, 0,123,__LINE__, 0x3fe72d99, 0x9ab657ea, 0xbff170a3, 0xd70a3d70},	/* 0.724316=f(-1.09)*/
{64, 0,123,__LINE__, 0x3fe753d0, 0x972d47b0, 0xbff147ae, 0x147ae147},	/* 0.728981=f(-1.08)*/
{64, 0,123,__LINE__, 0x3fe779c8, 0xfe42a3da, 0xbff11eb8, 0x51eb851e},	/* 0.733616=f(-1.07)*/
{64, 0,123,__LINE__, 0x3fe79f82, 0x188fe7fe, 0xbff0f5c2, 0x8f5c28f5},	/* 0.738221=f(-1.06)*/
{64, 0,123,__LINE__, 0x3fe7c4fb, 0x2fcfebf2, 0xbff0cccc, 0xcccccccc},	/* 0.742796=f(-1.05)*/
{64, 0,123,__LINE__, 0x3fe7ea33, 0x8ee2bead, 0xbff0a3d7, 0x0a3d70a3},	/* 0.747339=f(-1.04)*/
{64, 0,123,__LINE__, 0x3fe80f2a, 0x81d17b34, 0xbff07ae1, 0x47ae147a},	/* 0.751851=f(-1.03)*/
{63, 0,123,__LINE__, 0x3fe833df, 0x55d21758, 0xbff051eb, 0x851eb851},	/* 0.756332=f(-1.02)*/
{64, 0,123,__LINE__, 0x3fe85851, 0x594b2c4d, 0xbff028f5, 0xc28f5c28},	/* 0.760781=f(-1.01)*/
{64, 0,123,__LINE__, 0x3fe87c7f, 0xdbd7b8f0, 0xbfefffff, 0xfffffffe},	/* 0.765198=f(-1)*/
{64, 0,123,__LINE__, 0x3fe8a06a, 0x2e4addb6, 0xbfefae14, 0x7ae147ac},	/* 0.769582=f(-0.99)*/
{64, 0,123,__LINE__, 0x3fe8c40f, 0xa2b3921d, 0xbfef5c28, 0xf5c28f5a},	/* 0.773933=f(-0.98)*/
{63, 0,123,__LINE__, 0x3fe8e76f, 0x8c6053a2, 0xbfef0a3d, 0x70a3d708},	/* 0.778251=f(-0.97)*/
{64, 0,123,__LINE__, 0x3fe90a89, 0x3fe2ce0d, 0xbfeeb851, 0xeb851eb6},	/* 0.782536=f(-0.96)*/
{64, 0,123,__LINE__, 0x3fe92d5c, 0x13137d0e, 0xbfee6666, 0x66666664},	/* 0.786787=f(-0.95)*/
{63, 0,123,__LINE__, 0x3fe94fe7, 0x5d154717, 0xbfee147a, 0xe147ae12},	/* 0.791004=f(-0.94)*/
{63, 0,123,__LINE__, 0x3fe9722a, 0x76591153, 0xbfedc28f, 0x5c28f5c0},	/* 0.795186=f(-0.93)*/
{64, 0,123,__LINE__, 0x3fe99424, 0xb8a14cb4, 0xbfed70a3, 0xd70a3d6e},	/* 0.799334=f(-0.92)*/
{63, 0,123,__LINE__, 0x3fe9b5d5, 0x7f057bf1, 0xbfed1eb8, 0x51eb851c},	/* 0.803447=f(-0.91)*/
{64, 0,123,__LINE__, 0x3fe9d73c, 0x25f5b27a, 0xbfeccccc, 0xccccccca},	/* 0.807524=f(-0.9)*/
{64, 0,123,__LINE__, 0x3fe9f858, 0x0b3e0c30, 0xbfec7ae1, 0x47ae1478},	/* 0.811565=f(-0.89)*/
{63, 0,123,__LINE__, 0x3fea1928, 0x8e0a1dea, 0xbfec28f5, 0xc28f5c26},	/* 0.815571=f(-0.88)*/
{63, 0,123,__LINE__, 0x3fea39ad, 0x0ee85e9b, 0xbfebd70a, 0x3d70a3d4},	/* 0.819541=f(-0.87)*/
{62, 0,123,__LINE__, 0x3fea59e4, 0xefcd8913, 0xbfeb851e, 0xb851eb82},	/* 0.823473=f(-0.86)*/
{64, 0,123,__LINE__, 0x3fea79cf, 0x9417f64c, 0xbfeb3333, 0x33333330},	/* 0.827369=f(-0.85)*/
{64, 0,123,__LINE__, 0x3fea996c, 0x6092f01d, 0xbfeae147, 0xae147ade},	/* 0.831228=f(-0.84)*/
{64, 0,123,__LINE__, 0x3feab8ba, 0xbb79fc54, 0xbfea8f5c, 0x28f5c28c},	/* 0.83505=f(-0.83)*/
{64, 0,123,__LINE__, 0x3fead7ba, 0x0c7c201a, 0xbfea3d70, 0xa3d70a3a},	/* 0.838834=f(-0.82)*/
{64, 0,123,__LINE__, 0x3feaf669, 0xbcbf1b8d, 0xbfe9eb85, 0x1eb851e8},	/* 0.84258=f(-0.81)*/
{63, 0,123,__LINE__, 0x3feb14c9, 0x36e29d86, 0xbfe99999, 0x99999996},	/* 0.846287=f(-0.8)*/
{64, 0,123,__LINE__, 0x3feb32d7, 0xe7036f70, 0xbfe947ae, 0x147ae144},	/* 0.849956=f(-0.79)*/
{64, 0,123,__LINE__, 0x3feb5095, 0x3abe9920, 0xbfe8f5c2, 0x8f5c28f2},	/* 0.853587=f(-0.78)*/
{64, 0,123,__LINE__, 0x3feb6e00, 0xa1347ca2, 0xbfe8a3d7, 0x0a3d70a0},	/* 0.857178=f(-0.77)*/
{63, 0,123,__LINE__, 0x3feb8b19, 0x8b0be9e1, 0xbfe851eb, 0x851eb84e},	/* 0.86073=f(-0.76)*/
{64, 0,123,__LINE__, 0x3feba7df, 0x6a752a1a, 0xbfe7ffff, 0xfffffffc},	/* 0.864242=f(-0.75)*/
{64, 0,123,__LINE__, 0x3febc451, 0xb32d0313, 0xbfe7ae14, 0x7ae147aa},	/* 0.867715=f(-0.74)*/
{64, 0,123,__LINE__, 0x3febe06f, 0xda7fb1f1, 0xbfe75c28, 0xf5c28f58},	/* 0.871147=f(-0.73)*/
{63, 0,123,__LINE__, 0x3febfc39, 0x574bddb0, 0xbfe70a3d, 0x70a3d706},	/* 0.874539=f(-0.72)*/
{63, 0,123,__LINE__, 0x3fec17ad, 0xa2058120, 0xbfe6b851, 0xeb851eb4},	/* 0.87789=f(-0.71)*/
{63, 0,123,__LINE__, 0x3fec32cc, 0x34b8cc5a, 0xbfe66666, 0x66666662},	/* 0.881201=f(-0.7)*/
{63, 0,123,__LINE__, 0x3fec4d94, 0x8b0cfd9b, 0xbfe6147a, 0xe147ae10},	/* 0.88447=f(-0.69)*/
{64, 0,123,__LINE__, 0x3fec6806, 0x22473179, 0xbfe5c28f, 0x5c28f5be},	/* 0.887698=f(-0.68)*/
{64, 0,123,__LINE__, 0x3fec8220, 0x794d2a5b, 0xbfe570a3, 0xd70a3d6c},	/* 0.890885=f(-0.67)*/
{63, 0,123,__LINE__, 0x3fec9be3, 0x10a80f2e, 0xbfe51eb8, 0x51eb851a},	/* 0.894029=f(-0.66)*/
{63, 0,123,__LINE__, 0x3fecb54d, 0x6a872138, 0xbfe4cccc, 0xccccccc8},	/* 0.897132=f(-0.65)*/
{64, 0,123,__LINE__, 0x3fecce5f, 0x0ac2690c, 0xbfe47ae1, 0x47ae1476},	/* 0.900192=f(-0.64)*/
{63, 0,123,__LINE__, 0x3fece717, 0x76dd5a83, 0xbfe428f5, 0xc28f5c24},	/* 0.903209=f(-0.63)*/
{64, 0,123,__LINE__, 0x3fecff76, 0x36096fa9, 0xbfe3d70a, 0x3d70a3d2},	/* 0.906184=f(-0.62)*/
{63, 0,123,__LINE__, 0x3fed177a, 0xd128ba9f, 0xbfe3851e, 0xb851eb80},	/* 0.909116=f(-0.61)*/
{64, 0,123,__LINE__, 0x3fed2f24, 0xd2d06e4f, 0xbfe33333, 0x3333332e},	/* 0.912005=f(-0.6)*/
{63, 0,123,__LINE__, 0x3fed4673, 0xc74b5df3, 0xbfe2e147, 0xae147adc},	/* 0.91485=f(-0.59)*/
{64, 0,123,__LINE__, 0x3fed5d67, 0x3c9c7358, 0xbfe28f5c, 0x28f5c28a},	/* 0.917652=f(-0.58)*/
{63, 0,123,__LINE__, 0x3fed73fe, 0xc2811bd4, 0xbfe23d70, 0xa3d70a38},	/* 0.92041=f(-0.57)*/
{64, 0,123,__LINE__, 0x3fed8a39, 0xea73abdc, 0xbfe1eb85, 0x1eb851e6},	/* 0.923123=f(-0.56)*/
{64, 0,123,__LINE__, 0x3feda018, 0x47adb932, 0xbfe19999, 0x99999994},	/* 0.925793=f(-0.55)*/
{63, 0,123,__LINE__, 0x3fedb599, 0x6f2a6b99, 0xbfe147ae, 0x147ae142},	/* 0.928418=f(-0.54)*/
{64, 0,123,__LINE__, 0x3fedcabc, 0xf7a8c405, 0xbfe0f5c2, 0x8f5c28f0},	/* 0.930998=f(-0.53)*/
{64, 0,123,__LINE__, 0x3feddf82, 0x79adda37, 0xbfe0a3d7, 0x0a3d709e},	/* 0.933534=f(-0.52)*/
{64, 0,123,__LINE__, 0x3fedf3e9, 0x8f8710bb, 0xbfe051eb, 0x851eb84c},	/* 0.936024=f(-0.51)*/
{64, 0,123,__LINE__, 0x3fee07f1, 0xd54c3f36, 0xbfdfffff, 0xfffffff4},	/* 0.93847=f(-0.5)*/
{64, 0,123,__LINE__, 0x3fee1b9a, 0xe8e1d303, 0xbfdf5c28, 0xf5c28f50},	/* 0.94087=f(-0.49)*/
{64, 0,123,__LINE__, 0x3fee2ee4, 0x69fae606, 0xbfdeb851, 0xeb851eac},	/* 0.943224=f(-0.48)*/
{63, 0,123,__LINE__, 0x3fee41cd, 0xfa1b4bac, 0xbfde147a, 0xe147ae08},	/* 0.945533=f(-0.47)*/
{63, 0,123,__LINE__, 0x3fee5457, 0x3c999419, 0xbfdd70a3, 0xd70a3d64},	/* 0.947796=f(-0.46)*/
{63, 0,123,__LINE__, 0x3fee667f, 0xd6a10562, 0xbfdccccc, 0xccccccc0},	/* 0.950012=f(-0.45)*/
{63, 0,123,__LINE__, 0x3fee7847, 0x6f338ad9, 0xbfdc28f5, 0xc28f5c1c},	/* 0.952183=f(-0.44)*/
{64, 0,123,__LINE__, 0x3fee89ad, 0xaf2b9a61, 0xbfdb851e, 0xb851eb78},	/* 0.954306=f(-0.43)*/
{64, 0,123,__LINE__, 0x3fee9ab2, 0x413e0fad, 0xbfdae147, 0xae147ad4},	/* 0.956384=f(-0.42)*/
{64, 0,123,__LINE__, 0x3feeab54, 0xd1fbfd72, 0xbfda3d70, 0xa3d70a30},	/* 0.958414=f(-0.41)*/
{64, 0,123,__LINE__, 0x3feebb95, 0x0fd47480, 0xbfd99999, 0x9999998c},	/* 0.960398=f(-0.4)*/
{63, 0,123,__LINE__, 0x3feecb72, 0xab1640a3, 0xbfd8f5c2, 0x8f5c28e8},	/* 0.962335=f(-0.39)*/
{64, 0,123,__LINE__, 0x3feedaed, 0x55f19b65, 0xbfd851eb, 0x851eb844},	/* 0.964224=f(-0.38)*/
{64, 0,123,__LINE__, 0x3feeea04, 0xc479d485, 0xbfd7ae14, 0x7ae147a0},	/* 0.966067=f(-0.37)*/
{63, 0,123,__LINE__, 0x3feef8b8, 0xaca6f02f, 0xbfd70a3d, 0x70a3d6fc},	/* 0.967861=f(-0.36)*/
{64, 0,123,__LINE__, 0x3fef0708, 0xc6573ae6, 0xbfd66666, 0x66666658},	/* 0.969609=f(-0.35)*/
{63, 0,123,__LINE__, 0x3fef14f4, 0xcb50d312, 0xbfd5c28f, 0x5c28f5b4},	/* 0.971308=f(-0.34)*/
{64, 0,123,__LINE__, 0x3fef227c, 0x77432832, 0xbfd51eb8, 0x51eb8510},	/* 0.97296=f(-0.33)*/
{64, 0,123,__LINE__, 0x3fef2f9f, 0x87c86f9f, 0xbfd47ae1, 0x47ae146c},	/* 0.974563=f(-0.32)*/
{63, 0,123,__LINE__, 0x3fef3c5d, 0xbc670ee6, 0xbfd3d70a, 0x3d70a3c8},	/* 0.976119=f(-0.31)*/
{64, 0,123,__LINE__, 0x3fef48b6, 0xd692fb9f, 0xbfd33333, 0x33333324},	/* 0.977626=f(-0.3)*/
{64, 0,123,__LINE__, 0x3fef54aa, 0x99af10ca, 0xbfd28f5c, 0x28f5c280},	/* 0.979085=f(-0.29)*/
{64, 0,123,__LINE__, 0x3fef6038, 0xcb0e599c, 0xbfd1eb85, 0x1eb851dc},	/* 0.980496=f(-0.28)*/
{63, 0,123,__LINE__, 0x3fef6b61, 0x31f551c3, 0xbfd147ae, 0x147ae138},	/* 0.981858=f(-0.27)*/
{64, 0,123,__LINE__, 0x3fef7623, 0x979b1b0a, 0xbfd0a3d7, 0x0a3d7094},	/* 0.983171=f(-0.26)*/
{63, 0,123,__LINE__, 0x3fef807f, 0xc72aa865, 0xbfcfffff, 0xffffffe0},	/* 0.984436=f(-0.25)*/
{64, 0,123,__LINE__, 0x3fef8a75, 0x8dc3de56, 0xbfceb851, 0xeb851e98},	/* 0.985652=f(-0.24)*/
{64, 0,123,__LINE__, 0x3fef9404, 0xba7ca8a2, 0xbfcd70a3, 0xd70a3d50},	/* 0.986819=f(-0.23)*/
{63, 0,123,__LINE__, 0x3fef9d2d, 0x1e620559, 0xbfcc28f5, 0xc28f5c08},	/* 0.987937=f(-0.22)*/
{63, 0,123,__LINE__, 0x3fefa5ee, 0x8c790523, 0xbfcae147, 0xae147ac0},	/* 0.989005=f(-0.21)*/
{64, 0,123,__LINE__, 0x3fefae48, 0xd9bfc0d5, 0xbfc99999, 0x99999978},	/* 0.990025=f(-0.2)*/
{64, 0,123,__LINE__, 0x3fefb63b, 0xdd2e4434, 0xbfc851eb, 0x851eb830},	/* 0.990995=f(-0.19)*/
{64, 0,123,__LINE__, 0x3fefbdc7, 0x6fb76e04, 0xbfc70a3d, 0x70a3d6e8},	/* 0.991916=f(-0.18)*/
{63, 0,123,__LINE__, 0x3fefc4eb, 0x6c49c538, 0xbfc5c28f, 0x5c28f5a0},	/* 0.992788=f(-0.17)*/
{63, 0,123,__LINE__, 0x3fefcba7, 0xafd04358, 0xbfc47ae1, 0x47ae1458},	/* 0.99361=f(-0.16)*/
{64, 0,123,__LINE__, 0x3fefd1fc, 0x19331411, 0xbfc33333, 0x33333310},	/* 0.994383=f(-0.15)*/
{64, 0,123,__LINE__, 0x3fefd7e8, 0x895849e4, 0xbfc1eb85, 0x1eb851c8},	/* 0.995106=f(-0.14)*/
{64, 0,123,__LINE__, 0x3fefdd6c, 0xe32487fa, 0xbfc0a3d7, 0x0a3d7080},	/* 0.995779=f(-0.13)*/
{63, 0,123,__LINE__, 0x3fefe289, 0x0b7ba116, 0xbfbeb851, 0xeb851e71},	/* 0.996403=f(-0.12)*/
{64, 0,123,__LINE__, 0x3fefe73c, 0xe9412b9d, 0xbfbc28f5, 0xc28f5be2},	/* 0.996977=f(-0.11)*/
{63, 0,123,__LINE__, 0x3fefeb88, 0x65590ab4, 0xbfb99999, 0x99999953},	/* 0.997502=f(-0.1)*/
{64, 0,123,__LINE__, 0x3fefef6b, 0x6aa7ec76, 0xbfb70a3d, 0x70a3d6c4},	/* 0.997976=f(-0.09)*/
{64, 0,123,__LINE__, 0x3feff2e5, 0xe613bd35, 0xbfb47ae1, 0x47ae1435},	/* 0.998401=f(-0.08)*/
{64, 0,123,__LINE__, 0x3feff5f7, 0xc6840fcb, 0xbfb1eb85, 0x1eb851a6},	/* 0.998775=f(-0.07)*/
{64, 0,123,__LINE__, 0x3feff8a0, 0xfce27af5, 0xbfaeb851, 0xeb851e2d},	/* 0.9991=f(-0.06)*/
{64, 0,123,__LINE__, 0x3feffae1, 0x7c1aebb8, 0xbfa99999, 0x9999990e},	/* 0.999375=f(-0.05)*/
{63, 0,123,__LINE__, 0x3feffcb9, 0x391becce, 0xbfa47ae1, 0x47ae13ef},	/* 0.9996=f(-0.04)*/
{64, 0,123,__LINE__, 0x3feffe28, 0x2ad6e317, 0xbf9eb851, 0xeb851da0},	/* 0.999775=f(-0.03)*/
{63, 0,123,__LINE__, 0x3fefff2e, 0x4a403f12, 0xbf947ae1, 0x47ae1362},	/* 0.9999=f(-0.02)*/
{63, 0,123,__LINE__, 0x3fefffcb, 0x924fa352, 0xbf847ae1, 0x47ae1249},	/* 0.999975=f(-0.01)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3cd19000, 0x00000000},	/* 1=f(9.74915e-16)*/
{63, 0,123,__LINE__, 0x3fefffcb, 0x924fa352, 0x3f847ae1, 0x47ae16ad},	/* 0.999975=f(0.01)*/
{63, 0,123,__LINE__, 0x3fefff2e, 0x4a403f12, 0x3f947ae1, 0x47ae1594},	/* 0.9999=f(0.02)*/
{64, 0,123,__LINE__, 0x3feffe28, 0x2ad6e317, 0x3f9eb851, 0xeb851fd2},	/* 0.999775=f(0.03)*/
{64, 0,123,__LINE__, 0x3feffcb9, 0x391beccd, 0x3fa47ae1, 0x47ae1508},	/* 0.9996=f(0.04)*/
{64, 0,123,__LINE__, 0x3feffae1, 0x7c1aebb7, 0x3fa99999, 0x99999a27},	/* 0.999375=f(0.05)*/
{63, 0,123,__LINE__, 0x3feff8a0, 0xfce27af4, 0x3faeb851, 0xeb851f46},	/* 0.9991=f(0.06)*/
{64, 0,123,__LINE__, 0x3feff5f7, 0xc6840fcb, 0x3fb1eb85, 0x1eb85232},	/* 0.998775=f(0.07)*/
{64, 0,123,__LINE__, 0x3feff2e5, 0xe613bd34, 0x3fb47ae1, 0x47ae14c1},	/* 0.998401=f(0.08)*/
{64, 0,123,__LINE__, 0x3fefef6b, 0x6aa7ec75, 0x3fb70a3d, 0x70a3d750},	/* 0.997976=f(0.09)*/
{64, 0,123,__LINE__, 0x3fefeb88, 0x65590ab3, 0x3fb99999, 0x999999df},	/* 0.997502=f(0.1)*/
{64, 0,123,__LINE__, 0x3fefe73c, 0xe9412b9c, 0x3fbc28f5, 0xc28f5c6e},	/* 0.996977=f(0.11)*/
{64, 0,123,__LINE__, 0x3fefe289, 0x0b7ba115, 0x3fbeb851, 0xeb851efd},	/* 0.996403=f(0.12)*/
{63, 0,123,__LINE__, 0x3fefdd6c, 0xe32487f9, 0x3fc0a3d7, 0x0a3d70c6},	/* 0.995779=f(0.13)*/
{63, 0,123,__LINE__, 0x3fefd7e8, 0x895849e3, 0x3fc1eb85, 0x1eb8520e},	/* 0.995106=f(0.14)*/
{64, 0,123,__LINE__, 0x3fefd1fc, 0x19331410, 0x3fc33333, 0x33333356},	/* 0.994383=f(0.15)*/
{64, 0,123,__LINE__, 0x3fefcba7, 0xafd04357, 0x3fc47ae1, 0x47ae149e},	/* 0.99361=f(0.16)*/
{64, 0,123,__LINE__, 0x3fefc4eb, 0x6c49c536, 0x3fc5c28f, 0x5c28f5e6},	/* 0.992788=f(0.17)*/
{64, 0,123,__LINE__, 0x3fefbdc7, 0x6fb76e02, 0x3fc70a3d, 0x70a3d72e},	/* 0.991916=f(0.18)*/
{63, 0,123,__LINE__, 0x3fefb63b, 0xdd2e4432, 0x3fc851eb, 0x851eb876},	/* 0.990995=f(0.19)*/
{64, 0,123,__LINE__, 0x3fefae48, 0xd9bfc0d3, 0x3fc99999, 0x999999be},	/* 0.990025=f(0.2)*/
{64, 0,123,__LINE__, 0x3fefa5ee, 0x8c790522, 0x3fcae147, 0xae147b06},	/* 0.989005=f(0.21)*/
{63, 0,123,__LINE__, 0x3fef9d2d, 0x1e620557, 0x3fcc28f5, 0xc28f5c4e},	/* 0.987937=f(0.22)*/
{63, 0,123,__LINE__, 0x3fef9404, 0xba7ca8a0, 0x3fcd70a3, 0xd70a3d96},	/* 0.986819=f(0.23)*/
{64, 0,123,__LINE__, 0x3fef8a75, 0x8dc3de54, 0x3fceb851, 0xeb851ede},	/* 0.985652=f(0.24)*/
{63, 0,123,__LINE__, 0x3fef807f, 0xc72aa863, 0x3fd00000, 0x00000013},	/* 0.984436=f(0.25)*/
{64, 0,123,__LINE__, 0x3fef7623, 0x979b1b08, 0x3fd0a3d7, 0x0a3d70b7},	/* 0.983171=f(0.26)*/
{64, 0,123,__LINE__, 0x3fef6b61, 0x31f551c1, 0x3fd147ae, 0x147ae15b},	/* 0.981858=f(0.27)*/
{64, 0,123,__LINE__, 0x3fef6038, 0xcb0e599a, 0x3fd1eb85, 0x1eb851ff},	/* 0.980496=f(0.28)*/
{63, 0,123,__LINE__, 0x3fef54aa, 0x99af10c7, 0x3fd28f5c, 0x28f5c2a3},	/* 0.979085=f(0.29)*/
{64, 0,123,__LINE__, 0x3fef48b6, 0xd692fb9c, 0x3fd33333, 0x33333347},	/* 0.977626=f(0.3)*/
{64, 0,123,__LINE__, 0x3fef3c5d, 0xbc670ee3, 0x3fd3d70a, 0x3d70a3eb},	/* 0.976119=f(0.31)*/
{63, 0,123,__LINE__, 0x3fef2f9f, 0x87c86f9c, 0x3fd47ae1, 0x47ae148f},	/* 0.974563=f(0.32)*/
{63, 0,123,__LINE__, 0x3fef227c, 0x7743282f, 0x3fd51eb8, 0x51eb8533},	/* 0.97296=f(0.33)*/
{63, 0,123,__LINE__, 0x3fef14f4, 0xcb50d30f, 0x3fd5c28f, 0x5c28f5d7},	/* 0.971308=f(0.34)*/
{63, 0,123,__LINE__, 0x3fef0708, 0xc6573ae3, 0x3fd66666, 0x6666667b},	/* 0.969609=f(0.35)*/
{64, 0,123,__LINE__, 0x3feef8b8, 0xaca6f02c, 0x3fd70a3d, 0x70a3d71f},	/* 0.967861=f(0.36)*/
{63, 0,123,__LINE__, 0x3feeea04, 0xc479d482, 0x3fd7ae14, 0x7ae147c3},	/* 0.966067=f(0.37)*/
{64, 0,123,__LINE__, 0x3feedaed, 0x55f19b62, 0x3fd851eb, 0x851eb867},	/* 0.964224=f(0.38)*/
{64, 0,123,__LINE__, 0x3feecb72, 0xab1640a0, 0x3fd8f5c2, 0x8f5c290b},	/* 0.962335=f(0.39)*/
{64, 0,123,__LINE__, 0x3feebb95, 0x0fd4747c, 0x3fd99999, 0x999999af},	/* 0.960398=f(0.4)*/
{64, 0,123,__LINE__, 0x3feeab54, 0xd1fbfd6f, 0x3fda3d70, 0xa3d70a53},	/* 0.958414=f(0.41)*/
{63, 0,123,__LINE__, 0x3fee9ab2, 0x413e0fa9, 0x3fdae147, 0xae147af7},	/* 0.956384=f(0.42)*/
{63, 0,123,__LINE__, 0x3fee89ad, 0xaf2b9a5d, 0x3fdb851e, 0xb851eb9b},	/* 0.954306=f(0.43)*/
{64, 0,123,__LINE__, 0x3fee7847, 0x6f338ad5, 0x3fdc28f5, 0xc28f5c3f},	/* 0.952183=f(0.44)*/
{64, 0,123,__LINE__, 0x3fee667f, 0xd6a1055e, 0x3fdccccc, 0xcccccce3},	/* 0.950012=f(0.45)*/
{62, 0,123,__LINE__, 0x3fee5457, 0x3c999415, 0x3fdd70a3, 0xd70a3d87},	/* 0.947796=f(0.46)*/
{64, 0,123,__LINE__, 0x3fee41cd, 0xfa1b4ba8, 0x3fde147a, 0xe147ae2b},	/* 0.945533=f(0.47)*/
{64, 0,123,__LINE__, 0x3fee2ee4, 0x69fae602, 0x3fdeb851, 0xeb851ecf},	/* 0.943224=f(0.48)*/
{63, 0,123,__LINE__, 0x3fee1b9a, 0xe8e1d2ff, 0x3fdf5c28, 0xf5c28f73},	/* 0.94087=f(0.49)*/
{63, 0,123,__LINE__, 0x3fee07f1, 0xd54c3f32, 0x3fe00000, 0x0000000b},	/* 0.93847=f(0.5)*/
{63, 0,123,__LINE__, 0x3fedf3e9, 0x8f8710b7, 0x3fe051eb, 0x851eb85d},	/* 0.936024=f(0.51)*/
{64, 0,123,__LINE__, 0x3feddf82, 0x79adda33, 0x3fe0a3d7, 0x0a3d70af},	/* 0.933534=f(0.52)*/
{64, 0,123,__LINE__, 0x3fedcabc, 0xf7a8c401, 0x3fe0f5c2, 0x8f5c2901},	/* 0.930998=f(0.53)*/
{63, 0,123,__LINE__, 0x3fedb599, 0x6f2a6b94, 0x3fe147ae, 0x147ae153},	/* 0.928418=f(0.54)*/
{64, 0,123,__LINE__, 0x3feda018, 0x47adb92d, 0x3fe19999, 0x999999a5},	/* 0.925793=f(0.55)*/
{64, 0,123,__LINE__, 0x3fed8a39, 0xea73abd7, 0x3fe1eb85, 0x1eb851f7},	/* 0.923123=f(0.56)*/
{63, 0,123,__LINE__, 0x3fed73fe, 0xc2811bcf, 0x3fe23d70, 0xa3d70a49},	/* 0.92041=f(0.57)*/
{63, 0,123,__LINE__, 0x3fed5d67, 0x3c9c7353, 0x3fe28f5c, 0x28f5c29b},	/* 0.917652=f(0.58)*/
{63, 0,123,__LINE__, 0x3fed4673, 0xc74b5dee, 0x3fe2e147, 0xae147aed},	/* 0.91485=f(0.59)*/
{64, 0,123,__LINE__, 0x3fed2f24, 0xd2d06e4a, 0x3fe33333, 0x3333333f},	/* 0.912005=f(0.6)*/
{63, 0,123,__LINE__, 0x3fed177a, 0xd128ba9a, 0x3fe3851e, 0xb851eb91},	/* 0.909116=f(0.61)*/
{63, 0,123,__LINE__, 0x3fecff76, 0x36096fa4, 0x3fe3d70a, 0x3d70a3e3},	/* 0.906184=f(0.62)*/
{63, 0,123,__LINE__, 0x3fece717, 0x76dd5a7d, 0x3fe428f5, 0xc28f5c35},	/* 0.903209=f(0.63)*/
{64, 0,123,__LINE__, 0x3fecce5f, 0x0ac26907, 0x3fe47ae1, 0x47ae1487},	/* 0.900192=f(0.64)*/
{64, 0,123,__LINE__, 0x3fecb54d, 0x6a872132, 0x3fe4cccc, 0xccccccd9},	/* 0.897132=f(0.65)*/
{63, 0,123,__LINE__, 0x3fec9be3, 0x10a80f28, 0x3fe51eb8, 0x51eb852b},	/* 0.894029=f(0.66)*/
{64, 0,123,__LINE__, 0x3fec8220, 0x794d2a56, 0x3fe570a3, 0xd70a3d7d},	/* 0.890885=f(0.67)*/
{64, 0,123,__LINE__, 0x3fec6806, 0x22473173, 0x3fe5c28f, 0x5c28f5cf},	/* 0.887698=f(0.68)*/
{64, 0,123,__LINE__, 0x3fec4d94, 0x8b0cfd96, 0x3fe6147a, 0xe147ae21},	/* 0.88447=f(0.69)*/
{63, 0,123,__LINE__, 0x3fec32cc, 0x34b8cc55, 0x3fe66666, 0x66666673},	/* 0.881201=f(0.7)*/
{64, 0,123,__LINE__, 0x3fec17ad, 0xa205811b, 0x3fe6b851, 0xeb851ec5},	/* 0.87789=f(0.71)*/
{63, 0,123,__LINE__, 0x3febfc39, 0x574bddaa, 0x3fe70a3d, 0x70a3d717},	/* 0.874539=f(0.72)*/
{64, 0,123,__LINE__, 0x3febe06f, 0xda7fb1eb, 0x3fe75c28, 0xf5c28f69},	/* 0.871147=f(0.73)*/
{64, 0,123,__LINE__, 0x3febc451, 0xb32d030d, 0x3fe7ae14, 0x7ae147bb},	/* 0.867715=f(0.74)*/
{63, 0,123,__LINE__, 0x3feba7df, 0x6a752a14, 0x3fe80000, 0x0000000d},	/* 0.864242=f(0.75)*/
{63, 0,123,__LINE__, 0x3feb8b19, 0x8b0be9db, 0x3fe851eb, 0x851eb85f},	/* 0.86073=f(0.76)*/
{63, 0,123,__LINE__, 0x3feb6e00, 0xa1347c9c, 0x3fe8a3d7, 0x0a3d70b1},	/* 0.857178=f(0.77)*/
{64, 0,123,__LINE__, 0x3feb5095, 0x3abe991a, 0x3fe8f5c2, 0x8f5c2903},	/* 0.853587=f(0.78)*/
{64, 0,123,__LINE__, 0x3feb32d7, 0xe7036f6a, 0x3fe947ae, 0x147ae155},	/* 0.849956=f(0.79)*/
{64, 0,123,__LINE__, 0x3feb14c9, 0x36e29d80, 0x3fe99999, 0x999999a7},	/* 0.846287=f(0.8)*/
{63, 0,123,__LINE__, 0x3feaf669, 0xbcbf1b87, 0x3fe9eb85, 0x1eb851f9},	/* 0.84258=f(0.81)*/
{63, 0,123,__LINE__, 0x3fead7ba, 0x0c7c2013, 0x3fea3d70, 0xa3d70a4b},	/* 0.838834=f(0.82)*/
{64, 0,123,__LINE__, 0x3feab8ba, 0xbb79fc4e, 0x3fea8f5c, 0x28f5c29d},	/* 0.83505=f(0.83)*/
{64, 0,123,__LINE__, 0x3fea996c, 0x6092f016, 0x3feae147, 0xae147aef},	/* 0.831228=f(0.84)*/
{64, 0,123,__LINE__, 0x3fea79cf, 0x9417f646, 0x3feb3333, 0x33333341},	/* 0.827369=f(0.85)*/
{63, 0,123,__LINE__, 0x3fea59e4, 0xefcd890d, 0x3feb851e, 0xb851eb93},	/* 0.823473=f(0.86)*/
{64, 0,123,__LINE__, 0x3fea39ad, 0x0ee85e94, 0x3febd70a, 0x3d70a3e5},	/* 0.819541=f(0.87)*/
{63, 0,123,__LINE__, 0x3fea1928, 0x8e0a1de4, 0x3fec28f5, 0xc28f5c37},	/* 0.815571=f(0.88)*/
{64, 0,123,__LINE__, 0x3fe9f858, 0x0b3e0c29, 0x3fec7ae1, 0x47ae1489},	/* 0.811565=f(0.89)*/
{64, 0,123,__LINE__, 0x3fe9d73c, 0x25f5b273, 0x3feccccc, 0xccccccdb},	/* 0.807524=f(0.9)*/
{64, 0,123,__LINE__, 0x3fe9b5d5, 0x7f057bea, 0x3fed1eb8, 0x51eb852d},	/* 0.803447=f(0.91)*/
{64, 0,123,__LINE__, 0x3fe99424, 0xb8a14cad, 0x3fed70a3, 0xd70a3d7f},	/* 0.799334=f(0.92)*/
{64, 0,123,__LINE__, 0x3fe9722a, 0x7659114c, 0x3fedc28f, 0x5c28f5d1},	/* 0.795186=f(0.93)*/
{64, 0,123,__LINE__, 0x3fe94fe7, 0x5d15470f, 0x3fee147a, 0xe147ae23},	/* 0.791004=f(0.94)*/
{64, 0,123,__LINE__, 0x3fe92d5c, 0x13137d06, 0x3fee6666, 0x66666675},	/* 0.786787=f(0.95)*/
{64, 0,123,__LINE__, 0x3fe90a89, 0x3fe2ce05, 0x3feeb851, 0xeb851ec7},	/* 0.782536=f(0.96)*/
{63, 0,123,__LINE__, 0x3fe8e76f, 0x8c60539b, 0x3fef0a3d, 0x70a3d719},	/* 0.778251=f(0.97)*/
{63, 0,123,__LINE__, 0x3fe8c40f, 0xa2b39216, 0x3fef5c28, 0xf5c28f6b},	/* 0.773933=f(0.98)*/
{64, 0,123,__LINE__, 0x3fe8a06a, 0x2e4addae, 0x3fefae14, 0x7ae147bd},	/* 0.769582=f(0.99)*/
{64, 0,123,__LINE__, 0x3fe87c7f, 0xdbd7b8e9, 0x3ff00000, 0x00000007},	/* 0.765198=f(1)*/
{64, 0,123,__LINE__, 0x3fe85851, 0x594b2c46, 0x3ff028f5, 0xc28f5c30},	/* 0.760781=f(1.01)*/
{64, 0,123,__LINE__, 0x3fe833df, 0x55d21751, 0x3ff051eb, 0x851eb859},	/* 0.756332=f(1.02)*/
{64, 0,123,__LINE__, 0x3fe80f2a, 0x81d17b2d, 0x3ff07ae1, 0x47ae1482},	/* 0.751851=f(1.03)*/
{64, 0,123,__LINE__, 0x3fe7ea33, 0x8ee2bea6, 0x3ff0a3d7, 0x0a3d70ab},	/* 0.747339=f(1.04)*/
{63, 0,123,__LINE__, 0x3fe7c4fb, 0x2fcfebea, 0x3ff0cccc, 0xccccccd4},	/* 0.742796=f(1.05)*/
{63, 0,123,__LINE__, 0x3fe79f82, 0x188fe7f7, 0x3ff0f5c2, 0x8f5c28fd},	/* 0.738221=f(1.06)*/
{63, 0,123,__LINE__, 0x3fe779c8, 0xfe42a3d2, 0x3ff11eb8, 0x51eb8526},	/* 0.733616=f(1.07)*/
{64, 0,123,__LINE__, 0x3fe753d0, 0x972d47a9, 0x3ff147ae, 0x147ae14f},	/* 0.728981=f(1.08)*/
{64, 0,123,__LINE__, 0x3fe72d99, 0x9ab657e3, 0x3ff170a3, 0xd70a3d78},	/* 0.724316=f(1.09)*/
{63, 0,123,__LINE__, 0x3fe70724, 0xc161d447, 0x3ff19999, 0x999999a1},	/* 0.719622=f(1.1)*/
{63, 0,123,__LINE__, 0x3fe6e072, 0xc4cd5142, 0x3ff1c28f, 0x5c28f5ca},	/* 0.714898=f(1.11)*/
{64, 0,123,__LINE__, 0x3fe6b984, 0x5fac0b6a, 0x3ff1eb85, 0x1eb851f3},	/* 0.710146=f(1.12)*/
{64, 0,123,__LINE__, 0x3fe6925a, 0x4dc2f553, 0x3ff2147a, 0xe147ae1c},	/* 0.705365=f(1.13)*/
{64, 0,123,__LINE__, 0x3fe66af5, 0x4be4bfc5, 0x3ff23d70, 0xa3d70a45},	/* 0.700556=f(1.14)*/
{64, 0,123,__LINE__, 0x3fe64356, 0x17eddc7c, 0x3ff26666, 0x6666666e},	/* 0.69572=f(1.15)*/
{64, 0,123,__LINE__, 0x3fe61b7d, 0x70c07b70, 0x3ff28f5c, 0x28f5c297},	/* 0.690856=f(1.16)*/
{63, 0,123,__LINE__, 0x3fe5f36c, 0x164082d1, 0x3ff2b851, 0xeb851ec0},	/* 0.685965=f(1.17)*/
{63, 0,123,__LINE__, 0x3fe5cb22, 0xc94f81c6, 0x3ff2e147, 0xae147ae9},	/* 0.681047=f(1.18)*/
{64, 0,123,__LINE__, 0x3fe5a2a2, 0x4bc89dfe, 0x3ff30a3d, 0x70a3d712},	/* 0.676103=f(1.19)*/
{59, 0,123,__LINE__, 0x3fcc3208, 0xa31f1aac, 0xc01921fb, 0x54442d18},	/* 0.220277=f(-6.28319)*/
{62, 0,123,__LINE__, 0xbfd103ce, 0x207e6e9d, 0xc012d97c, 0x7f3321d2},	/* -0.265857=f(-4.71239)*/
{61, 0,123,__LINE__, 0xbfd378b4, 0x2ec2e4a5, 0xc00921fb, 0x54442d18},	/* -0.304242=f(-3.14159)*/
{63, 0,123,__LINE__, 0x3fde3544, 0x9659654d, 0xbff921fb, 0x54442d18},	/* 0.472001=f(-1.5708)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x00000000, 0x00000000},	/* 1=f(0)*/
{63, 0,123,__LINE__, 0x3fde3544, 0x9659654d, 0x3ff921fb, 0x54442d18},	/* 0.472001=f(1.5708)*/
{61, 0,123,__LINE__, 0xbfd378b4, 0x2ec2e4a5, 0x400921fb, 0x54442d18},	/* -0.304242=f(3.14159)*/
{62, 0,123,__LINE__, 0xbfd103ce, 0x207e6e9d, 0x4012d97c, 0x7f3321d2},	/* -0.265857=f(4.71239)*/
{60, 0,123,__LINE__, 0xbfb61c36, 0x50e6eb9d, 0xc03e0000, 0x00000000},	/* -0.086368=f(-30)*/
{60, 0,123,__LINE__, 0xbfbbb802, 0x5070cbc9, 0xc03c4ccc, 0xcccccccd},	/* -0.108277=f(-28.3)*/
{60, 0,123,__LINE__, 0x3fbedcdd, 0xec0a8e8b, 0xc03a9999, 0x9999999a},	/* 0.120558=f(-26.6)*/
{59, 0,123,__LINE__, 0x3fb54f9b, 0x97999d2d, 0xc038e666, 0x66666667},	/* 0.083246=f(-24.9)*/
{61, 0,123,__LINE__, 0xbfc36001, 0x17fee551, 0xc0373333, 0x33333334},	/* -0.151367=f(-23.2)*/
{58, 0,123,__LINE__, 0xbfa90eee, 0x7a5df33f, 0xc0358000, 0x00000001},	/* -0.048942=f(-21.5)*/
{62, 0,123,__LINE__, 0x3fc6a8df, 0xe461bf0b, 0xc033cccc, 0xccccccce},	/* 0.177029=f(-19.8)*/
{55, 0,123,__LINE__, 0x3f763aa5, 0xe32271b8, 0xc0321999, 0x9999999b},	/* 0.00542702=f(-18.1)*/
{62, 0,123,__LINE__, 0xbfc915b4, 0x043f8fce, 0xc0306666, 0x66666668},	/* -0.195975=f(-16.4)*/
{60, 0,123,__LINE__, 0x3fa86483, 0x1422de42, 0xc02d6666, 0x6666666a},	/* 0.0476418=f(-14.7)*/
{64, 0,123,__LINE__, 0x3fca7c8d, 0xf532fa0e, 0xc02a0000, 0x00000004},	/* 0.206926=f(-13)*/
{60, 0,123,__LINE__, 0xbfbcb084, 0xb1e7a2a6, 0xc0269999, 0x9999999e},	/* -0.112068=f(-11.3)*/
{63, 0,123,__LINE__, 0xbfcabfd0, 0x8c7a26ba, 0xc0233333, 0x33333338},	/* -0.208979=f(-9.6)*/
{57, 0,123,__LINE__, 0x3fc8e0d9, 0x53977d39, 0xc01f9999, 0x999999a3},	/* 0.194362=f(-7.9)*/
{59, 0,123,__LINE__, 0x3fc9d2da, 0x5e4feb70, 0xc018cccc, 0xccccccd6},	/* 0.201747=f(-6.2)*/
{62, 0,123,__LINE__, 0xbfd483c4, 0xba446871, 0xc0120000, 0x00000009},	/* -0.320543=f(-4.5)*/
{62, 0,123,__LINE__, 0xbfc7af42, 0xbff0d900, 0xc0066666, 0x66666678},	/* -0.185036=f(-2.8)*/
{64, 0,123,__LINE__, 0x3fe70724, 0xc161d42c, 0xbff19999, 0x999999bd},	/* 0.719622=f(-1.1)*/
{63, 0,123,__LINE__, 0x3fed2f24, 0xd2d06e61, 0x3fe33333, 0x333332ec},	/* 0.912005=f(0.6)*/
{61, 0,123,__LINE__, 0x3fac6fb5, 0xeba43bd2, 0x40026666, 0x66666654},	/* 0.0555398=f(2.3)*/
{63, 0,123,__LINE__, 0xbfd96ae7, 0x093e9503, 0x400fffff, 0xffffffee},	/* -0.39715=f(4)*/
{56, 0,123,__LINE__, 0x3faeadd5, 0xe4480dfe, 0x4016cccc, 0xccccccc4},	/* 0.05992=f(5.7)*/
{59, 0,123,__LINE__, 0x3fd1d485, 0x4b035f0f, 0x401d9999, 0x99999991},	/* 0.278596=f(7.4)*/
{59, 0,123,__LINE__, 0xbfbd3ec8, 0x484b621a, 0x40223333, 0x3333332f},	/* -0.114239=f(9.1)*/
{61, 0,123,__LINE__, 0xbfca0285, 0xa59d5280, 0x40259999, 0x99999995},	/* -0.203202=f(10.8)*/
{61, 0,123,__LINE__, 0x3fc2cd18, 0xc19effac, 0x4028ffff, 0xfffffffb},	/* 0.146884=f(12.5)*/
{60, 0,123,__LINE__, 0x3fc21864, 0x59e106bf, 0x402c6666, 0x66666661},	/* 0.141369=f(14.2)*/
{62, 0,123,__LINE__, 0xbfc51dc0, 0xda0c410c, 0x402fcccc, 0xccccccc7},	/* -0.16497=f(15.9)*/
{59, 0,123,__LINE__, 0xbfb61996, 0x15cbb9bc, 0x40319999, 0x99999997},	/* -0.0863279=f(17.6)*/
{61, 0,123,__LINE__, 0x3fc5e6d8, 0x58408489, 0x40334ccc, 0xccccccca},	/* 0.171107=f(19.3)*/
{58, 0,123,__LINE__, 0x3fa2ba7d, 0xf3556392, 0x4034ffff, 0xfffffffd},	/* 0.0365791=f(21)*/
{63, 0,123,__LINE__, 0xbfc55c69, 0x1955dac3, 0x4036b333, 0x33333330},	/* -0.166883=f(22.7)*/
{55, 0,123,__LINE__, 0x3f7f6fde, 0xae9273a9, 0x40386666, 0x66666663},	/* 0.00767505=f(24.4)*/
{62, 0,123,__LINE__, 0x3fc3ad27, 0xbf860b19, 0x403a1999, 0x99999996},	/* 0.153722=f(26.1)*/
{58, 0,123,__LINE__, 0xbfa7617b, 0x541dda57, 0x403bcccc, 0xccccccc9},	/* -0.0456656=f(27.8)*/
{62, 0,123,__LINE__, 0xbfc10afd, 0x307647cf, 0x403d7fff, 0xfffffffc},	/* -0.133148=f(29.5)*/
0,};
test_j0(m)   {run_vector_1(m,j0_vec,(char *)(j0),"j0","dd");   }	
