/*
 * Program: n42.bin
 * Function: FUN_00092048
 * Entry: 00092048
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00092048(void)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  puVar1 = _DAT_003f9f88;
  _DAT_003f9f88[5] = _DAT_003f9f88[5] & 0xfffb;
  puVar1[5] = puVar1[5] & 0xfff7;
  *puVar1 = 0;
  uVar2 = FUN_000967c0(_LAB_001c0064);
  puVar1[4] = uVar2;
  puVar1 = _DAT_003f9f88;
  _DAT_003f9f88[5] = _DAT_003f9f88[5] & 0xfbff;
  puVar1[5] = puVar1[5] & 0xfdff;
  puVar1[5] = puVar1[5] | 0x1000;
  puVar1[5] = puVar1[5] & 0xffdf;
  puVar1[5] = puVar1[5] & 0xff7f;
  puVar1[5] = puVar1[5] & 0xffbf;
  puVar1[5] = puVar1[5] & 0xffef;
  puVar1[2] = puVar1[2] & 0xff00 | 0xf;
  puVar1[5] = puVar1[5] | 8;
  puVar1[5] = puVar1[5] | 4;
  return;
}

