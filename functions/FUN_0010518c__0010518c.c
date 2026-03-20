/*
 * Program: n42.bin
 * Function: FUN_0010518c
 * Entry: 0010518c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0010518c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 *param_5)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_28;
  int local_24;
  
  if (param_5 == (undefined4 *)0x0) {
    local_24 = FUN_00105cac(param_2,param_4,&DAT_003f9da0,param_3,&DAT_003f9e40,0);
    if (local_24 == -1) {
      local_24 = -2;
    }
    else if (_DAT_003f9da0 == 4) {
      iVar2 = 0;
      do {
        uVar4 = *(uint *)(&UNK_003f9da4 + iVar2 * 4);
        pbVar1 = (byte *)(param_1 + iVar2 * 4 + -1);
        iVar3 = 4;
        do {
          pbVar1 = pbVar1 + 1;
          if ((uint)*pbVar1 != (uVar4 & 0xff)) {
            return -1;
          }
          uVar4 = uVar4 >> 8;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
    }
    else {
      local_24 = -1;
    }
  }
  else {
    if (*(char *)param_5 == '\0') {
      *(char *)(param_5 + 1) = '\0';
    }
    else {
      local_28 = *param_5;
    }
    local_24 = FUN_00105cac(param_2,param_4,&DAT_003f9da0,param_3,&DAT_003f9e40,param_5 + 1);
    if (local_24 == -1) {
      local_24 = -2;
    }
    if (*(char *)(param_5 + 1) == '\0') {
      if (_DAT_003f9da0 != 4) {
        local_24 = -1;
      }
      if (local_24 == 0) {
        iVar2 = 0;
        do {
          uVar4 = *(uint *)(&UNK_003f9da4 + iVar2 * 4);
          pbVar1 = (byte *)(param_1 + iVar2 * 4 + -1);
          iVar3 = 4;
          do {
            pbVar1 = pbVar1 + 1;
            if ((uint)*pbVar1 != (uVar4 & 0xff)) {
              local_24 = -1;
            }
            uVar4 = uVar4 >> 8;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          iVar2 = iVar2 + 1;
        } while (iVar2 < 4);
      }
      if (*(char *)param_5 != '\0') {
        *(char *)param_5 = '\0';
      }
    }
    else {
      local_28 = CONCAT13(1,local_28._1_3_);
      *param_5 = local_28;
      local_24 = 1;
    }
  }
                    /* WARNING: Read-only address (ram,0x003f9da0) is written */
  return local_24;
}

