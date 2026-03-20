/*
 * Program: n42.bin
 * Function: FUN_001e1500
 * Entry: 001e1500
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_001e1500(int param_1,byte *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar6 = 0;
  uVar4 = 0;
  uVar3 = (uint)*param_2;
  if (uVar3 != 0) {
    uVar2 = (uint)DAT_00fe1720;
    do {
      iVar7 = param_1 + uVar4 * 0x28;
      uVar8 = 0;
      uVar5 = uVar3;
      uVar6 = uVar4;
      if (uVar2 != 0) {
        do {
          bVar1 = *(char *)(*(int *)(iVar7 + 0x14) + uVar8) ==
                  *(char *)(*(int *)(iVar7 + 0x18) + uVar8);
          uVar9 = uVar2;
          if (bVar1) {
            uVar9 = uVar8;
          }
          uVar8 = uVar9 + 1 & 0xff;
        } while (uVar8 < uVar2);
        if (bVar1) {
          uVar5 = uVar4;
          uVar6 = uVar4 + 1;
        }
      }
      uVar4 = uVar5 + 1 & 0xff;
    } while (uVar4 < uVar3);
  }
  return uVar6 & 0xff;
}

