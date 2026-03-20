/*
 * Program: n42.bin
 * Function: FUN_001aeb14
 * Entry: 001aeb14
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001aeb14(void)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  
  if (_DAT_00020130 == 0) {
    _DAT_003fc35c = 0;
  }
  else {
    _DAT_003fc35c = 1;
    (*(code *)&SUB_00faf214)(_DAT_00020130,DAT_00020138,0);
    (*(code *)&SUB_00faf170)(_DAT_00020130,DAT_00020138,0);
    iVar1 = _DAT_00020130;
    uVar3 = (uint)DAT_00020138;
    *(ushort *)(_DAT_00020130 + 0x20) = ~(ushort)(1 << (uVar3 & 0x3f));
    uVar3 = uVar3 * 2;
    *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) & ~(3 << (uVar3 & 0x3f)) | 0 << (uVar3 & 0x3f)
    ;
    uVar2 = 0;
    do {
      (*(code *)&SUB_0006561c)(_DAT_00020130,DAT_00020138,uVar2 & 0xff,0);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 5);
  }
  (*(code *)&SUB_00faf9a8)(0xc);
  return;
}

