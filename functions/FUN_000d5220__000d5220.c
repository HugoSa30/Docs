/*
 * Program: n42.bin
 * Function: FUN_000d5220
 * Entry: 000d5220
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d5220(void)

{
  uint uVar1;
  uint uVar2;
  undefined2 local_10;
  undefined2 local_c;
  
  uVar1 = (uint)miopt_w * (uint)etazaist;
  uVar2 = (uint)miopt_w * 200;
  local_10 = (undefined2)(uVar1 >> 0x10);
  _DAT_003fb82c = FUN_000a7b40(local_10,uVar1 & 0xffff,200);
  local_c = (undefined2)(uVar2 >> 0x10);
  _DAT_003fb82e = FUN_000a7b40(local_c,uVar2 & 0xffff,200);
  return;
}

