/*
 * Program: n42.bin
 * Function: FUN_000fa2ec
 * Entry: 000fa2ec
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fa2ec(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int in_TBLr;
  
  _DAT_002fc200 = _DAT_002fc200 & 0xff4b;
  if (DAT_003fbcad != '\0') {
    do {
      iVar11 = *(int *)(*(int *)(_DAT_003fbcbc + 0x68) + *(int *)(_DAT_003fbcbc + 0x24) * 4);
      iVar3 = *(int *)(*(int *)(_DAT_003fbcbc + 0x70) + iVar11 * 4) - in_TBLr;
      if (0 < iVar3) {
        _DAT_002fc200 = _DAT_002fc200 & 0xff0f | 0x44;
        _DAT_002fc208 = in_TBLr + iVar3;
        return;
      }
      iVar3 = iVar11 * 4;
      pcVar4 = *(code **)(*(int *)(_DAT_003fbcbc + 0x58) + iVar3);
      iVar8 = *(int *)(_DAT_003fbcbc + 0x6c);
      uVar6 = *(uint *)(iVar8 + iVar3);
      if (uVar6 == 0) {
        *(undefined4 *)(*(int *)(_DAT_003fbcbc + 0x68) + *(int *)(_DAT_003fbcbc + 0x24) * 4) =
             *(undefined4 *)(*(int *)(_DAT_003fbcbc + 0x68) + iVar11 * 4);
        *(undefined4 *)(iVar8 + iVar11 * 4) = 0xffffffff;
        DAT_003fbcad = DAT_003fbcad + -1;
      }
      else {
        piVar9 = (int *)(*(int *)(_DAT_003fbcbc + 0x70) + iVar3);
        iVar3 = uVar6 + *piVar9;
        *piVar9 = iVar3;
        if (iVar3 - in_TBLr < 1) {
          piVar9 = (int *)(*(int *)(_DAT_003fbcbc + 0x70) + iVar11 * 4);
          iVar3 = *piVar9 + uVar6 * ((uint)(in_TBLr - iVar3) / uVar6 + 1);
          *piVar9 = iVar3;
        }
        iVar1 = _DAT_003fbcbc;
        iVar10 = *(int *)(_DAT_003fbcbc + 0x24);
        iVar7 = *(int *)(_DAT_003fbcbc + 0x70);
        iVar8 = iVar10 * 4;
        *(int *)(iVar7 + iVar8) = iVar3 + -0x80000000;
        iVar5 = *(int *)(iVar1 + 0x68);
        iVar1 = *(int *)(iVar5 + iVar11 * 4);
        *(int *)(iVar5 + iVar8) = iVar1;
        iVar8 = *(int *)(iVar7 + iVar1 * 4);
        while (0 < iVar3 - iVar8) {
          iVar2 = *(int *)(iVar5 + iVar1 * 4);
          iVar10 = iVar1;
          iVar1 = iVar2;
          iVar8 = *(int *)(iVar7 + iVar2 * 4);
        }
        *(int *)(iVar5 + iVar10 * 4) = iVar11;
        *(int *)(iVar5 + iVar11 * 4) = iVar1;
      }
      (*pcVar4)();
    } while (DAT_003fbcad != '\0');
  }
  return;
}

