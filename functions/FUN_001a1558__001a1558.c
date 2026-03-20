/*
 * Program: n42.bin
 * Function: FUN_001a1558
 * Entry: 001a1558
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a1558(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined uVar8;
  uint uVar9;
  
  puVar2 = _DAT_003fbc84;
  iVar1 = _DAT_003fbc7c;
  uVar4 = (uint)*(byte *)(_DAT_003fbc7c + 2);
  iVar7 = uVar4 * 10;
  iVar6 = uVar4 * 0xc;
  if ((int)(DAT_00fa9c80 - 1) < (int)uVar4) {
    uVar8 = 0;
    _DAT_003fbc84[3] = 0;
  }
  else {
    iVar3 = func_0xff217790(*(undefined *)(iVar7 + 0xfa9cb8),*(undefined4 *)(_DAT_003fbc7c + 4));
    if (iVar3 != 0) {
      *(undefined4 *)(&DAT_003fbc20 + iVar6) = *(undefined4 *)(iVar1 + 4);
      (&DAT_003fbc24)[iVar6] = 0;
      (&UNK_003fbc25)[iVar6] = 0x20;
      uVar4 = (uint)DAT_00fa9cae;
      uVar9 = *(uint *)(&DAT_00fa9cb2 + iVar7);
      do {
        uVar5 = 0;
        do {
          *(undefined4 *)(uVar9 + uVar5 * 4) = 0;
          *(undefined *)(uVar9 + uVar5 + 0x1c) = 0;
          uVar5 = uVar5 + 1 & 0xff;
        } while ((int)uVar5 < (int)(uVar4 - 1));
        *(undefined4 *)(uVar9 + uVar5 * 4) = 0;
        uVar9 = uVar9 + 0x2b;
      } while (uVar9 < *(int *)(&DAT_00fa9cb2 + iVar7) + (uint)(byte)(&DAT_00fa9cb0)[iVar7] * 0x2b);
      puVar2[3] = (&DAT_00fa9cb0)[iVar7];
      puVar2[4] = *(undefined *)(iVar7 + 0xfa9cb1);
      puVar2[1] = 0;
      (&DAT_003fbc24)[iVar6] = (&DAT_003fbc24)[iVar6] | 1;
      goto LAB_001a1674;
    }
    uVar8 = 0x32;
  }
  puVar2[1] = uVar8;
LAB_001a1674:
  *puVar2 = 0xff;
  return;
}

