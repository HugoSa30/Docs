/*
 * Program: n42.bin
 * Function: FUN_001e44f0
 * Entry: 001e44f0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001e44f0(undefined *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint *unaff_r21;
  uint unaff_r24;
  int iVar4;
  uint uVar5;
  uint unaff_r29;
  int iVar6;
  
  piVar2 = (int *)(param_2 + 0x5bf0);
  do {
    piVar2 = piVar2 + 1;
    iVar6 = *piVar2;
    iVar4 = 0;
    uVar5 = 0;
    iVar3 = *(int *)(iVar6 + 0x18);
    while (iVar1 = _DAT_00fe16d0, iVar3 != 0) {
      uVar5 = uVar5 + 1;
      if (0xfff < uVar5) {
        if (uVar5 == 0x1000) {
          if (unaff_r24 != 0) {
            param_1[5] = 0;
            param_1[4] = 0;
            param_1[3] = 0;
            param_1[2] = 0;
            param_1[1] = 0;
          }
          unaff_r24 = 0;
          *param_1 = 0xa3;
          param_1[unaff_r29 + 1] = 4;
          iVar1 = _DAT_00fe16d0;
        }
        break;
      }
      iVar3 = *(int *)(iVar6 + 0x18);
    }
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      uVar5 = 0;
      if ((uint)*(ushort *)(iVar6 + 0x100) == (~(iVar6 + 0x100U) & 0xffff)) {
        do {
          uVar5 = uVar5 + 1;
          if (7 < (uVar5 & 0xffff)) break;
          iVar3 = iVar6 + (uVar5 * 2 & 0x1fffe);
        } while ((uint)*(ushort *)(iVar3 + 0x100) == (~(iVar3 + 0x100U) & 0xffff));
      }
      iVar4 = iVar4 + (uint)((uVar5 & 0xffff) == 8);
      iVar6 = iVar6 + 0x10;
    }
    if (_DAT_00fe16d0 != iVar4) {
      if (unaff_r24 != 0) {
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[1] = 0;
      }
      unaff_r24 = 0;
      *param_1 = 0xa3;
      param_1[unaff_r29 + 1] = param_1[unaff_r29 + 1] | 8;
    }
    unaff_r29 = unaff_r29 + 1;
    if (*unaff_r21 <= unaff_r29) {
      return unaff_r24 & 0xff;
    }
  } while( true );
}

