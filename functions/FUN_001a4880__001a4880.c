/*
 * Program: n42.bin
 * Function: FUN_001a4880
 * Entry: 001a4880
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined FUN_001a4880(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  
  uVar3 = param_1 - (uint)DAT_00f03658 & 0xff;
  iVar5 = _DAT_003faf14 + uVar3 * 0x14;
  cVar1 = (&UNK_003fae78)[*(byte *)(iVar5 + 0xd)];
  *(char *)(param_2 + 8) = cVar1;
  if (cVar1 == '\0') {
    bVar4 = FUN_001a4924(iVar5 + 8,param_2);
    if (bVar4 == 0) {
      bVar2 = 0x10;
    }
    else {
      bVar2 = bVar4 & 8;
    }
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | bVar2;
    *(bool *)(_DAT_003faf20 + uVar3) = bVar4 != 0;
  }
  return *(undefined *)(param_2 + 8);
}

