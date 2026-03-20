/*
 * Program: n42.bin
 * Function: FUN_001af5b0
 * Entry: 001af5b0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001af5b0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar1 = (uint)_DAT_00fa123c;
  puVar3 = _DAT_00fa1234;
  if (uVar1 != 0) {
    do {
      *(undefined4 *)(&DAT_00302000 + uVar4 * 4) = *puVar3;
      uVar4 = uVar4 + 1 & 0xffff;
      if (uVar1 <= uVar4) break;
      puVar3 = puVar3 + 1;
    } while (uVar4 < 0x600);
  }
  for (; uVar4 < 0x600; uVar4 = uVar4 + 1 & 0xffff) {
    *(undefined4 *)(&DAT_00302000 + uVar4 * 4) = 0xffffffff;
  }
  iVar2 = (*(code *)&SUB_00faf560)(&DAT_00302000);
  if ((_DAT_00fa1238 != iVar2) && (_DAT_003fc364 != (code *)0x0)) {
    (*_DAT_003fc364)(10,0x32);
  }
  _DAT_003fc368 = _DAT_00fa1238;
  return;
}

