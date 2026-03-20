/*
 * Program: n42.bin
 * Function: FUN_001241fc
 * Entry: 001241fc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001241fc(void)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  ushort uVar6;
  
  _DAT_003fa186 = 1;
  uVar4 = 0;
  iVar3 = 0xec00;
  do {
    bVar1 = *(byte *)(iVar3 + (uint)uVar4 * 4 + 2);
    if ((((bVar1 & 2) != 0) && ((bVar1 & 0x40) == 0)) &&
       (iVar5 = *(int *)((uint)uVar4 * 8 + 0xebf8), sVar2 = func_0xff20d6e4((uint)uVar4,iVar5),
       sVar2 != *(short *)(iVar5 + -2))) {
      uVar6 = _DAT_003fa186 + 1;
      _DAT_003fa186 = uVar6;
      (&UNK_003fa134)[uVar4] = (&UNK_003fa134)[uVar4] | 8;
      if (1 < uVar6 - 1) {
        return 1;
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 == 0);
  return 0;
}

