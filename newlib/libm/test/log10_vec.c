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
 one_line_type log10_vec[] = {
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff33333, 0x33333333},	/* nan=f(-1.2)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff30a3d, 0x70a3d70a},	/* nan=f(-1.19)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff2e147, 0xae147ae1},	/* nan=f(-1.18)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff2b851, 0xeb851eb8},	/* nan=f(-1.17)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff28f5c, 0x28f5c28f},	/* nan=f(-1.16)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff26666, 0x66666666},	/* nan=f(-1.15)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff23d70, 0xa3d70a3d},	/* nan=f(-1.14)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff2147a, 0xe147ae14},	/* nan=f(-1.13)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff1eb85, 0x1eb851eb},	/* nan=f(-1.12)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff1c28f, 0x5c28f5c2},	/* nan=f(-1.11)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff19999, 0x99999999},	/* nan=f(-1.1)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff170a3, 0xd70a3d70},	/* nan=f(-1.09)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff147ae, 0x147ae147},	/* nan=f(-1.08)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff11eb8, 0x51eb851e},	/* nan=f(-1.07)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff0f5c2, 0x8f5c28f5},	/* nan=f(-1.06)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff0cccc, 0xcccccccc},	/* nan=f(-1.05)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff0a3d7, 0x0a3d70a3},	/* nan=f(-1.04)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff07ae1, 0x47ae147a},	/* nan=f(-1.03)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff051eb, 0x851eb851},	/* nan=f(-1.02)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff028f5, 0xc28f5c28},	/* nan=f(-1.01)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfefffff, 0xfffffffe},	/* nan=f(-1)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfefae14, 0x7ae147ac},	/* nan=f(-0.99)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfef5c28, 0xf5c28f5a},	/* nan=f(-0.98)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfef0a3d, 0x70a3d708},	/* nan=f(-0.97)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfeeb851, 0xeb851eb6},	/* nan=f(-0.96)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfee6666, 0x66666664},	/* nan=f(-0.95)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfee147a, 0xe147ae12},	/* nan=f(-0.94)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfedc28f, 0x5c28f5c0},	/* nan=f(-0.93)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfed70a3, 0xd70a3d6e},	/* nan=f(-0.92)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfed1eb8, 0x51eb851c},	/* nan=f(-0.91)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfeccccc, 0xccccccca},	/* nan=f(-0.9)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfec7ae1, 0x47ae1478},	/* nan=f(-0.89)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfec28f5, 0xc28f5c26},	/* nan=f(-0.88)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfebd70a, 0x3d70a3d4},	/* nan=f(-0.87)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfeb851e, 0xb851eb82},	/* nan=f(-0.86)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfeb3333, 0x33333330},	/* nan=f(-0.85)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfeae147, 0xae147ade},	/* nan=f(-0.84)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfea8f5c, 0x28f5c28c},	/* nan=f(-0.83)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfea3d70, 0xa3d70a3a},	/* nan=f(-0.82)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe9eb85, 0x1eb851e8},	/* nan=f(-0.81)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe99999, 0x99999996},	/* nan=f(-0.8)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe947ae, 0x147ae144},	/* nan=f(-0.79)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe8f5c2, 0x8f5c28f2},	/* nan=f(-0.78)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe8a3d7, 0x0a3d70a0},	/* nan=f(-0.77)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe851eb, 0x851eb84e},	/* nan=f(-0.76)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe7ffff, 0xfffffffc},	/* nan=f(-0.75)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe7ae14, 0x7ae147aa},	/* nan=f(-0.74)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe75c28, 0xf5c28f58},	/* nan=f(-0.73)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe70a3d, 0x70a3d706},	/* nan=f(-0.72)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe6b851, 0xeb851eb4},	/* nan=f(-0.71)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe66666, 0x66666662},	/* nan=f(-0.7)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe6147a, 0xe147ae10},	/* nan=f(-0.69)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe5c28f, 0x5c28f5be},	/* nan=f(-0.68)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe570a3, 0xd70a3d6c},	/* nan=f(-0.67)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe51eb8, 0x51eb851a},	/* nan=f(-0.66)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe4cccc, 0xccccccc8},	/* nan=f(-0.65)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe47ae1, 0x47ae1476},	/* nan=f(-0.64)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe428f5, 0xc28f5c24},	/* nan=f(-0.63)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe3d70a, 0x3d70a3d2},	/* nan=f(-0.62)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe3851e, 0xb851eb80},	/* nan=f(-0.61)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe33333, 0x3333332e},	/* nan=f(-0.6)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe2e147, 0xae147adc},	/* nan=f(-0.59)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe28f5c, 0x28f5c28a},	/* nan=f(-0.58)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe23d70, 0xa3d70a38},	/* nan=f(-0.57)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe1eb85, 0x1eb851e6},	/* nan=f(-0.56)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe19999, 0x99999994},	/* nan=f(-0.55)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe147ae, 0x147ae142},	/* nan=f(-0.54)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe0f5c2, 0x8f5c28f0},	/* nan=f(-0.53)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe0a3d7, 0x0a3d709e},	/* nan=f(-0.52)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfe051eb, 0x851eb84c},	/* nan=f(-0.51)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfdfffff, 0xfffffff4},	/* nan=f(-0.5)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfdf5c28, 0xf5c28f50},	/* nan=f(-0.49)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfdeb851, 0xeb851eac},	/* nan=f(-0.48)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfde147a, 0xe147ae08},	/* nan=f(-0.47)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfdd70a3, 0xd70a3d64},	/* nan=f(-0.46)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfdccccc, 0xccccccc0},	/* nan=f(-0.45)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfdc28f5, 0xc28f5c1c},	/* nan=f(-0.44)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfdb851e, 0xb851eb78},	/* nan=f(-0.43)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfdae147, 0xae147ad4},	/* nan=f(-0.42)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfda3d70, 0xa3d70a30},	/* nan=f(-0.41)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd99999, 0x9999998c},	/* nan=f(-0.4)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd8f5c2, 0x8f5c28e8},	/* nan=f(-0.39)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd851eb, 0x851eb844},	/* nan=f(-0.38)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd7ae14, 0x7ae147a0},	/* nan=f(-0.37)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd70a3d, 0x70a3d6fc},	/* nan=f(-0.36)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd66666, 0x66666658},	/* nan=f(-0.35)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd5c28f, 0x5c28f5b4},	/* nan=f(-0.34)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd51eb8, 0x51eb8510},	/* nan=f(-0.33)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd47ae1, 0x47ae146c},	/* nan=f(-0.32)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd3d70a, 0x3d70a3c8},	/* nan=f(-0.31)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd33333, 0x33333324},	/* nan=f(-0.3)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd28f5c, 0x28f5c280},	/* nan=f(-0.29)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd1eb85, 0x1eb851dc},	/* nan=f(-0.28)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd147ae, 0x147ae138},	/* nan=f(-0.27)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfd0a3d7, 0x0a3d7094},	/* nan=f(-0.26)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfcfffff, 0xffffffe0},	/* nan=f(-0.25)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfceb851, 0xeb851e98},	/* nan=f(-0.24)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfcd70a3, 0xd70a3d50},	/* nan=f(-0.23)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfcc28f5, 0xc28f5c08},	/* nan=f(-0.22)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfcae147, 0xae147ac0},	/* nan=f(-0.21)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfc99999, 0x99999978},	/* nan=f(-0.2)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfc851eb, 0x851eb830},	/* nan=f(-0.19)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfc70a3d, 0x70a3d6e8},	/* nan=f(-0.18)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfc5c28f, 0x5c28f5a0},	/* nan=f(-0.17)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfc47ae1, 0x47ae1458},	/* nan=f(-0.16)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfc33333, 0x33333310},	/* nan=f(-0.15)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfc1eb85, 0x1eb851c8},	/* nan=f(-0.14)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfc0a3d7, 0x0a3d7080},	/* nan=f(-0.13)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfbeb851, 0xeb851e71},	/* nan=f(-0.12)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfbc28f5, 0xc28f5be2},	/* nan=f(-0.11)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfb99999, 0x99999953},	/* nan=f(-0.1)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfb70a3d, 0x70a3d6c4},	/* nan=f(-0.09)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfb47ae1, 0x47ae1435},	/* nan=f(-0.08)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfb1eb85, 0x1eb851a6},	/* nan=f(-0.07)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfaeb851, 0xeb851e2d},	/* nan=f(-0.06)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfa99999, 0x9999990e},	/* nan=f(-0.05)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbfa47ae1, 0x47ae13ef},	/* nan=f(-0.04)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbf9eb851, 0xeb851da0},	/* nan=f(-0.03)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbf947ae1, 0x47ae1362},	/* nan=f(-0.02)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbf847ae1, 0x47ae1249},	/* nan=f(-0.01)*/
{63, 0,123,__LINE__, 0xc02e05a6, 0x2c6e0cb1, 0x3cd19000, 0x00000000},	/* -15.011=f(9.74915e-16)*/
{63, 0,123,__LINE__, 0xbfffffff, 0xffffff41, 0x3f847ae1, 0x47ae16ad},	/* -2=f(0.01)*/
{63, 0,123,__LINE__, 0xbffb2efb, 0x2bd82121, 0x3f947ae1, 0x47ae1594},	/* -1.69897=f(0.02)*/
{64, 0,123,__LINE__, 0xbff85db6, 0x1a6c0a41, 0x3f9eb851, 0xeb851fd2},	/* -1.52288=f(0.03)*/
{63, 0,123,__LINE__, 0xbff65df6, 0x57b042d1, 0x3fa47ae1, 0x47ae1508},	/* -1.39794=f(0.04)*/
{64, 0,123,__LINE__, 0xbff4d104, 0xd427de59, 0x3fa99999, 0x99999a27},	/* -1.30103=f(0.05)*/
{64, 0,123,__LINE__, 0xbff38cb1, 0x46442be1, 0x3faeb851, 0xeb851f46},	/* -1.22185=f(0.06)*/
{64, 0,123,__LINE__, 0xbff27a7a, 0x7a4399c5, 0x3fb1eb85, 0x1eb85232},	/* -1.1549=f(0.07)*/
{64, 0,123,__LINE__, 0xbff18cf1, 0x83886469, 0x3fb47ae1, 0x47ae14c1},	/* -1.09691=f(0.08)*/
{64, 0,123,__LINE__, 0xbff0bb6c, 0x34d814ec, 0x3fb70a3d, 0x70a3d750},	/* -1.04576=f(0.09)*/
{64, 0,123,__LINE__, 0xbfefffff, 0xffffffda, 0x3fb99999, 0x999999df},	/* -1=f(0.1)*/
{64, 0,123,__LINE__, 0xbfeeace9, 0x3f5e7501, 0x3fbc28f5, 0xc28f5c6e},	/* -0.958607=f(0.11)*/
{64, 0,123,__LINE__, 0xbfed7758, 0xe4389ae3, 0x3fbeb851, 0xeb851efd},	/* -0.920819=f(0.12)*/
{63, 0,123,__LINE__, 0xbfec5a93, 0x7887db45, 0x3fc0a3d7, 0x0a3d70c6},	/* -0.886057=f(0.13)*/
{63, 0,123,__LINE__, 0xbfeb52eb, 0x4c3776a7, 0x3fc1eb85, 0x1eb8520e},	/* -0.853872=f(0.14)*/
{64, 0,123,__LINE__, 0xbfea5d75, 0xdd27d1e8, 0x3fc33333, 0x33333356},	/* -0.823909=f(0.15)*/
{64, 0,123,__LINE__, 0xbfe977d9, 0x5ec10bea, 0x3fc47ae1, 0x47ae149e},	/* -0.79588=f(0.16)*/
{63, 0,123,__LINE__, 0xbfe8a029, 0x956904bb, 0x3fc5c28f, 0x5c28f5e6},	/* -0.769551=f(0.17)*/
{63, 0,123,__LINE__, 0xbfe7d4ce, 0xc1606cee, 0x3fc70a3d, 0x70a3d72e},	/* -0.744727=f(0.18)*/
{63, 0,123,__LINE__, 0xbfe71473, 0x54087dca, 0x3fc851eb, 0x851eb876},	/* -0.721246=f(0.19)*/
{64, 0,123,__LINE__, 0xbfe65df6, 0x57b042ed, 0x3fc99999, 0x999999be},	/* -0.69897=f(0.2)*/
{64, 0,123,__LINE__, 0xbfe5b061, 0x295f48af, 0x3fcae147, 0xae147b06},	/* -0.677781=f(0.21)*/
{64, 0,123,__LINE__, 0xbfe50adf, 0x970eb811, 0x3fcc28f5, 0xc28f5c4e},	/* -0.657577=f(0.22)*/
{64, 0,123,__LINE__, 0xbfe46cb9, 0xbec80cf0, 0x3fcd70a3, 0xd70a3d96},	/* -0.638272=f(0.23)*/
{64, 0,123,__LINE__, 0xbfe3d54f, 0x3be8ddf2, 0x3fceb851, 0xeb851ede},	/* -0.619789=f(0.24)*/
{64, 0,123,__LINE__, 0xbfe34413, 0x509f79ee, 0x3fd00000, 0x00000013},	/* -0.60206=f(0.25)*/
{64, 0,123,__LINE__, 0xbfe2b889, 0xd0381e52, 0x3fd0a3d7, 0x0a3d70b7},	/* -0.585027=f(0.26)*/
{63, 0,123,__LINE__, 0xbfe23244, 0x9e883ef5, 0x3fd147ae, 0x147ae15b},	/* -0.568636=f(0.27)*/
{64, 0,123,__LINE__, 0xbfe1b0e1, 0xa3e7b9b3, 0x3fd1eb85, 0x1eb851ff},	/* -0.552842=f(0.28)*/
{64, 0,123,__LINE__, 0xbfe13409, 0x1d29381d, 0x3fd28f5c, 0x28f5c2a3},	/* -0.537602=f(0.29)*/
{64, 0,123,__LINE__, 0xbfe0bb6c, 0x34d814f3, 0x3fd33333, 0x33333347},	/* -0.522879=f(0.3)*/
{63, 0,123,__LINE__, 0xbfe046c3, 0xd74f3026, 0x3fd3d70a, 0x3d70a3eb},	/* -0.508638=f(0.31)*/
{63, 0,123,__LINE__, 0xbfdfab9f, 0x6ce29dea, 0x3fd47ae1, 0x47ae148f},	/* -0.49485=f(0.32)*/
{64, 0,123,__LINE__, 0xbfded0aa, 0xe86d142e, 0x3fd51eb8, 0x51eb8533},	/* -0.481486=f(0.33)*/
{64, 0,123,__LINE__, 0xbfddfc3f, 0xda328f8a, 0x3fd5c28f, 0x5c28f5d7},	/* -0.468521=f(0.34)*/
{63, 0,123,__LINE__, 0xbfdd2dfd, 0x39ade167, 0x3fd66666, 0x6666667b},	/* -0.455932=f(0.35)*/
{63, 0,123,__LINE__, 0xbfdc658a, 0x32215fef, 0x3fd70a3d, 0x70a3d71f},	/* -0.443697=f(0.36)*/
{63, 0,123,__LINE__, 0xbfdba295, 0x3c667de7, 0x3fd7ae14, 0x7ae147c3},	/* -0.431798=f(0.37)*/
{64, 0,123,__LINE__, 0xbfdae4d3, 0x577181a7, 0x3fd851eb, 0x851eb867},	/* -0.420216=f(0.38)*/
{63, 0,123,__LINE__, 0xbfda2bff, 0x5abfe0ae, 0x3fd8f5c2, 0x8f5c290b},	/* -0.408935=f(0.39)*/
{64, 0,123,__LINE__, 0xbfd977d9, 0x5ec10beb, 0x3fd99999, 0x999999af},	/* -0.39794=f(0.4)*/
{64, 0,123,__LINE__, 0xbfd8c826, 0x37f7ce88, 0x3fda3d70, 0xa3d70a53},	/* -0.387216=f(0.41)*/
{64, 0,123,__LINE__, 0xbfd81caf, 0x021f176f, 0x3fdae147, 0xae147af7},	/* -0.376751=f(0.42)*/
{64, 0,123,__LINE__, 0xbfd77540, 0xb90f3c14, 0x3fdb851e, 0xb851eb9b},	/* -0.366532=f(0.43)*/
{64, 0,123,__LINE__, 0xbfd6d1ab, 0xdd7df632, 0x3fdc28f5, 0xc28f5c3f},	/* -0.356547=f(0.44)*/
{64, 0,123,__LINE__, 0xbfd631c4, 0x23ffcdef, 0x3fdccccc, 0xcccccce3},	/* -0.346787=f(0.45)*/
{64, 0,123,__LINE__, 0xbfd59560, 0x2cf09fef, 0x3fdd70a3, 0xd70a3d87},	/* -0.337242=f(0.46)*/
{64, 0,123,__LINE__, 0xbfd4fc59, 0x441d1574, 0x3fde147a, 0xe147ae2b},	/* -0.327902=f(0.47)*/
{63, 0,123,__LINE__, 0xbfd4668b, 0x273241f3, 0x3fdeb851, 0xeb851ecf},	/* -0.318759=f(0.48)*/
{64, 0,123,__LINE__, 0xbfd3d3d3, 0xd21cceef, 0x3fdf5c28, 0xf5c28f73},	/* -0.309804=f(0.49)*/
{64, 0,123,__LINE__, 0xbfd34413, 0x509f79ec, 0x3fe00000, 0x0000000b},	/* -0.30103=f(0.5)*/
{64, 0,123,__LINE__, 0xbfd2b72b, 0x94823393, 0x3fe051eb, 0x851eb85d},	/* -0.29243=f(0.51)*/
{63, 0,123,__LINE__, 0xbfd22d00, 0x4fd0c2b3, 0x3fe0a3d7, 0x0a3d70af},	/* -0.283997=f(0.52)*/
{63, 0,123,__LINE__, 0xbfd1a576, 0xd2b216e0, 0x3fe0f5c2, 0x8f5c2901},	/* -0.275724=f(0.53)*/
{63, 0,123,__LINE__, 0xbfd12075, 0xec7103f8, 0x3fe147ae, 0x147ae153},	/* -0.267606=f(0.54)*/
{64, 0,123,__LINE__, 0xbfd09de5, 0xcf5c6433, 0x3fe19999, 0x999999a5},	/* -0.259637=f(0.55)*/
{63, 0,123,__LINE__, 0xbfd01daf, 0xf72ff973, 0x3fe1eb85, 0x1eb851f7},	/* -0.251812=f(0.56)*/
{64, 0,123,__LINE__, 0xbfcf3f7e, 0x23824b5f, 0x3fe23d70, 0xa3d70a49},	/* -0.244125=f(0.57)*/
{64, 0,123,__LINE__, 0xbfce47fd, 0xd365ec8f, 0x3fe28f5c, 0x28f5c29b},	/* -0.236572=f(0.58)*/
{63, 0,123,__LINE__, 0xbfcd54b8, 0xa5f8786f, 0x3fe2e147, 0xae147aed},	/* -0.229148=f(0.59)*/
{64, 0,123,__LINE__, 0xbfcc658a, 0x32215fe6, 0x3fe33333, 0x3333333f},	/* -0.221849=f(0.6)*/
{63, 0,123,__LINE__, 0xbfcb7a4f, 0xdd072062, 0x3fe3851e, 0xb851eb91},	/* -0.21467=f(0.61)*/
{64, 0,123,__LINE__, 0xbfca92e8, 0xbbfdccaf, 0x3fe3d70a, 0x3d70a3e3},	/* -0.207608=f(0.62)*/
{64, 0,123,__LINE__, 0xbfc9af35, 0x78dd76ee, 0x3fe428f5, 0xc28f5c35},	/* -0.200659=f(0.63)*/
{64, 0,123,__LINE__, 0xbfc8cf18, 0x388647ec, 0x3fe47ae1, 0x47ae1487},	/* -0.19382=f(0.64)*/
{63, 0,123,__LINE__, 0xbfc7f274, 0x835e6164, 0x3fe4cccc, 0xccccccd9},	/* -0.187087=f(0.65)*/
{63, 0,123,__LINE__, 0xbfc7192f, 0x2f9b3473, 0x3fe51eb8, 0x51eb852b},	/* -0.180456=f(0.66)*/
{63, 0,123,__LINE__, 0xbfc6432e, 0x4d2cd671, 0x3fe570a3, 0xd70a3d7d},	/* -0.173925=f(0.67)*/
{63, 0,123,__LINE__, 0xbfc57059, 0x13262b2b, 0x3fe5c28f, 0x5c28f5cf},	/* -0.167491=f(0.68)*/
{64, 0,123,__LINE__, 0xbfc4a097, 0xce8087ed, 0x3fe6147a, 0xe147ae21},	/* -0.161151=f(0.69)*/
{64, 0,123,__LINE__, 0xbfc3d3d3, 0xd21ccee4, 0x3fe66666, 0x66666673},	/* -0.154902=f(0.7)*/
{64, 0,123,__LINE__, 0xbfc309f7, 0x67e6fd47, 0x3fe6b851, 0xeb851ec5},	/* -0.148742=f(0.71)*/
{64, 0,123,__LINE__, 0xbfc242ed, 0xc303cbf3, 0x3fe70a3d, 0x70a3d717},	/* -0.142668=f(0.72)*/
{64, 0,123,__LINE__, 0xbfc17ea2, 0xf2f25cc1, 0x3fe75c28, 0xf5c28f69},	/* -0.136677=f(0.73)*/
{64, 0,123,__LINE__, 0xbfc0bd03, 0xd78e07e3, 0x3fe7ae14, 0x7ae147bb},	/* -0.130768=f(0.74)*/
{64, 0,123,__LINE__, 0xbfbffbfc, 0x2bbc77c7, 0x3fe80000, 0x0000000d},	/* -0.124939=f(0.75)*/
{64, 0,123,__LINE__, 0xbfbe8300, 0x1b481ec5, 0x3fe851eb, 0x851eb85f},	/* -0.119186=f(0.76)*/
{64, 0,123,__LINE__, 0xbfbd0ef1, 0x9f2d46e2, 0x3fe8a3d7, 0x0a3d70b1},	/* -0.113509=f(0.77)*/
{63, 0,123,__LINE__, 0xbfbb9fb0, 0x28819ae2, 0x3fe8f5c2, 0x8f5c2903},	/* -0.107905=f(0.78)*/
{63, 0,123,__LINE__, 0xbfba351c, 0x66e768e2, 0x3fe947ae, 0x147ae155},	/* -0.102373=f(0.79)*/
{64, 0,123,__LINE__, 0xbfb8cf18, 0x388647d2, 0x3fe99999, 0x999999a7},	/* -0.09691=f(0.8)*/
{64, 0,123,__LINE__, 0xbfb76d86, 0x9b029ff6, 0x3fe9eb85, 0x1eb851f9},	/* -0.091515=f(0.81)*/
{63, 0,123,__LINE__, 0xbfb6104b, 0x9d615248, 0x3fea3d70, 0xa3d70a4b},	/* -0.0861861=f(0.82)*/
{64, 0,123,__LINE__, 0xbfb4b74c, 0x52c6523b, 0x3fea8f5c, 0x28f5c29d},	/* -0.0809219=f(0.83)*/
{64, 0,123,__LINE__, 0xbfb3626e, 0xc5fe75e2, 0x3feae147, 0xae147aef},	/* -0.0757207=f(0.84)*/
{63, 0,123,__LINE__, 0xbfb21199, 0xedc60e50, 0x3feb3333, 0x33333341},	/* -0.0705811=f(0.85)*/
{64, 0,123,__LINE__, 0xbfb0c4b5, 0xa1bf0874, 0x3feb851e, 0xb851eb93},	/* -0.0655015=f(0.86)*/
{63, 0,123,__LINE__, 0xbfaef755, 0x2014d267, 0x3febd70a, 0x3d70a3e5},	/* -0.0604807=f(0.87)*/
{64, 0,123,__LINE__, 0xbfac6cc4, 0x66f3e1d9, 0x3fec28f5, 0xc28f5c37},	/* -0.0555173=f(0.88)*/
{64, 0,123,__LINE__, 0xbfa9e98d, 0x949f2ad4, 0x3fec7ae1, 0x47ae1489},	/* -0.05061=f(0.89)*/
{63, 0,123,__LINE__, 0xbfa76d86, 0x9b029fc2, 0x3feccccc, 0xccccccdb},	/* -0.0457575=f(0.9)*/
{63, 0,123,__LINE__, 0xbfa4f886, 0xd0f0f1b9, 0x3fed1eb8, 0x51eb852d},	/* -0.0409586=f(0.91)*/
{63, 0,123,__LINE__, 0xbfa28a66, 0xe2892fbf, 0x3fed70a3, 0xd70a3d7f},	/* -0.0362122=f(0.92)*/
{63, 0,123,__LINE__, 0xbfa02300, 0xc27452e6, 0x3fedc28f, 0x5c28f5d1},	/* -0.0315171=f(0.93)*/
{64, 0,123,__LINE__, 0xbf9b845f, 0x37d9b7cb, 0x3fee147a, 0xe147ae23},	/* -0.0268721=f(0.94)*/
{64, 0,123,__LINE__, 0xbf96cf9f, 0x8b075afd, 0x3fee6666, 0x66666675},	/* -0.0222764=f(0.95)*/
{64, 0,123,__LINE__, 0xbf92277d, 0x692c7faf, 0x3feeb851, 0xeb851ec7},	/* -0.0177288=f(0.96)*/
{64, 0,123,__LINE__, 0xbf8b176b, 0xc5ac9724, 0x3fef0a3d, 0x70a3d719},	/* -0.0132283=f(0.97)*/
{64, 0,123,__LINE__, 0xbf81f810, 0x2faa9ee8, 0x3fef5c28, 0xf5c28f6b},	/* -0.00877392=f(0.98)*/
{63, 0,123,__LINE__, 0xbf71e0d4, 0x874f8fa8, 0x3fefae14, 0x7ae147bd},	/* -0.00436481=f(0.99)*/
{63, 0,123,__LINE__, 0x3cc8520b, 0xb2820867, 0x3ff00000, 0x00000007},	/* 6.75029e-16=f(1)*/
{64, 0,123,__LINE__, 0x3f71b349, 0xf11fb8c1, 0x3ff028f5, 0xc28f5c30},	/* 0.00432137=f(1.01)*/
{63, 0,123,__LINE__, 0x3f819cf7, 0x83a8cc9a, 0x3ff051eb, 0x851eb859},	/* 0.00860017=f(1.02)*/
{64, 0,123,__LINE__, 0x3f8a4a67, 0x223dafef, 0x3ff07ae1, 0x47ae1482},	/* 0.0128372=f(1.03)*/
{63, 0,123,__LINE__, 0x3f917130, 0x0ceb745b, 0x3ff0a3d7, 0x0a3d70ab},	/* 0.0170333=f(1.04)*/
{64, 0,123,__LINE__, 0x3f95b2a5, 0xca1f4885, 0x3ff0cccc, 0xccccccd4},	/* 0.0211893=f(1.05)*/
{64, 0,123,__LINE__, 0x3f99e9c7, 0xded6318d, 0x3ff0f5c2, 0x8f5c28fd},	/* 0.0253059=f(1.06)*/
{64, 0,123,__LINE__, 0x3f9e16c7, 0xf0c37ea6, 0x3ff11eb8, 0x51eb8526},	/* 0.0293838=f(1.07)*/
{63, 0,123,__LINE__, 0x3fa11ceb, 0x2173b006, 0x3ff147ae, 0x147ae14f},	/* 0.0334238=f(1.08)*/
{63, 0,123,__LINE__, 0x3fa32990, 0xe1514d46, 0x3ff170a3, 0xd70a3d78},	/* 0.0374265=f(1.09)*/
{64, 0,123,__LINE__, 0x3fa5316c, 0x0a18ae2f, 0x3ff19999, 0x999999a1},	/* 0.0413927=f(1.1)*/
{64, 0,123,__LINE__, 0x3fa73492, 0xcf4ac047, 0x3ff1c28f, 0x5c28f5ca},	/* 0.045323=f(1.11)*/
{63, 0,123,__LINE__, 0x3fa9331a, 0xcb7c042e, 0x3ff1eb85, 0x1eb851f3},	/* 0.049218=f(1.12)*/
{64, 0,123,__LINE__, 0x3fab2d19, 0x05c48b3c, 0x3ff2147a, 0xe147ae1c},	/* 0.0530784=f(1.13)*/
{63, 0,123,__LINE__, 0x3fad22a1, 0xf6f2a24a, 0x3ff23d70, 0xa3d70a45},	/* 0.0569049=f(1.14)*/
{63, 0,123,__LINE__, 0x3faf13c9, 0x8e83604a, 0x3ff26666, 0x6666666e},	/* 0.0606978=f(1.15)*/
{63, 0,123,__LINE__, 0x3fb08051, 0x9bb20ec6, 0x3ff28f5c, 0x28f5c297},	/* 0.064458=f(1.16)*/
{63, 0,123,__LINE__, 0x3fb174a0, 0xee3fd509, 0x3ff2b851, 0xeb851ec0},	/* 0.0681859=f(1.17)*/
{63, 0,123,__LINE__, 0x3fb266db, 0xf68cf706, 0x3ff2e147, 0xae147ae9},	/* 0.071882=f(1.18)*/
{63, 0,123,__LINE__, 0x3fb3570b, 0xb07e3b9a, 0x3ff30a3d, 0x70a3d712},	/* 0.075547=f(1.19)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc01921fb, 0x54442d18},	/* nan=f(-6.28319)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc012d97c, 0x7f3321d2},	/* nan=f(-4.71239)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc00921fb, 0x54442d18},	/* nan=f(-3.14159)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff921fb, 0x54442d18},	/* nan=f(-1.5708)*/
{ 0, 0, 34,__LINE__, 0xfff00000, 0x00000000, 0x00000000, 0x00000000},	/* -inf=f(0)*/
{63, 0,123,__LINE__, 0x3fc91a74, 0xc4f85377, 0x3ff921fb, 0x54442d18},	/* 0.19612=f(1.5708)*/
{64, 0,123,__LINE__, 0x3fdfd14d, 0xb31ba3bb, 0x400921fb, 0x54442d18},	/* 0.49715=f(3.14159)*/
{64, 0,123,__LINE__, 0x3fe58b30, 0xfc65ffdc, 0x4012d97c, 0x7f3321d2},	/* 0.673241=f(4.71239)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc03e0000, 0x00000000},	/* nan=f(-30)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc03c4ccc, 0xcccccccd},	/* nan=f(-28.3)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc03a9999, 0x9999999a},	/* nan=f(-26.6)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc038e666, 0x66666667},	/* nan=f(-24.9)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc0373333, 0x33333334},	/* nan=f(-23.2)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc0358000, 0x00000001},	/* nan=f(-21.5)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc033cccc, 0xccccccce},	/* nan=f(-19.8)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc0321999, 0x9999999b},	/* nan=f(-18.1)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc0306666, 0x66666668},	/* nan=f(-16.4)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc02d6666, 0x6666666a},	/* nan=f(-14.7)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc02a0000, 0x00000004},	/* nan=f(-13)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc0269999, 0x9999999e},	/* nan=f(-11.3)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc0233333, 0x33333338},	/* nan=f(-9.6)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc01f9999, 0x999999a3},	/* nan=f(-7.9)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc018cccc, 0xccccccd6},	/* nan=f(-6.2)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc0120000, 0x00000009},	/* nan=f(-4.5)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc0066666, 0x66666678},	/* nan=f(-2.8)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff19999, 0x999999bd},	/* nan=f(-1.1)*/
{63, 0,123,__LINE__, 0xbfcc658a, 0x322160d6, 0x3fe33333, 0x333332ec},	/* -0.221849=f(0.6)*/
{64, 0,123,__LINE__, 0x3fd7268c, 0x826fe5e1, 0x40026666, 0x66666654},	/* 0.361728=f(2.3)*/
{64, 0,123,__LINE__, 0x3fe34413, 0x509f79f7, 0x400fffff, 0xffffffee},	/* 0.60206=f(4)*/
{64, 0,123,__LINE__, 0x3fe83020, 0x771f6d1a, 0x4016cccc, 0xccccccc4},	/* 0.755875=f(5.7)*/
{63, 0,123,__LINE__, 0x3febd0bf, 0x0a1c7dfc, 0x401d9999, 0x99999991},	/* 0.869232=f(7.4)*/
{64, 0,123,__LINE__, 0x3feeb077, 0x92f0f0da, 0x40223333, 0x3333332f},	/* 0.959041=f(9.1)*/
{63, 0,123,__LINE__, 0x3ff088e7, 0x590b9d7c, 0x40259999, 0x99999995},	/* 1.03342=f(10.8)*/
{64, 0,123,__LINE__, 0x3ff18cf1, 0x8388647f, 0x4028ffff, 0xfffffffb},	/* 1.09691=f(12.5)*/
{64, 0,123,__LINE__, 0x3ff26fc5, 0xe72afed2, 0x402c6666, 0x66666661},	/* 1.15229=f(14.2)*/
{64, 0,123,__LINE__, 0x3ff338ec, 0x30e76fc1, 0x402fcccc, 0xccccccc7},	/* 1.2014=f(15.9)*/
{64, 0,123,__LINE__, 0x3ff3ed9e, 0xb0f03f6c, 0x40319999, 0x99999997},	/* 1.24551=f(17.6)*/
{64, 0,123,__LINE__, 0x3ff491a4, 0x8a75278a, 0x40334ccc, 0xccccccca},	/* 1.28556=f(19.3)*/
{64, 0,123,__LINE__, 0x3ff527cf, 0x6b505b9e, 0x4034ffff, 0xfffffffd},	/* 1.32222=f(21)*/
{64, 0,123,__LINE__, 0x3ff5b248, 0x2b52cc18, 0x4036b333, 0x33333330},	/* 1.35603=f(22.7)*/
{64, 0,123,__LINE__, 0x3ff632bf, 0xacaed8ee, 0x40386666, 0x66666663},	/* 1.38739=f(24.4)*/
{64, 0,123,__LINE__, 0x3ff6aa8f, 0x3c934ee8, 0x403a1999, 0x99999996},	/* 1.41664=f(26.1)*/
{64, 0,123,__LINE__, 0x3ff71ace, 0xb746d587, 0x403bcccc, 0xccccccc9},	/* 1.44404=f(27.8)*/
{64, 0,123,__LINE__, 0x3ff78464, 0x1719126d, 0x403d7fff, 0xfffffffc},	/* 1.46982=f(29.5)*/
0,};
test_log10(m)   {run_vector_1(m,log10_vec,(char *)(log10),"log10","dd");   }	
