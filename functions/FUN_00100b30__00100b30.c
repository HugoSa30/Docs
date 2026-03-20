/*
 * Program: n42.bin
 * Function: FUN_00100b30
 * Entry: 00100b30
 * Exported by: ExportAllDecompiledFunctions.java
 */


short FUN_00100b30(uint param_1,uint param_2)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 <= DAT_005bd0cc) && (DAT_005bd0c8 <= param_2)) {
    bVar2 = true;
    uVar5 = 0;
    if (((uint)(DAT_005bd51c + *DAT_005bd524) < param_1) && (DAT_005bd520 != 0)) {
      do {
        uVar5 = uVar5 + 1;
        if (param_1 <= (uint)(DAT_005bd51c + *(int *)((int)DAT_005bd524 + (uVar5 * 4 & 0x3fc))))
        break;
      } while ((uVar5 & 0xff) < DAT_005bd520);
    }
    if ((DAT_005bd51c + DAT_005bd524[uVar5 & 0xff] != param_1) || ((uVar5 & 0xff) == DAT_005bd520))
    {
      bVar2 = false;
    }
    DAT_003fb9a4 = (undefined)uVar5;
    iVar3 = DAT_005bd51c + DAT_005bd524[uVar5 & 0xff] + *(int *)(DAT_005bd528 + (uVar5 & 0xff) * 4);
    while ((iVar3 - 1U < param_2 && ((uVar5 & 0xff) < DAT_005bd520))) {
      uVar5 = uVar5 + 1;
      uVar4 = uVar5 * 4 & 0x3fc;
      iVar3 = DAT_005bd51c + *(int *)((int)DAT_005bd524 + uVar4) + *(int *)(DAT_005bd528 + uVar4);
    }
    if (((DAT_005bd51c + DAT_005bd524[uVar5 & 0xff] + *(int *)(DAT_005bd528 + (uVar5 & 0xff) * 4)) -
         1U != param_2) || ((uVar5 & 0xff) == DAT_005bd520)) {
      bVar2 = false;
    }
    DAT_003fb9a5 = (undefined)uVar5;
    if (bVar2) {
      sVar1 = FUN_00100d90();
      goto LAB_00100c8c;
    }
  }
  sVar1 = 1;
LAB_00100c8c:
  if (sVar1 != 0) {
    DAT_003fb9a5 = 0;
    DAT_003fb9a4 = 1;
  }
  return sVar1;
}

