/*
 * Program: n42.bin
 * Function: FUN_00104f20
 * Entry: 00104f20
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_00104f20(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined2 uVar2;
  int iVar1;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_28;
  int local_24;
  
  if (param_5 == (undefined4 *)0x0) {
    FUN_00104950();
    if (0 < param_1) {
      puVar4 = (undefined4 *)(param_3 + -4);
      puVar3 = (undefined4 *)(param_2 + -4);
      do {
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
        FUN_00104bd4(*puVar3,*puVar4,0);
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    FUN_00104da0(param_4);
    iVar1 = 0;
  }
  else {
    if (*(char *)param_5 == '\0') {
      local_24._0_2_ = 0;
      FUN_00104950();
      *(char *)((int)param_5 + 6) = '\0';
    }
    else {
      local_28 = *param_5;
      local_24._0_2_ = (short)((uint)param_5[1] >> 0x10);
    }
    local_24 = (int)local_24._0_2_;
    if (local_24 < param_1) {
      puVar4 = (undefined4 *)(param_3 + local_24 * 4 + -4);
      puVar3 = (undefined4 *)(param_2 + local_24 * 4 + -4);
      do {
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
        uVar2 = FUN_00104bd4(*puVar3,*puVar4,(char *)((int)param_5 + 6));
        local_28 = CONCAT22(local_28._0_2_,uVar2);
        if (*(char *)((int)param_5 + 6) != '\0') {
          local_28 = CONCAT13(1,local_28._1_3_);
          local_24 = local_24 << 0x10;
          *param_5 = local_28;
          param_5[1] = local_24;
          return 1;
        }
        local_24 = local_24 + 1;
      } while (local_24 < param_1);
    }
    FUN_00104da0(param_4);
    if (*(char *)param_5 != '\0') {
      *(char *)param_5 = '\0';
    }
    iVar1 = (int)local_28._2_2_;
  }
  return iVar1;
}

