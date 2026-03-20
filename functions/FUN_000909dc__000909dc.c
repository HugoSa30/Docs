/*
 * Program: n42.bin
 * Function: FUN_000909dc
 * Entry: 000909dc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000909dc(undefined *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined uVar5;
  undefined4 uVar4;
  
  if ((uint)DAT_003f9f26 == (byte)param_1[0x10] + 7) {
    iVar1 = FUN_00096a30(_DAT_003f9f18 + 1);
    iVar2 = FUN_00096a30(_DAT_003f9f18 + 4);
    cVar3 = (**(code **)(param_1 + 8))(iVar1,(iVar2 - iVar1) + 1,_DAT_003f9f18 + 7);
    if (cVar3 == '\0') {
      *_DAT_003f9f1c = *_DAT_003f9f18;
      uVar4 = 10;
      goto LAB_00090a80;
    }
    uVar5 = param_1[3];
  }
  else {
    uVar5 = *param_1;
  }
  *_DAT_003f9f20 = uVar5;
  uVar4 = 0x14;
LAB_00090a80:
  FUN_00095b8c(uVar4,1);
  return;
}

