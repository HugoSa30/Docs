/*
 * Program: n42.bin
 * Function: func_1
 * Entry: 000fc610
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
           undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
           undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 in_f0;
  
  puVar2 = _DAT_003fbcb8;
  puVar1 = _DAT_003fbcb8 + 0xd;
  _DAT_003fbcb8 = _DAT_003fbcb8 + 0xe;
  *puVar1 = in_f0;
  puVar2[0xc] = param_1;
  puVar2[0xb] = param_2;
  puVar2[10] = param_3;
  puVar2[9] = param_4;
  puVar2[8] = param_5;
  puVar2[7] = param_6;
  puVar2[6] = param_7;
  puVar2[5] = param_8;
  puVar2[4] = param_9;
  puVar2[3] = param_10;
  puVar2[2] = param_11;
  puVar2[1] = param_12;
  *puVar2 = param_13;
  return;
}

