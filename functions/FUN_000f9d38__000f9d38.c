/*
 * Program: n42.bin
 * Function: FUN_000f9d38
 * Entry: 000f9d38
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f9d38(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int in_TBLr;
  
  uVar6 = 0;
  uVar4 = 0;
  do {
    iVar5 = *(int *)(_DAT_003fc884 + uVar4 * 0xc);
    if (iVar5 == param_1) {
      iVar3 = _DAT_003fc884 + uVar4 * 0xc;
      uVar2 = (uint)*(byte *)(iVar3 + 8);
      if (((int)(uint)*(ushort *)(iVar5 + 0x20) >> (uVar2 & 0x3f) & 1U) != 0) {
        uVar1 = *(ushort *)(*(int *)(iVar3 + 4) + 8);
        *(ushort *)(iVar5 + 0x20) = ~(ushort)(1 << (uVar2 & 0x3f));
        *(uint *)(&UNK_003fc88c + uVar4 * 0x10) = (uint)(in_TBLr * 0x6666) >> 0x10;
        if ((*(int *)(&UNK_003fc888 + uVar4 * 0x10) == 3) &&
           (*(code **)(_DAT_003fc880 + 4) != (code *)0x0)) {
          (**(code **)(_DAT_003fc880 + 4))(8,1,uVar4,uVar1 >> 0xf);
        }
        uVar6 = 1;
      }
    }
    uVar4 = uVar4 + 1 & 0xffff;
  } while (uVar4 < 4);
  return uVar6;
}

