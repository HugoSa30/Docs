/*
 * Program: n42.bin
 * Function: FUN_000fb5f0
 * Entry: 000fb5f0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fb5f0(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  int *local_c;
  int local_8;
  int local_4;
  
  local_4 = param_1[1];
  local_8 = *param_1;
  while (local_8 != 0) {
    if (local_8 < 9) {
      if (local_8 == 8) {
        _DAT_003fbcf4 = param_1 + 2;
      }
      else if (local_8 == 1) {
        _DAT_003fbcbc = param_1 + 2;
      }
      else if (local_8 == 2) {
        _DAT_003fbcf8 = param_1 + 2;
      }
      else if (local_8 == 4) {
        _DAT_003fbd00 = param_1 + 2;
      }
    }
    else if (local_8 == 0x10) {
      iVar4 = param_1[2];
      if (param_1[3] == 0) {
        puVar1 = (undefined *)(param_1[4] + -1);
        do {
          puVar1 = puVar1 + 1;
          *puVar1 = 0xff;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      else {
        puVar1 = (undefined *)(param_1[3] + -1);
        puVar2 = (undefined *)(param_1[4] + -1);
        do {
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
          *puVar2 = *puVar1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    else if (local_8 == 0x20) {
      local_c = param_1;
      FUN_000fc4c8(&local_c);
    }
    else if ((local_8 == 0x40) && (param_1[2] != 0)) {
      FUN_000fb5f0();
    }
    piVar3 = (int *)((int)param_1 + local_4 + 8);
    local_4 = *(int *)((int)param_1 + local_4 + 0xc);
    param_1 = piVar3;
    local_8 = *piVar3;
  }
  return;
}

