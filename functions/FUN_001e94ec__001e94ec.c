/*
 * Program: n42.bin
 * Function: FUN_001e94ec
 * Entry: 001e94ec
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001e94ec(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int in_r12;
  uint uVar5;
  int unaff_r23;
  undefined4 unaff_r24;
  int iVar6;
  undefined4 *puVar7;
  undefined4 unaff_r25;
  int unaff_r26;
  int unaff_r27;
  int unaff_r28;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined *puVar12;
  uint param_11;
  uint param_12;
  
  *(undefined4 *)(in_r12 + 8) = param_1;
  FUN_001e915c(unaff_r26,unaff_r24,unaff_r25,unaff_r27);
  iVar10 = *(int *)(unaff_r26 + unaff_r27 * 4 + -4);
  iVar6 = unaff_r28 - unaff_r27;
  if (-1 < iVar6) {
    puVar8 = (uint *)(&stack0x00000008 + (iVar6 + unaff_r27) * 4);
    puVar12 = &stack0x00000008 + iVar6 * 4;
    do {
      uVar9 = *puVar8;
      uVar5 = uVar9;
      if (iVar10 != -1) {
        uVar11 = iVar10 + 1;
        uVar5 = uVar11 >> 0x10;
        uVar1 = uVar11 & 0xffff;
        param_11 = puVar8[-1];
        param_12 = *puVar8;
        if (uVar5 == 0xffff) {
          uVar3 = param_12 >> 0x10;
        }
        else {
          uVar3 = param_12 / (uVar5 + 1);
        }
        uVar4 = (uVar3 & 0xffff) * uVar1;
        param_11 = puVar8[-1] + uVar4 * -0x10000;
        if (uVar4 * -0x10000 - 1 < param_11) {
          param_12 = param_12 - 1;
        }
        param_12 = (param_12 - (uVar4 >> 0x10)) - (uVar3 & 0xffff) * uVar5;
        while ((uVar5 < param_12 || ((param_12 == uVar5 && (uVar1 << 0x10 <= param_11))))) {
          param_11 = param_11 + uVar1 * -0x10000;
          if (uVar1 * -0x10000 - 1 < param_11) {
            param_12 = param_12 - 1;
          }
          param_12 = param_12 - uVar5;
          uVar3 = uVar3 + 1;
        }
        if (uVar5 == 0xffff) {
          uVar4 = param_12 & 0xffff;
        }
        else {
          uVar4 = (param_12 * 0x10000 + (param_11 >> 0x10)) / (uVar5 + 1);
        }
        iVar2 = (uVar4 & 0xffff) * uVar1;
        uVar5 = (uVar4 & 0xffff) * uVar5;
        param_11 = param_11 - iVar2;
        if (-iVar2 - 1U < param_11) {
          param_12 = param_12 - 1;
        }
        param_11 = param_11 + uVar5 * -0x10000;
        if (uVar5 * -0x10000 - 1 < param_11) {
          param_12 = param_12 - 1;
        }
        param_12 = param_12 - (uVar5 >> 0x10);
        while ((param_12 != 0 || (uVar11 <= param_11))) {
          param_11 = param_11 - uVar11;
          if (-uVar11 - 1 < param_11) {
            param_12 = param_12 + -1;
          }
          uVar4 = uVar4 + 1;
        }
        uVar5 = uVar3 * 0x10000 + (uVar4 & 0xffff);
      }
      iVar2 = FUN_001e9334(puVar12,puVar12,uVar5,unaff_r26,unaff_r27);
      uVar9 = uVar9 - iVar2;
      *puVar8 = uVar9;
      if (uVar9 != 0) goto LAB_001e9784;
      iVar2 = FUN_001e9210(puVar12,unaff_r26,unaff_r27);
      while (-1 < iVar2) {
LAB_001e9784:
        do {
          iVar2 = FUN_001e90ec(puVar12,puVar12,unaff_r26,unaff_r27);
          uVar5 = *puVar8;
          *puVar8 = uVar5 - iVar2;
        } while (uVar5 - iVar2 != 0);
        iVar2 = FUN_001e9210(puVar12,unaff_r26,unaff_r27);
      }
      puVar8 = puVar8 + -1;
      puVar12 = puVar12 + -4;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  if (unaff_r23 != 0) {
    puVar7 = (undefined4 *)(unaff_r26 + -4);
    do {
      puVar7 = puVar7 + 1;
      *puVar7 = 0;
      unaff_r23 = unaff_r23 + -1;
    } while (unaff_r23 != 0);
  }
  FUN_001e91b4(unaff_r26,&stack0x00000008,unaff_r25,unaff_r27);
  return;
}

