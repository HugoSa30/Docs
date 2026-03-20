/*
 * Program: n42.bin
 * Function: FUN_0010a594
 * Entry: 0010a594
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0010a594(uint param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  
  uVar1 = param_1 - DAT_00f03658 & 0xff;
  bVar3 = false;
  iVar2 = _DAT_003faf14 + uVar1 * 0x14;
  if ((byte)(&UNK_003fae84)
            [((uint)*(byte *)(iVar2 + 0xe) + (uint)*(byte *)(iVar2 + 0xd) * 0x10) * 2 & 0x1fe] ==
      param_1) {
    bVar4 = 3;
  }
  else {
    bVar3 = *(char *)(_DAT_003faf20 + uVar1) == '\x01';
    bVar4 = 2;
  }
  iVar2 = FUN_0010a8ec(iVar2 + 8);
  if (iVar2 == 1) {
    bVar3 = bVar3 | bVar4;
  }
  return bVar3;
}

