/*
 * Program: n42.bin
 * Function: FUN_001331a4
 * Entry: 001331a4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x00133288) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001331a4(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  ftw = func_0xff2196d0(&KFFWTBR,rl,nmot);
  uVar2 = (uint)tmotfil;
  if (tmot < uVar2) {
    uVar2 = (uint)tmot;
  }
  uVar3 = (uint)tans;
  if (uVar2 <= uVar3) {
    uVar2 = uVar3;
  }
  _DAT_003fabec = (short)uVar2 + -0x40;
  uVar2 = uVar2 - uVar3;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0xff < (int)uVar2) {
    uVar2 = 0xff;
  }
  uVar2 = (uVar2 & 0xff) * (uint)ftw;
  if (0xfffe < uVar2) {
    uVar2 = 0xffff;
  }
  uVar3 = (uVar2 >> 8) + uVar3;
  uVar1 = (ushort)uVar3;
  if (0xff < uVar3) {
    uVar1 = 0xff;
  }
  _DAT_003fabf0 = (uVar1 & 0xff) - 0x40;
  return;
}

