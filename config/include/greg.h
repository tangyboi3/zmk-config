/* This file was copied and then modified from https://github.com/urob/zmk-helpers/blob/main/include/zmk-helpers/key-labels/42.h
 * LICENSE for that repo is inlined below.
 *
 * MIT License
 *
 * Copyright (c) 2023 Robert U
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/*                                      40 KEY MATRIX / LAYOUT MAPPING
  ╭────────────────────────┬────────────────────────╮ ╭─────────────────────────┬─────────────────────────╮
  │  0   1   2   3   4   5 │  6   7   8   9  10  11 │ │ LT5 LT4 LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 RT4 RT5 │
  │ 12  13  14  15  16  17 │ 18  19  20  21  22  23 │ │ LM5 LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 RM5 │
  ╰───╮ 24  25  26  27  28 │ 29  30  31  32  33 ╭───╯ ╰───╮ LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4 ╭───╯
      ╰───────╮ 34  35  36 │ 37  38  39 ╭───────╯         ╰───────╮ LH2 LH1 LH0 │ RH0 RH1 RH2 ╭───────╯
              ╰────────────┴────────────╯                         ╰─────────────┴─────────────╯             */

#pragma once

#define LT0  5  // left-top row
#define LT1  4
#define LT2  3
#define LT3  2
#define LT4  1
#define LT5  0

#define RT0  6  // right-top row
#define RT1  7
#define RT2  8
#define RT3  9
#define RT4 10
#define RT5 11

#define LM0 17  // left-middle row
#define LM1 16
#define LM2 15
#define LM3 14
#define LM4 13
#define LM5 12

#define RM0 18  // right-middle row
#define RM1 19
#define RM2 20
#define RM3 21
#define RM4 22
#define RM5 23

#define LB0 28  // left-bottom row
#define LB1 27
#define LB2 26
#define LB3 25
#define LB4 24

#define RB0 29  // right-bottom row
#define RB1 30
#define RB2 31
#define RB3 32
#define RB4 33

#define LH0 36  // left thumb keys
#define LH1 35
#define LH2 34

#define RH0 37  // right thumb keys
#define RH1 38
#define RH2 39

#define LAYER( \
        k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, \
        k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, \
        k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, \
                  k30, k31, k32, k33, k34, k35            \
) \
 &none  k00  k01  k02  k03  k04  k05  k06  k07  k08  k09  &none \
 &none  k10  k11  k12  k13  k14  k15  k16  k17  k18  k19  &none \
        k20  k21  k22  k23  k32  k25  k26  k27  k28  k29  \
           &none  k31  k32  k33  k34  &none
