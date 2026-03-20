/*
 * Program: n42.bin
 * Function: FUN_000f7f70
 * Entry: 000f7f70
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f7f70(void)

{
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  ushort uVar4;
  byte *pbVar5;
  
  pbVar3 = *(byte **)(_DAT_003fc5d8 + 8);
  if (pbVar3 != (byte *)0x0) {
    pbVar5 = pbVar3 + 1;
    bVar1 = *pbVar3;
    uVar4 = (ushort)bVar1;
    if (bVar1 != 0) {
      do {
        sVar2 = (*(code *)&SUB_00067e48)(*pbVar5,pbVar5[1],pbVar5[2],0xfb);
        if (sVar2 < 2) {
          (*(code *)&SUB_00fafd30)(0x37,0xf,bVar1,0);
          break;
        }
        sVar2 = (*(code *)&SUB_00067d24)(*pbVar5,pbVar5[1],0xfb);
        if (sVar2 < 2) {
          (*(code *)&SUB_00fafd30)(0x37,0xf,bVar1,0);
          break;
        }
        pbVar5 = pbVar5 + 3;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    (*(code *)&SUB_00067d24)(pbVar5[-3],pbVar5[-2],0xfc);
  }
  return;
}

