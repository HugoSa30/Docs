/*
 * Program: n42.bin
 * Function: FUN_0011bf94
 * Entry: 0011bf94
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011bf94(undefined4 param_1,char **param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  short sVar6;
  
  cVar5 = *(char *)(param_2 + 3);
  sVar6 = *(short *)((int)param_2 + 6);
  bVar1 = (*param_2)[1];
  if (DAT_003fb2e0 != '\0') {
    **param_2 = '!';
    *(undefined2 *)(param_2 + 2) = 1;
    *(undefined *)((int)param_2 + 10) = 2;
    return;
  }
  if (DAT_003fb2a1 == '\0') {
    if ((cVar5 != -0x7f) && (cVar5 != -0x7a)) {
      FUN_00101a38(0,param_2);
      return;
    }
LAB_0011c04c:
    if (((sVar6 != 1) && (sVar6 != 2)) && (sVar6 != 5)) {
      **param_2 = '\x12';
      *(undefined2 *)(param_2 + 2) = 1;
      *(undefined *)((int)param_2 + 10) = 2;
      return;
    }
  }
  else {
    uVar2 = FUN_00122170();
    if ((uVar2 & 8) != 0) {
      **param_2 = '\x10';
      goto LAB_0011c394;
    }
    cVar5 = -0x7a;
    if (sVar6 != 0) goto LAB_0011c04c;
    sVar6 = 1;
  }
  if (DAT_003fb2a1 == '\0') {
    if ((sVar6 == 2) || (sVar6 == 5)) {
      if (0x34 < bVar1) {
        **param_2 = '\x12';
        *(undefined2 *)(param_2 + 2) = 1;
        *(undefined *)((int)param_2 + 10) = 2;
        return;
      }
                    /* WARNING: Could not emulate address calculation at 0x0011c0b0 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)bVar1 * 4 + 0xf1c0bc))();
      return;
    }
    FUN_001080ac(0xf096b4);
    (**(code **)(_DAT_003fbd60 + 0xc))();
  }
  if (cVar5 == -0x7a) {
    if (DAT_003fb2a1 == '\x01') {
      DAT_003fb2a1 = '\0';
    }
    else {
      iVar3 = func_0xff209390();
      if (iVar3 == 0x100) {
        cVar4 = FUN_00122430();
        if (cVar4 == '\0') {
          **param_2 = '\"';
          *(undefined2 *)(param_2 + 2) = 1;
          *(undefined *)((int)param_2 + 10) = 2;
          return;
        }
        DAT_003fb2a1 = '\x01';
      }
    }
  }
  else {
    DAT_003fb2a1 = '\0';
  }
  if (DAT_003fb2a1 == '\0') {
    if (cVar5 == -0x7f) {
      FUN_0010c7ec(0);
    }
    else if (cVar5 == -0x7a) {
      FUN_0010c7ec(4);
    }
    (**(code **)(_DAT_003fbd60 + 0x10))();
    if (sVar6 == 1) {
      *(undefined2 *)(param_2 + 2) = 1;
    }
    else {
      (*param_2)[1] = bVar1;
      *(undefined2 *)(param_2 + 2) = 2;
    }
    **param_2 = cVar5;
    *(undefined *)((int)param_2 + 10) = 1;
    return;
  }
  **param_2 = '!';
LAB_0011c394:
  *(undefined2 *)(param_2 + 2) = 1;
  *(undefined *)((int)param_2 + 10) = 2;
  return;
}

